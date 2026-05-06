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
int count_nodes(struct Node *root) {
    if (root == NULL)
        return 0;
    return 1 + count_nodes(root->left) + count_nodes(root->right);
}
int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    struct Node *nodes[n];

    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        nodes[i] = create_node(val);
    }

    for (int i = 0; i < n; i++) {
        if (2 * i + 1 < n) {
            nodes[i]->left = nodes[2 * i + 1];
        } else if (2 * i + 2 < n) {
            nodes[i]->right = nodes[2 * i + 2];
        }
    }

    struct Node *root = nodes[0];
    printf("%d", count_nodes(root));

    return 0;
}
