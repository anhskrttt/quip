#pragma once
#include <hiprand.hpp>
#define CURAND_DIRECTION_VECTORS_32_JOEKUO6 HIPRAND_DIRECTION_VECTORS_32_JOEKUO6
#define CURAND_DIRECTION_VECTORS_64_JOEKUO6 HIPRAND_DIRECTION_VECTORS_64_JOEKUO6
#define CURAND_ORDERING_PSEUDO_BEST HIPRAND_ORDERING_PSEUDO_BEST
#define CURAND_ORDERING_PSEUDO_DEFAULT HIPRAND_ORDERING_PSEUDO_DEFAULT
#define CURAND_ORDERING_PSEUDO_DYNAMIC HIPRAND_ORDERING_PSEUDO_DYNAMIC
#define CURAND_ORDERING_PSEUDO_LEGACY HIPRAND_ORDERING_PSEUDO_LEGACY
#define CURAND_ORDERING_PSEUDO_SEEDED HIPRAND_ORDERING_PSEUDO_SEEDED
#define CURAND_ORDERING_QUASI_DEFAULT HIPRAND_ORDERING_QUASI_DEFAULT
#define CURAND_RNG_PSEUDO_DEFAULT HIPRAND_RNG_PSEUDO_DEFAULT
#define CURAND_RNG_PSEUDO_MRG32K3A HIPRAND_RNG_PSEUDO_MRG32K3A
#define CURAND_RNG_PSEUDO_MT19937 HIPRAND_RNG_PSEUDO_MT19937
#define CURAND_RNG_PSEUDO_MTGP32 HIPRAND_RNG_PSEUDO_MTGP32
#define CURAND_RNG_PSEUDO_PHILOX4_32_10 HIPRAND_RNG_PSEUDO_PHILOX4_32_10
#define CURAND_RNG_PSEUDO_XORWOW HIPRAND_RNG_PSEUDO_XORWOW
#define CURAND_RNG_QUASI_DEFAULT HIPRAND_RNG_QUASI_DEFAULT
#define CURAND_RNG_QUASI_SCRAMBLED_SOBOL32 HIPRAND_RNG_QUASI_SCRAMBLED_SOBOL32
#define CURAND_RNG_QUASI_SCRAMBLED_SOBOL64 HIPRAND_RNG_QUASI_SCRAMBLED_SOBOL64
#define CURAND_RNG_QUASI_SOBOL32 HIPRAND_RNG_QUASI_SOBOL32
#define CURAND_RNG_QUASI_SOBOL64 HIPRAND_RNG_QUASI_SOBOL64
#define CURAND_RNG_TEST HIPRAND_RNG_TEST
#define CURAND_SCRAMBLED_DIRECTION_VECTORS_32_JOEKUO6 HIPRAND_SCRAMBLED_DIRECTION_VECTORS_32_JOEKUO6
#define CURAND_SCRAMBLED_DIRECTION_VECTORS_64_JOEKUO6 HIPRAND_SCRAMBLED_DIRECTION_VECTORS_64_JOEKUO6
#define CURAND_STATUS_ALLOCATION_FAILED HIPRAND_STATUS_ALLOCATION_FAILED
#define CURAND_STATUS_ARCH_MISMATCH HIPRAND_STATUS_ARCH_MISMATCH
#define CURAND_STATUS_DOUBLE_PRECISION_REQUIRED HIPRAND_STATUS_DOUBLE_PRECISION_REQUIRED
#define CURAND_STATUS_INITIALIZATION_FAILED HIPRAND_STATUS_INITIALIZATION_FAILED
#define CURAND_STATUS_INTERNAL_ERROR HIPRAND_STATUS_INTERNAL_ERROR
#define CURAND_STATUS_LAUNCH_FAILURE HIPRAND_STATUS_LAUNCH_FAILURE
#define CURAND_STATUS_LENGTH_NOT_MULTIPLE HIPRAND_STATUS_LENGTH_NOT_MULTIPLE
#define CURAND_STATUS_NOT_INITIALIZED HIPRAND_STATUS_NOT_INITIALIZED
#define CURAND_STATUS_OUT_OF_RANGE HIPRAND_STATUS_OUT_OF_RANGE
#define CURAND_STATUS_PREEXISTING_FAILURE HIPRAND_STATUS_PREEXISTING_FAILURE
#define CURAND_STATUS_SUCCESS HIPRAND_STATUS_SUCCESS
#define CURAND_STATUS_TYPE_ERROR HIPRAND_STATUS_TYPE_ERROR
#define CURAND_STATUS_VERSION_MISMATCH HIPRAND_STATUS_VERSION_MISMATCH
#define curand hiprand
#define curandCreateGenerator hiprandCreateGenerator
#define curandCreateGeneratorHost hiprandCreateGeneratorHost
#define curandCreatePoissonDistribution hiprandCreatePoissonDistribution
#define curandDestroyDistribution hiprandDestroyDistribution
#define curandDestroyGenerator hiprandDestroyGenerator
#define curandDirectionVectorSet hiprandDirectionVectorSet_t
#define curandDirectionVectorSet_t hiprandDirectionVectorSet_t
#define curandDirectionVectors32_t hiprandDirectionVectors32_t
#define curandDirectionVectors64_t hiprandDirectionVectors64_t
#define curandDiscreteDistribution_st hiprandDiscreteDistribution_st
#define curandDiscreteDistribution_t hiprandDiscreteDistribution_t
#define curandGenerate hiprandGenerate
#define curandGenerateLogNormal hiprandGenerateLogNormal
#define curandGenerateLogNormalDouble hiprandGenerateLogNormalDouble
#define curandGenerateLongLong hiprandGenerateLongLong
#define curandGenerateNormal hiprandGenerateNormal
#define curandGenerateNormalDouble hiprandGenerateNormalDouble
#define curandGeneratePoisson hiprandGeneratePoisson
#define curandGenerateSeeds hiprandGenerateSeeds
#define curandGenerateUniform hiprandGenerateUniform
#define curandGenerateUniformDouble hiprandGenerateUniformDouble
#define curandGenerator_st hiprandGenerator_st
#define curandGenerator_t hiprandGenerator_t
#define curandGetDirectionVectors32 hiprandGetDirectionVectors32
#define curandGetDirectionVectors64 hiprandGetDirectionVectors64
#define curandGetScrambleConstants32 hiprandGetScrambleConstants32
#define curandGetScrambleConstants64 hiprandGetScrambleConstants64
#define curandGetVersion hiprandGetVersion
#define curandMakeMTGP32Constants hiprandMakeMTGP32Constants
#define curandMakeMTGP32KernelState hiprandMakeMTGP32KernelState
#define curandOrdering hiprandOrdering
#define curandOrdering_t hiprandOrdering_t
#define curandRngType hiprandRngType_t
#define curandRngType_t hiprandRngType_t
#define curandSetGeneratorOffset hiprandSetGeneratorOffset
#define curandSetGeneratorOrdering hiprandSetGeneratorOrdering
#define curandSetPseudoRandomGeneratorSeed hiprandSetPseudoRandomGeneratorSeed
#define curandSetQuasiRandomGeneratorDimensions hiprandSetQuasiRandomGeneratorDimensions
#define curandSetStream hiprandSetStream
#define curandState hiprandState
#define curandStateMRG32k3a hiprandStateMRG32k3a
#define curandStateMRG32k3a_t hiprandStateMRG32k3a_t
#define curandStateMtgp32 hiprandStateMtgp32
#define curandStateMtgp32_t hiprandStateMtgp32_t
#define curandStatePhilox4_32_10 hiprandStatePhilox4_32_10
#define curandStatePhilox4_32_10_t hiprandStatePhilox4_32_10_t
#define curandStateScrambledSobol32 hiprandStateScrambledSobol32
#define curandStateScrambledSobol32_t hiprandStateScrambledSobol32_t
#define curandStateScrambledSobol64 hiprandStateScrambledSobol64
#define curandStateScrambledSobol64_t hiprandStateScrambledSobol64_t
#define curandStateSobol32 hiprandStateSobol32
#define curandStateSobol32_t hiprandStateSobol32_t
#define curandStateSobol64 hiprandStateSobol64
#define curandStateSobol64_t hiprandStateSobol64_t
#define curandStateXORWOW hiprandStateXORWOW
#define curandStateXORWOW_t hiprandStateXORWOW_t
#define curandState_t hiprandState_t
#define curandStatus hiprandStatus
#define curandStatus_t hiprandStatus_t
#define curand_discrete hiprand_discrete
#define curand_discrete4 hiprand_discrete4
#define curand_init hiprand_init
#define curand_log_normal hiprand_log_normal
#define curand_log_normal2 hiprand_log_normal2
#define curand_log_normal2_double hiprand_log_normal2_double
#define curand_log_normal4 hiprand_log_normal4
#define curand_log_normal4_double hiprand_log_normal4_double
#define curand_log_normal_double hiprand_log_normal_double
#define curand_normal hiprand_normal
#define curand_normal2 hiprand_normal2
#define curand_normal2_double hiprand_normal2_double
#define curand_normal4 hiprand_normal4
#define curand_normal4_double hiprand_normal4_double
#define curand_normal_double hiprand_normal_double
#define curand_poisson hiprand_poisson
#define curand_poisson4 hiprand_poisson4
#define curand_uniform hiprand_uniform
#define curand_uniform2_double hiprand_uniform2_double
#define curand_uniform4 hiprand_uniform4
#define curand_uniform4_double hiprand_uniform4_double
#define curand_uniform_double hiprand_uniform_double
