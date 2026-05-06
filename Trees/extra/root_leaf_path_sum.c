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

// Insert into BST
struct Node *insert(struct Node *root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

// Check path sum
int hasPathSum(struct Node *root, int sum) {
    if (root == NULL)
        return 0;

    // Leaf node check
    if (root->left == NULL && root->right == NULL)
        return (sum == root->data);

    int remaining = sum - root->data;

    return hasPathSum(root->left, remaining) ||
           hasPathSum(root->right, remaining);
}

int main() {
    int n, val, target;
    struct Node *root = NULL;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        root = insert(root, val);
    }

    scanf("%d", &target);

    if (hasPathSum(root, target))
        printf("True");
    else
        printf("False");

    return 0;
}