#!/usr/bin/env python3
import os
import re

root_path="HIPIFY/docs/reference/tables"

def header(name,swap,infiles,d,pre):
    for infile in infiles:
        with open(infile) as i:
            for line in i:
                pair = re.findall(r'`[a-zA-Z]\w+`',line)
                if len(pair) == 2 and pair[0] != pair[1]:
                    pair = [pair[0].replace('`',''),pair[1].replace('`','')]
                    if swap:
                        pair = [pair[1],pair[0]]
                    if pair[0] not in d:
                        d[pair[0]] = pair[1]
    keys = list(d.keys())
    keys.sort()
    with open(name,'w') as o:
        print('#pragma once',file=o)
        for line in pre:
            print(line,file=o)
        for key in keys:
            print('#define',key,d[key],file=o)

# Cuda to Hip

header('cuda2hip/cublas_v2.h',False,
        [f'{root_path}/CUBLAS_API_supported_by_HIP.md'],
        dict(),
        ['#include <hipblas.h>'])

header('cuda2hip/cuda.h',False,
        [f'{root_path}/CUDA_Driver_API_functions_supported_by_HIP.md',f'{root_path}/CUDA_Runtime_API_functions_supported_by_HIP.md'],
        {'__shfl_sync':'__shfl','__shfl_up_sync':'__shfl_up','__shfl_down_sync':'__shfl_down','__shfl_xor_sync':'__shfl_xor'},
        ['#include <hip/hip_runtime.h>'])

header('cuda2hip/cuda_runtime.h',False,
        list(),dict(),
        ['#include <cuda.h>'])

header('cuda2hip/cuda_runtime_api.h',False,
        list(),dict(),
        ['#include <cuda.h>'])

header('cuda2hip/cufft.h',False,
        [f'{root_path}/CUFFT_API_supported_by_HIP.md'],
        dict(),
        ['#include <hipfft.h>'])

header('cuda2hip/curand.h',False,
        [f'{root_path}/CURAND_API_supported_by_HIP.md'],
        dict(),
        ['#include <hiprand.hpp>'])

header('cuda2hip/cusparse.h',False,
        [f'{root_path}/CUSPARSE_API_supported_by_HIP.md'],
        dict(),
        ['#include <hipsparse.h>'])

# Hip to Cuda

header('hip2cuda/hipblas.h',True,
        [f'{root_path}/CUBLAS_API_supported_by_HIP.md'],
        dict(),
        ['#include <cublas_v2.h>'])

header('hip2cuda/hip/hip_runtime.h',True,
        [f'{root_path}/CUDA_Runtime_API_functions_supported_by_HIP.md',
            f'{root_path}/CUDA_Driver_API_functions_supported_by_HIP.md'],
        {'__shfl':'__shfl_sync','__shfl_up':'__shfl_up_sync','__shfl_down':'__shfl_down_sync','__shfl_xor':'__shfl_xor_sync',
            'hipLaunchKernelGGL(F,G,B,M,S,...)':'F<<<G,B,M,S>>>(__VA_ARGS__)','hipBlockDim_x':'blockDim.x','hipBlockDim_y':'blockDim.y',
            'hipBlockDim_z':'blockDim.z','hipBlockIdx_x':'blockIdx.x','hipBlockIdx_y':'blockIdx.y','hipBlockIdx_z':'blockIdx.z', 'hipThreadIdx_x':'threadIdx.x',
            'hipThreadIdx_y':'threadIdx.y','hipThreadIdx_z':'threadIdx.z',},
        ['#include <cuda.h>','#include <cuda_runtime.h>'])

header('hip2cuda/hip/hip_runtime_api.h',True,
        [f'{root_path}/CUDA_Runtime_API_functions_supported_by_HIP.md'],
        dict(),
        ['#include <cuda_rutime_api.h>'])

header('hip2cuda/hipfft.h',True,
        [f'{root_path}/CUFFT_API_supported_by_HIP.md'],
        dict(),
        ['#include <cufft.h>'])

header('hip2cuda/hiprand.h',True,
        [f'{root_path}/CURAND_API_supported_by_HIP.md'],
        dict(),
        ['#include <curand.hpp>'])

header('hip2cuda/hipsparse.h',True,
        [f'{root_path}/CUSPARSE_API_supported_by_HIP.md'],
        dict(),
        ['#include <cusparse.h>'])


