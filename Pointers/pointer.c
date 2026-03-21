#include <stdio.h>
void sum(int a, int b) {
    printf("%d", a + b);
}
int main() {
    int x = 10;
    int *ptr = &x; // & is address of operator
    printf("%d\n", x);
    printf("%d\n", *ptr); // deferencing - value at <any address>

    return 0;
}