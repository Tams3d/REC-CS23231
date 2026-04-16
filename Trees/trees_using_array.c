#include <stdio.h>

#define SIZE 100
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
            printf("Index %d = %d\n", i, tree[i]);
    }
}

int main() {
    init();
    insertRoot(15);

    insertLeft(0, 30);
    insertRight(0, 24);
    insertLeft(1, 50);
    insertRight(1, 40);

    insertRight(2, 74);

    display();
    return 0;
}