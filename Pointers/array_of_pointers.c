#include <stdio.h>
int main() {
    int a = 5, b = 10, c = 15;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptr3 = &c;

    int *ptr_arr[3] = {&a, &b, &c};
    for (int i = 0; i < 3; i++) {
        printf("%p ", ptr_arr[i]);
    }
}