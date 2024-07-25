import tvm
from tvm import topi

def test_tvm_build(func):
    def wrapper(*args, **kwargs):
        target = tvm.target.Target(target="c", host="llvm")

        trs, ret_ops = func(*args, **kwargs)
        # test tvm schedule creation
        s = tvm.te.create_schedule(ret_ops)
        # test lower
        # print(tvm.lower(s, trs, simple_mode=True))
        # test tvm build
        tvm_func = tvm.build(s, trs, target=target)
        print("\n", tvm_func.imported_modules[0].get_pure_source())

    return wrapper

@test_tvm_build
def inception_block(N, H, W, C):
    # first inception block channel nums
    # (192, 64, (96, 128), (16, 32), 32)
    C = 192
    c1 = 64
    c2 = (96, 128)
    c3 = (16, 32)
    c4 = 32
    x = tvm.te.placeholder((N, H, W, C), name = "x")
    # branch 1, 1x1 kernel
    p1_1 = tvm.te.placeholder((1, 1, C, c1), name = "p1_1")
    # branch 2, 1x1 -> 3x3
    p2_1 = tvm.te.placeholder((1, 1, C, c2[0]), name = "p2_1")
    p2_2 = tvm.te.placeholder((3, 3, c2[0], c2[1]), name = "p2_2")
    # branch 3, 1x1 -> 5x5
    p3_1 = tvm.te.placeholder((1, 1, C, c3[0]), name = "p3_1")
    p3_2 = tvm.te.placeholder((5, 5, c3[0], c3[1]), name="p3_2")
    # branch 4, 3x3 -> 1x1
    p4_2 = tvm.te.placeholder((1, 1, C, c4), name = "p4_2")
    
    # forward
    # branch 1
    conv1 = topi.nn.conv2d_nhwc(x, p1_1, stride=1, padding=0, dilation=1)
    act1 = topi.nn.relu(conv1)
    # branch 2
    conv2_1 = topi.nn.conv2d_nhwc(x, p2_1, stride=1, padding=0, dilation=1)
    act2_1 = topi.nn.relu(conv2_1)
    conv2_2 = topi.nn.conv2d_nhwc(act2_1, p2_2, stride=1, padding=1, dilation=1)
    act2_2 = topi.nn.relu(conv2_2)
    # branch 3
    conv3_1 = topi.nn.conv2d_nhwc(x, p3_1, stride=1, padding=0, dilation=1)
    act3_1 = topi.nn.relu(conv3_1)
    conv3_2 = topi.nn.conv2d_nhwc(act3_1, p3_2, stride=1, padding=2, dilation=1)
    act3_2 = topi.nn.relu(conv3_2)
    # branch 4
    pool4_1 = topi.nn.pool2d(x, [3, 3], stride=[1, 1], dilation=[1, 1], 
                            padding=[1, 1, 1, 1], pool_type="max", layout="NHWC")
    conv4_2 = topi.nn.conv2d_nhwc(pool4_1, p4_2, stride=1, padding=0, dilation=1)
    act4_2 = topi.nn.relu(conv4_2)
    # concat to output
    output = topi.concatenate((act1, act2_2, act3_2, act4_2), axis=3)

    # 同时返回了所有的输出op
    ret_ops = [output.op]
    # return all inputs and final outputs, ret_ops
    return [x, p1_1, p2_1, p2_2, p3_1, p3_2, p4_2, output], ret_ops

@test_tvm_build
def gru_unit(bs, num_inputs, num_hiddens, num_outputs):

    def get_params(num_inputs, num_hiddens, suffix:str):
        W_x = tvm.te.placeholder((num_inputs, num_hiddens), name = "W_x" + suffix)
        W_h = tvm.te.placeholder((num_hiddens, num_hiddens), name = "W_h" + suffix)
        b = tvm.te.placeholder((num_hiddens,), name = "b_" + suffix)
        return (W_x, W_h, b)

    W_xz, W_hz, b_z = get_params(num_inputs, num_hiddens, "z")  
    W_xr, W_hr, b_r = get_params(num_inputs, num_hiddens, "r")
    W_xh, W_hh, b_h = get_params(num_inputs, num_hiddens, "h") 
    W_hq = tvm.te.placeholder((num_hiddens, num_outputs), name = "W_hq")
    b_q = tvm.te.placeholder((num_outputs,), name = "b_q")

    # init hidden state
    h_init = tvm.te.placeholder((bs, num_hiddens), name="h_init")    
    x = tvm.te.placeholder((bs, num_inputs), name="x")

    # only calculate single time-step
    gemm_1 = topi.nn.matmul(x, W_xz)
    gemm_2 = topi.nn.matmul(h_init, W_hz)
    z = topi.sigmoid(topi.add(topi.add(gemm_1, gemm_2), b_z))

    gemm_3 = topi.nn.matmul(x, W_xr)
    gemm_4 = topi.nn.matmul(h_init, W_hr)
    r = topi.sigmoid(topi.add(topi.add(gemm_3, gemm_4), b_r))

    gemm_5 = topi.nn.matmul(x, W_xh)
    mul_1 = topi.multiply(r, h_init)
    gemm_6 = topi.nn.matmul(mul_1, W_hh)
    h_tilda = topi.tanh(topi.add(topi.add(gemm_5, gemm_6), b_h))
    
    mul_2 = topi.multiply(topi.subtract(tvm.tir.const(1), z), h_tilda)
    h_upd = topi.add(topi.multiply(z, h_init), mul_2)
    gemm_7 = topi.nn.matmul(h_upd, W_hq)
    y = topi.add(gemm_7, b_q)

    ret_ops = [y.op]
    return [x, h_init, W_xz, W_hz, b_z, W_xr, W_hr, b_r, W_xh, W_hh, b_h, W_hq, b_q, y], ret_ops


@test_tvm_build
def transformer_block(bs, seq_len, num_heads, head_dim, hidden_size, inter_size):

    def rotate_half(x: tvm.te.Tensor):
        assert len(x.shape) == 4
        dim1, dim2, dim3, dim4 = x.shape
        x1 = topi.strided_slice(x, [0, 0, 0, 0], [dim1, dim2, dim3, dim4//2])
        x2 = topi.strided_slice(x, [0, 0, 0, dim4 // 2], [dim1, dim2, dim3, dim4])
        tr_concat = topi.concatenate([x1, x2], axis=3)
        return tr_concat

    assert num_heads * head_dim == hidden_size
    x = tvm.te.placeholder((bs, seq_len, hidden_size), name = "x")

    # q, k, v, o weight matrix
    q_proj = tvm.te.placeholder((hidden_size, num_heads * head_dim), name = "q_proj")
    k_proj = tvm.te.placeholder((hidden_size, num_heads * head_dim), name = "k_proj")
    v_proj = tvm.te.placeholder((hidden_size, num_heads * head_dim), name = "v_proj")
    o_proj = tvm.te.placeholder((num_heads * head_dim, hidden_size), name = "o_proj")
    # rotary embedding sin, cos
    rope_sin = tvm.te.placeholder((bs, 1, seq_len, head_dim), name = "rope_sin")
    rope_cos = tvm.te.placeholder((bs, 1, seq_len, head_dim), name = "rope_cos")
    # rms norm weight
    rms_w_1 = tvm.te.placeholder((hidden_size, ), name = "rms_w_1")
    rms_w_2 = tvm.te.placeholder((hidden_size, ), name = "rms_w_2")

    # input layer norm
    x_norm = topi.nn.rms_norm(x, rms_w_1, axis=[2])
    # q, k, v projection
    x_2d = topi.reshape(x_norm, (bs*seq_len, hidden_size))
    q = topi.nn.matmul(x_2d, q_proj)
    k = topi.nn.matmul(x_2d, k_proj)
    v = topi.nn.matmul(x_2d, v_proj)

    q_reshape = topi.reshape(q, (bs, seq_len, num_heads, head_dim))
    k_reshape = topi.reshape(k, (bs, seq_len, num_heads, head_dim))
    v_reshape = topi.reshape(v, (bs, seq_len, num_heads, head_dim))

    q_trans = topi.transpose(q_reshape, (0, 2, 1, 3))   # bs, head, s, head_dim
    k_trans = topi.transpose(k_reshape, (0, 2, 1, 3))   # bs, head, s, head_dim
    v_trans = topi.transpose(v_reshape, (0, 2, 1, 3))   # bs, head, s, head_dim

    # apply rotary embedding
    q_embed = topi.add(topi.multiply(q_trans, rope_cos), 
                        topi.multiply(rotate_half(q_trans), rope_sin))
    k_embed = topi.add(topi.multiply(k_trans, rope_cos),
                        topi.multiply(rotate_half(k_trans), rope_sin))

    # q @ k
    attn_weights = topi.einsum('bnsh, bnkh->bnsk', q_embed, k_embed)    # bs, head, s, s
    softmax_out = topi.nn.softmax(attn_weights, axis=3)
    # attn @ v
    attn_out = topi.einsum("bnsk, bnkh->bnsh", softmax_out, v_trans)
    attn_out_trans = topi.transpose(attn_out, [0, 2, 1, 3])
    attn_out_reshape = topi.reshape(attn_out_trans, [bs*seq_len, num_heads * head_dim])
    # o_proj
    attn_out_proj = topi.nn.matmul(attn_out_reshape, o_proj)
    # residual add
    residual_add = topi.add(attn_out_proj, x_norm)
    out_norm = topi.nn.rms_norm(residual_add, rms_w_2, axis=[2])
    
    # ffn block
    gate_proj = tvm.te.placeholder((hidden_size, inter_size), name = "gate_proj")
    up_proj = tvm.te.placeholder((hidden_size, inter_size), name = "up_proj")
    down_proj = tvm.te.placeholder((inter_size, inter_size), name = "down_proj")

    out_norm_2d = topi.reshape(out_norm, [bs*seq_len, hidden_size])
    gate_out = topi.nn.matmul(out_norm_2d, gate_proj)
    gate_out_act = topi.multiply(gate_out, topi.sigmoid(gate_out))
    up_out = topi.nn.matmul(out_norm_2d, up_proj)
    gate_up = topi.multiply(gate_out_act, up_out)

    down_out = topi.nn.matmul(gate_up, down_proj)
    down_out_reshape = topi.reshape(down_out, [bs, seq_len, hidden_size])
    ffn_res_add = topi.add(out_norm, down_out_reshape)

    ret_ops = [ffn_res_add.op]
    ret_trs = [x, q_proj, k_proj, v_proj, o_proj, gate_proj, up_proj, down_proj,
                rms_w_1, rms_w_2, rope_sin, rope_cos, ffn_res_add]

    return ret_trs, ret_ops

@test_tvm_build
def wavenet_block(n, feat_dim, seq_len):

    def causal_conv1d(tr_in, ic, oc, kernel_size, dilation=1):
        filter = tvm.te.placeholder((oc, ic, kernel_size))
        padding = (kernel_size - 1) * dilation
        conv1d_out = topi.nn.conv1d(tr_in, filter, padding=padding, dilation=dilation)
        dim1, dim2, dim3 = conv1d_out.shape
        conv1d_slice = topi.strided_slice(conv1d_out, [0, 0, 0], [dim1, dim2, dim3-padding])
        return conv1d_slice, filter

    def residual_layer(tr_in, rc, sc, dilation):
        conv1, filter1 = causal_conv1d(tr_in, rc, rc, 3, dilation)
        conv2, filter2 = causal_conv1d(tr_in, rc, rc, 3, dilation)
        act1 = topi.tanh(conv1)
        act2 = topi.sigmoid(conv2)
        fx = topi.add(act1, act2)

        res_filter1 = tvm.te.placeholder((rc, rc, 1))
        res_conv1 = topi.nn.conv1d(fx, res_filter1)
        skip_filter1 = tvm.te.placeholder((rc, sc, 1))
        skip_conv1 = topi.nn.conv1d(fx, skip_filter1)
        res_add = topi.add(res_conv1, skip_conv1)

        return res_add, [filter1, filter2, res_filter1, skip_filter1]


    x = tvm.te.placeholder((n, feat_dim, seq_len), name = "x")
    causal_out1, causal_filter1 = causal_conv1d(x, feat_dim, 128, 3, 1)

    res1_out, res1_filters = residual_layer(causal_out1, 128, 64, 1)
    res2_out, res2_filters = residual_layer(res1_out, 128, 64, 2)
    res3_out, res3_filters = residual_layer(res2_out, 128, 64, 4)
    res4_out, res4_filters = residual_layer(res3_out, 128, 64, 8)

    final_res = topi.concatenate([res1_out, res2_out, res3_out, res4_out], axis=1)
    print("final res shape: ", final_res.shape)

    ret_ops = [final_res.op]
    ret_trs = [x, causal_filter1, res1_out, res2_out, res3_out, res4_out]

    ret_trs.extend(res1_filters)
    ret_trs.extend(res2_filters)
    ret_trs.extend(res3_filters)
    ret_trs.extend(res4_filters)
    
    return ret_trs, ret_ops


@test_tvm_build
def resnet_block(N, C, H, W, use_11_conv):
    num_c = 64
    #input x
    x = tvm.te.placeholder((N, C, H, W), name = "x")
    #
    p_1 = tvm.te.placeholder((num_c, C, 3, 3), name = "p_1")
    p_2 = tvm.te.placeholder((num_c, num_c, 3, 3), name = "p_2")
    
    if use_11_conv:
        p_3 = tvm.te.placeholder((1, num_c, 1, C), name = "p_3")
    else:
        p_3 = None
    
    #forward
    #first conv
    conv1 = topi.nn.conv2d_nchw(x, p_1, stride = 1, padding = 0, dilation = 1)
    #first batch norm
    moving_mean1 = tvm.te.placeholder((1, conv1.shape[1], conv1.shape[2], conv1.shape[3]), name="moving_mean1")
    moving_var1 = tvm.te.placeholder((1, conv1.shape[1], conv1.shape[2], conv1.shape[3]), name="moving_var1")
    gamma1 = tvm.te.placeholder((1,), name="gamma1")
    beta1 = tvm.te.placeholder((1,), name="beta1")

    bn1 = topi.nn.batch_norm(conv1, gamma1, beta1, moving_mean1, moving_var1)[0]
    #first relu
    act1 = topi.nn.relu(bn1)
    #second conv
    conv2 = topi.nn.conv2d_nchw(act1, p_2, stride = 1, padding = 0, dilation = 1)

    moving_mean2 = tvm.te.placeholder((1, conv2.shape[1], conv2.shape[2], conv2.shape[3]), name="moving_mean2")
    moving_var2 = tvm.te.placeholder((1, conv2.shape[1], conv2.shape[2], conv2.shape[3]), name="moving_var2")
    gamma2 = tvm.te.placeholder((1,), name="gamma2")
    beta2 = tvm.te.placeholder((1,), name="beta2")

    #second batch norm
    bn2 = topi.nn.batch_norm(conv2, gamma2, beta2, moving_mean2, moving_var2)[0]
    #optional conv
    if p_3:
        conv3 = topi.nn.conv2d_nchw(x, p_3, stride = 1, padding = 0, dilation = 1)
        F = topi.nn.add(bn2, conv3)
    else:
        conv3 = None
        F = bn2
    #final relu
    output = topi.nn.relu(F)

    ret_ops = [output.op]
    # return all inputs and final outputs, ret_ops
    return [x, p_1, p_2, moving_mean1, moving_var1, gamma1, beta1, moving_mean2, moving_var2, gamma2, beta2, output], ret_ops

def fire_module(data, squeeze_c, expand1_1_c, expand3_3_c, name):
    p_1 = tvm.te.placeholder((1, squeeze_c, 1, 1), name="p_1")
    p_2 = tvm.te.placeholder((1, expand1_1_c, 1, 1), name="p_2")
    p_3 = tvm.te.placeholder((1, expand3_3_c, 3, 3), name="p_3")
    #squeeze 1×1 conv
    squeeze = topi.nn.conv2d_nchw(data, p_1, stride=1, padding=0, dilation=1)
    #relu
    squeeze = topi.nn.relu(squeeze)
    
    #expand 1×1 conv
    expand1 = topi.nn.conv2d_nchw(squeeze, p_2, stride=1, padding=0, dilation=1)
    #relu
    expand1 = topi.nn.relu(expand1)

    #expand 3×3 conv
    expand2 = topi.nn.conv2d_nchw(expand1, p_3, stride=1, padding=0, dilation=1)
    #relu
    expand2 = topi.nn.relu(expand2)

    output = topi.concatenate((expand1, expand2), axis=1)

    return [output, p_1, p_2, p_3]

@test_tvm_build
def squeezenet_block(N, C, H, W):  
    x = tvm.te.placeholder((N, C, H, W), name="x")
    p_1 = tvm.te.placeholder((1, 96, 7, 7), name="p_1")
    
    #forward
    #1×96×7×7 conv:
    conv1 = topi.nn.conv2d_nchw(x, p_1, stride=1, padding=0, dilation=1)
    #relu
    re1 = topi.nn.relu(conv1)
    #3×3 max pool
    pool1 = topi.nn.pool2d(re1, [3, 3], stride=[1,1], dilation=[1,1], padding=[1,1,1,1], 
                        pool_type="max", layout="NCHW")
    
    fire1 = fire_module(pool1, squeeze_c=16, expand1_1_c=64, expand3_3_c=64, name="fire1")
    
    fire2 = fire_module(fire1[0], squeeze_c=16, expand1_1_c=64, expand3_3_c=64, name="fire2")

    fire3 = fire_module(fire2[0], squeeze_c=32, expand1_1_c=128, expand3_3_c=128, name="fire3")

    #3×3 max pool
    pool2 = topi.nn.pool2d(fire3[0], [3,3], stride=[1,1], dilation=[1,1], padding=[1,1,1,1], 
                        pool_type="max", layout="NCHW")
    
    fire4 = fire_module(pool2, squeeze_c=32, expand1_1_c=128, expand3_3_c=128, name="fire4")

    fire5 = fire_module(fire4[0], squeeze_c=48, expand1_1_c=192, expand3_3_c=192, name="fire5")
    
    fire6 = fire_module(fire5[0], squeeze_c=48, expand1_1_c=192, expand3_3_c=192, name="fire6")
    
    fire7 = fire_module(fire6[0], squeeze_c=64, expand1_1_c=256, expand3_3_c=256, name="fire7")

    #3×3 max pool
    pool3 = topi.nn.pool2d(fire7[0], [3,3], stride=[1,1], dilation=[1,1], padding=[1,1,1,1], 
                        pool_type="max", layout="NCHW")

    output = fire_module(pool3, squeeze_c=64, expand1_1_c=256, expand3_3_c=256, name="fire8")

    ret_ops = [output[0].op]
    # return all inputs and final outputs, ret_ops
    return [x, p_1, fire1[1],fire1[2],fire1[3], fire2[1],fire2[2],fire2[3],fire3[1],fire3[2],fire3[3],
            fire4[1],fire4[2],fire4[3],fire5[1],fire5[2],fire5[3],fire6[1],fire6[2],fire6[3],
            fire7[1],fire7[2],fire7[3], output[1] ,output[2] ,output[3] ,output[0]], ret_ops


@test_tvm_build
def lstm_block(seq_len, batch_size, in_dim):
    x = tvm.te.placeholder((seq_len, batch_size, in_dim), name="x")
    wi = tvm.te.placeholder((4*4, in_dim), name="wi")
    wh = tvm.te.placeholder((4*4, 4), name="wh")
    output = topi.nn.lstm(x, wi, wh)
    
    return [x, wi, wh, output[0], output[1]], [output[0].op, output[1].op]

@test_tvm_build
def depthwise_block(N, C, H, W):
    x = tvm.te.placeholder((N, C, H, W), name="x")
    con_n = 3
    p_1 = tvm.te.placeholder((con_n, C, 3, 3), name="p_1")
    p_2 = tvm.te.placeholder((con_n, 9, 1, 1), name="p_2")
    #forward
    #first conv
    conv1 = topi.nn.group_conv2d_nchw(x, p_1, stride=1, padding=0, dilation=1, groups=C)
    #first batch norm
    moving_mean1 = tvm.te.placeholder((1, conv1.shape[1], conv1.shape[2], conv1.shape[3]), name="moving_mean1")
    moving_var1 = tvm.te.placeholder((1, conv1.shape[1], conv1.shape[2], conv1.shape[3]), name="moving_var1")
    gamma1 = tvm.te.placeholder((1,), name="gamma1")
    beta1 = tvm.te.placeholder((1,), name="beta1")

    bn1 = topi.nn.batch_norm(conv1, gamma1, beta1, moving_mean1, moving_var1)[0]
    #first relu
    act1 = topi.nn.relu(bn1)
    #second conv
    conv2 = topi.nn.conv2d_nchw(act1, p_2, stride=1, padding=0, dilation=1)
    #second batch norm
    moving_mean2 = tvm.te.placeholder((1, conv2.shape[1], conv2.shape[2], conv2.shape[3]), name="moving_mean2")
    moving_var2 = tvm.te.placeholder((1, conv2.shape[1], conv2.shape[2], conv2.shape[3]), name="moving_var2")
    gamma2 = tvm.te.placeholder((1,), name="gamma2")
    beta2 = tvm.te.placeholder((1,), name="beta2")

    bn2 = topi.nn.batch_norm(conv2, gamma2, beta2, moving_mean2, moving_var2)[0]
    
    output = topi.nn.relu(bn2)

    res_ops = [output.op]

    return [x, p_1, moving_mean1, moving_var1, gamma1, beta1, p_2, moving_mean2, moving_var2, gamma2, beta2, output], res_ops


if __name__ == "__main__":
    # inception_block(1, 128, 128, 192)
    # gru_unit(2, 1000, 256, 128)
    transformer_block(1, 128, 8, 64, 512, 1376)
    # wavenet_block(1, 64, 100)
    # resnet_block(1, 3, 128, 128, False)
    # squeezenet_block(1, 3, 128, 128)
    # lstm_block(128, 4, 2)
    # depthwise_block(1, 3, 128, 128)