#ifndef UTIL_H
#define UTIL_H

#include <stddef.h>

#define ARRAY_LEN(a) ((int)(sizeof(a) / sizeof((a)[0])))

int clamp_int(int value, int min, int max);

void *xmalloc(size_t size);
void *xcalloc(size_t count, size_t size);

void die(const char *message);

#endif
