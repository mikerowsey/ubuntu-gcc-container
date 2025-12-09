#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 5;
    int *arr = calloc(x, sizeof(int));

    if (!arr)
    {
        perror("calloc");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < x; i++)
    {
        arr[i] = i * 2;
    }

    printf("Array length: %ld\n", *arr / sizeof(arr[0]));

    for (int i = 0; i < x; i++)
    {
        printf("%4d", arr[i]);
    }

    printf("\n");

    free(arr);
    return 0;
}
