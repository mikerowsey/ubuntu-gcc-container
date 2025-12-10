#include <stdio.h>
#include <stdlib.h>
#include "util.h"

int main(void)
{
    const int SIZE = 5;
    int *arr = xcalloc(SIZE, sizeof(int));

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = (i + 1) * 2;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);
    return 0;
}
