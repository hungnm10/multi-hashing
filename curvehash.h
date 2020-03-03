#ifndef CURVEHASH_H
#define CURVEHASH_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void curve_hash(const unsigned char* data, unsigned char* hash, int len);

#ifdef __cplusplus
}
#endif

#endif
