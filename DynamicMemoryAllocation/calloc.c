#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 5;
    int values[] = {10, 20, 30, 40, 50};

    int *arr = (int *)calloc(count, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        arr[i] = values[i];
    }

    printf("Values: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 1;
}