#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->right = NULL;
    newnode->left = NULL;

    return newnode;
}

struct node *insert(struct node *root, int value) {
    if (root == NULL)
        return create_node(value);

    if (value <= root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

struct node *queue[MAX];
int front = -1, rear = -1;

void enqueue(struct node *n) {
    if (rear == MAX - 1)
        return;
    if (front == -1)
        front = 0;
    queue[++rear] = n;
}

struct node *dequeue() {
    if (front == -1 || front > rear)
        return NULL;
    return queue[front++];
}
int isEmpty() {
    return front == -1 || front > rear;
}
void leftView(struct node *root) {
    if (root == NULL)
        return;
    enqueue(root);
    while (!isEmpty()) {
        int size = rear - front + 1;
        for (int i = 0; i < size; i++) {
            struct node *temp = dequeue();
            if (i == 0)
                printf("%d ", temp->data);
            if (temp->left)
                enqueue(temp->left);
            if (temp->right)
                enqueue(temp->right);
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    struct node *root = NULL;
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        root = insert(root, val);
    }
    leftView(root);
    return 0;
}