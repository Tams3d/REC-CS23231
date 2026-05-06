#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

int main() {
    int n;
    scanf("%d", &n);
    if (n == 0)
        return 0;

    struct node *queue[n];
    int front = 0, rear = 0;

    int val;
    scanf("%d", &val);

    struct node *root = createnode(val);
    queue[rear++] = root;

    for (int i = 1; i < n; i++) {
        scanf("%d", &val);
        struct node *newnode = createnode(val);

        struct node *parent = queue[front];
        if (parent->left == NULL) {
            parent->left = newnode;
            queue[rear++] = newnode;
        } else if (parent->right == NULL) {
            parent->right = newnode;
            queue[rear++] = newnode;
            front++;
        }
    }
    front = 0;
    for (int i = front; i < rear; i++) {
        printf("%d ", queue[i]->data);
    }
}