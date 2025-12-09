#include <stdio.h>
#include <stdlib.h>
#include "util.h"

int main(void)
{
    size_t x = 5;
    int *arr = calloc(x, sizeof(int));

    if (!arr)
    {
        return EXIT_FAILURE;
    }

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i * 2;
    }

    printf("Array length: %ld\n", *arr / sizeof(arr[0]));

    free(arr);
    return 0;
}
