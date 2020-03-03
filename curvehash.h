#ifndef CURVEHASH_H
#define CURVEHASH_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void curve_hash(const unsigned char* input,unsigned char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif
