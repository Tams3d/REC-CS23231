#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

// Create node
struct Node *createNode(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert BST
struct Node *insert(struct Node *root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

// Find predecessor
struct Node *findPredecessor(struct Node *root, int key) {
    struct Node *pre = NULL;

    while (root) {
        if (key > root->data) {
            pre = root;
            root = root->right;
        } else {
            root = root->left;
        }
    }
    return pre;
}

// Find successor
struct Node *findSuccessor(struct Node *root, int key) {
    struct Node *suc = NULL;

    while (root) {
        if (key < root->data) {
            suc = root;
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return suc;
}

int main() {
    int n, val, key;
    struct Node *root = NULL;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        root = insert(root, val);
    }

    scanf("%d", &key);

    struct Node *pre = findPredecessor(root, key);
    struct Node *suc = findSuccessor(root, key);

    if (pre)
        printf("%d ", pre->data);
    else
        printf("NULL ");

    if (suc)
        printf("%d", suc->data);
    else
        printf("NULL");

    return 0;
}