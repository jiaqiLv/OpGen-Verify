extern "C" __global__ void __launch_bounds__(4) default_function_kernel(int* __restrict__ T_shape) {
  T_shape[((int)threadIdx.x)] = ((((int)threadIdx.x) == 3) ? 3 : ((((int)threadIdx.x) == 2) ? 10 : ((((int)threadIdx.x) == 1) ? 18 : 16)));
}
