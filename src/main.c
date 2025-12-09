#include <stdio.h>
#include "util.h"

int main(void) {
    int x = clamp_int(15, 0, 10);
    printf("Clamped value: %d\n", x);

    int *arr = xcalloc(5, sizeof(int));
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 2;
    }

    printf("Array length: %d\n", ARRAY_LEN(arr));

    free(arr);
    return 0;
}
