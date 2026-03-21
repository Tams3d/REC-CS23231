#include <stdio.h>
int main() {
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int *ptr = arr;

    printf("%d\n", *ptr);

    for (int i = 0; i < 7; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}