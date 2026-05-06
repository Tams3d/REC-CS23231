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

// Find LCA in BST
struct Node *LCA(struct Node *root, int p, int q) {
    if (root == NULL)
        return NULL;

    // If both are smaller → go left
    if (p < root->data && q < root->data)
        return LCA(root->left, p, q);

    // If both are greater → go right
    if (p > root->data && q > root->data)
        return LCA(root->right, p, q);

    // Split point → this is LCA
    return root;
}

int main() {
    int n, val, p, q;
    struct Node *root = NULL;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        root = insert(root, val);
    }
    scanf("%d", &p);
    scanf("%d", &q);

    struct Node *lca = LCA(root, p, q);

    if (lca)
        printf("%d", lca->data);

    return 0;
}