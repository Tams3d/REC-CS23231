#include <stdio.h>

#define SIZE 7
int tree[SIZE];

void init() {
    for (int i = 0; i < SIZE; i++) {
        tree[0] = -1;
    }
}

void insertRoot(int value) {
    tree[0] = value;
}

void insertLeft(int pIndex, int value) {
    int idx = 2 * pIndex + 1;
    tree[idx] = value;
}

void insertRight(int pIndex, int value) {
    int idx = 2 * pIndex + 2;
    tree[idx] = value;
}

void display() {
    for (int i = 0; i < SIZE; i++) {
        if (tree[i] != -1)
            printf("%d ", tree[i]);
    }
}

int main() {
    init();

    insertRoot(1);

    insertLeft(0, 2);
    insertRight(0, 3);
    insertLeft(1, 4);
    insertRight(1, 5);

    insertRight(2, 6);

    display();
    return 0;
}