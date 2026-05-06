#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Create node
struct node *createNode(int value) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert into BST
struct node *insert(struct node *root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

// Global variables
int count = 0;
int found = 0;

// Inorder traversal for kth smallest
void kthSmallest(struct node *root, int k) {
    if (root == NULL || found)
        return;

    kthSmallest(root->left, k);

    count++;
    if (count == k) {
        printf("%d\n", root->data);
        found = 1;
        return;
    }

    kthSmallest(root->right, k);
}

int main() {
    int n, val, k;
    struct node *root = NULL;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        root = insert(root, val);
    }

    scanf("%d", &k);

    // reset globals
    count = 0;
    found = 0;
    if (k <= 0) {
        printf("Out of range");
        return 0;
    }

    kthSmallest(root, k);
    if (!found)
        printf("Out of range");

    return 0;
}