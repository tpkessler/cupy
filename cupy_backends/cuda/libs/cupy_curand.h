// This file is a stub header file of cuda for Read the Docs.

#ifndef INCLUDE_GUARD_CUPY_CURAND_H
#define INCLUDE_GUARD_CUPY_CURAND_H

#if CUPY_USE_HIP

#include "cupy_hiprand.h"

#elif !defined(CUPY_NO_CUDA)

#include <curand.h>

#else // #ifndef CUPY_NO_CUDA

#include "../cupy_cuda_common.h"

extern "C" {

///////////////////////////////////////////////////////////////////////////////
// curand.h
///////////////////////////////////////////////////////////////////////////////

typedef enum {} curandOrdering_t;
typedef enum {} curandRngType_t;
typedef enum {
    CURAND_STATUS_SUCCESS = 0,
} curandStatus_t;

typedef void* curandGenerator_t;


// curandGenerator_t
curandStatus_t curandCreateGenerator(...) {
    return CURAND_STATUS_SUCCESS;
}

curandStatus_t curandDestroyGenerator(...) {
    return CURAND_STATUS_SUCCESS;
}

curandStatus_t curandGetVersion(...) {
    return CURAND_STATUS_SUCCESS;
}


// Stream
curandStatus_t curandSetStream(...) {
    return CURAND_STATUS_SUCCESS;
}

curandStatus_t curandSetPseudoRandomGeneratorSeed(...) {
    return CURAND_STATUS_SUCCESS;
}

curandStatus_t curandSetGeneratorOffset(...) {
    return CURAND_STATUS_SUCCESS;
}

curandStatus_t curandSetGeneratorOrdering(...) {
    return CURAND_STATUS_SUCCESS;
}


// Generation functions
curandStatus_t curandGenerate(...) {
    return CURAND_STATUS_SUCCESS;
}

curandStatus_t curandGenerateLongLong(...) {
    return CURAND_STATUS_SUCCESS;
}

curandStatus_t curandGenerateUniform(...) {
    return CURAND_STATUS_SUCCESS;
}

curandStatus_t curandGenerateUniformDouble(...) {
    return CURAND_STATUS_SUCCESS;
}

curandStatus_t curandGenerateNormal(...) {
    return CURAND_STATUS_SUCCESS;
}

curandStatus_t curandGenerateNormalDouble(...) {
    return CURAND_STATUS_SUCCESS;
}

curandStatus_t curandGenerateLogNormal(...) {
    return CURAND_STATUS_SUCCESS;
}

curandStatus_t curandGenerateLogNormalDouble(...) {
    return CURAND_STATUS_SUCCESS;
}

curandStatus_t curandGeneratePoisson(...) {
    return CURAND_STATUS_SUCCESS;
}

} // extern "C"

#endif // #ifndef CUPY_NO_CUDA
#endif // #ifndef INCLUDE_GUARD_CUPY_CURAND_H
