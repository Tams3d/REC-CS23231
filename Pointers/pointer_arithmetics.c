#include <stdio.h>
int main() {
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int *ptr = arr;
    printf("%zu", sizeof(ptr)); // sizeof <variable>
    printf("%d\n", *ptr);
    printf("%d\n", *(ptr + 1));

    printf("%d\n", *(ptr + 2));
}