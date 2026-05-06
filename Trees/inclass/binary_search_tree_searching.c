#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *create_node(int value) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

struct Node *insert(struct Node *root, int value) {
    if (root == NULL)
        return create_node(value);

    if (value <= root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

void inorder(struct Node *root) {
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

struct Node *search(struct Node *root, int key) {
    if (root == NULL || key == root->data)
        return root;

    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main() {
    int n;
    scanf("%d", &n);

    struct Node *root = NULL;
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        root = insert(root, val);
    }

    int key;
    scanf("%d", &key);
    struct Node *found = search(root, key);
    if (found != NULL) {
        printf("Book found! Subtree rooted at %d:\n", key);
        inorder(found);
    } else {
        printf("Book not found\n");
    }
}