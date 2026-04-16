#include <stdio.h>
#include <stdlib.h>

struct Node
{
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

int main() {
    struct Node *root = create_node(10);
    root->left = create_node(20);
    root->right = create_node(30);
    root->left->left = create_node(40);
    return 0;
}