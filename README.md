# Quip

Quip provides a set of header files that translate between Cuda and Hip. The headers are generated from [Hip documentation](https://github.com/ROCm-Developer-Tools/HIP/tree/master/docs/markdown).

The headers are intended to allow programmers to mix Cuda and Hip code and compile for either NVidia or AMD GPUs. The primary restriction is that the Cuda code must use features supported in Hip, and vice versa.

To compile for NVidia GPUs, add the following argument to your `nvcc` compile line, where `<quip-path>` is the path to the Quip directory.
```
-I<quip-path>/hip2cuda
```

To compile for AMD GPUs, add the following argument to your `hipcc` compile line.
```
-I<quip-path>/cuda2hip
```

To regenerate the header files, update the local clone of the [HIPIFY repo](https://github.com/ROCm/HIPIFY).
```
$ cd <quip-path>/HIP
$ git pull
```

Then run the generation script.
```
$ cd <quip-path>
$ ./quip.py
```

## Examples

### HIP2CUDA
```
# Compile
user@a100-1:~/utils/quip/examples$  nvcc -I../hip2cuda -x cu sample_hip.cpp -o hip

# Run program
user@a100-1:~/utils/quip/examples$ ./hip
 System minor 0
 System major 8
 agent prop name NVIDIA A100 80GB PCIe
hip Device prop succeeded
PASSED!
```

### CUDA2HIP
```
# Compile source code
# Please ignore warnings generated as this is just an example
user@mi250-9:~/utils/quip/examples$ hipcc sample_hip.cpp

# Run program
user@mi250-9:~/utils/quip/examples$ ./a.out
 System minor 0
 System major 9
 agent prop name AMD Instinct MI250X/MI250
hip Device prop succeeded
PASSED!
```