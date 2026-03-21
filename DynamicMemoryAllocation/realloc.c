#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 5;
    int values[] = {10, 20, 30, 40, 50};

    int *arr = (int *)malloc(count * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        arr[i] = values[i];
    }

    printf("Before realloc: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int new_count = 8;
    int *resized = (int *)realloc(arr, new_count * sizeof(int));
    if (resized == NULL) {
        printf("Memory reallocation failed\n");
        free(arr);
        return 1;
    }
    arr = resized;

    arr[5] = 60;
    arr[6] = 70;
    arr[7] = 80;

    printf("After realloc:  ");
    for (int i = 0; i < new_count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}