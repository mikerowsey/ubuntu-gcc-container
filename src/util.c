#include "util.h"

#include <stdio.h>
#include <stdlib.h>

int clamp_int(int value, int min, int max) {
    if (value < min) return min;
    if (value > max) return max;
    return value;
}

void *xmalloc(size_t size) {
    void *ptr = malloc(size);
    if (!ptr) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    return ptr;
}

void *xcalloc(size_t count, size_t size) {
    void *ptr = calloc(count, size);
    if (!ptr) {
        perror("calloc");
        exit(EXIT_FAILURE);
    }
    return ptr;
}

void die(const char *message) {
    if (message)
        fprintf(stderr, "%s\n", message);
    exit(EXIT_FAILURE);
}
