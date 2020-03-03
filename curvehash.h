#ifndef CURVEHASH_H
#define CURVEHASH_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void curve_hash(const char* data, char* hash, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif
