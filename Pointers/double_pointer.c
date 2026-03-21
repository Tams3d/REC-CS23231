#include <stdio.h>
int main() {
    int a = 10, b = 20;
    int *p = &a;
    int *q = &b;
    int **pp = &p;
    int **qq = &q;
    printf("%d\n", **pp);
    printf("%d\n", **qq);
    return 0;
}
