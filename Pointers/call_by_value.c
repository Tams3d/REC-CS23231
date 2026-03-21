#include <stdio.h>

void update(int x) {
    x = 10;
}
int main() {
    int a = 5;
    update(a);
    printf("%d", a);
    return 0;
}