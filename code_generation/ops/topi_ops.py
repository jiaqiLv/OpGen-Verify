from tvm import (te,
                 auto_scheduler,
                 runtime,
                 topi)


@auto_scheduler.register_workload
def sum(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.sum(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def cosh(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.cosh(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def cos(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.cos(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def acos(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.acos(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def asin(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.asin(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def asinh(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.asinh(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def atan(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.atan(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def atanh(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.atanh(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def ceil(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.ceil(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def clip(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.clip(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def const_vector(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.const_vector(data)
    return [data,out]
    
    

    
@auto_scheduler.register_workload
def erf(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.erf(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def exp(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.exp(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def fast_erf(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.fast_erf(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def fast_exp(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.fast_exp(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def fast_tanh(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.fast_tanh(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def fixed_point_multiply(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.fixed_point_multiply(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def flip(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.flip(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def floor(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.floor(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def full_like(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.full_like(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def isnan(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.isnan(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def log(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.log(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def log10(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.log10(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def log2(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.log2(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def max(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.max(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def min(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.min(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def negative(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.negative(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def prod(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.prod(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def reinterpret(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.reinterpret(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def repeat(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.repeat(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def reshape(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.reshape(data)
    return [data,out]
    

    
@auto_scheduler.register_workload
def round(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.round(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def rsqrt(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.rsqrt(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def shape(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.shape(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def sigmoid(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.sigmoid(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def sign(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.sign(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def sin(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.sin(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def sinh(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.sinh(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def sqrt(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.sqrt(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def tan(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.tan(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def tanh(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.tanh(data)
    return [data,out]
    
    
@auto_scheduler.register_workload
def tile(N,C, H, W):
    data = te.placeholder((N,C,H,W), name="data", dtype="float32")
    out = topi.tile(data)
    return [data,out]


TOPI_OPS_LIST = [sum,cosh,cos,acos,asin,asinh,atan,atanh,ceil,clip,
                 const_vector,const_vector,const_vector,const_vector,erf,exp,fast_erf,fast_exp,fast_tanh,fixed_point_multiply,
                 flip,floor,full_like,isnan,log,log10,log2,max,min,negative,
                 prod,reinterpret,repeat,reshape,reshape,round,rsqrt,shape,sigmoid,sign,
                 sin,sinh,sqrt,tan,tanh,tile]