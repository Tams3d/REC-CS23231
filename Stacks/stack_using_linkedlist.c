#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;
int stack_size = 0;

void push(int data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    if (new_node == NULL) {
        printf("Stack Overflow\n");
        return;
    }

    new_node->data = data;
    new_node->next = top;
    top = new_node;
    stack_size++;
}

int pop() {
    if (top == NULL) {
        printf("Stack Underflow\n");
        return -1;
    }

    struct Node *temp = top;
    int value = temp->data;
    top = top->next;
    free(temp);
    stack_size--;

    return value;
}

int isEmpty() {
    return top == NULL;
}

int size() {
    return stack_size;
}

int peek() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return NULL;
    }
    return top->data;
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    printf("Top:     %d\n", peek());
    printf("Size:    %d\n", size());
    printf("isEmpty: %s\n", isEmpty() ? "Yes" : "No");
    printf("Pop:     %d\n", pop());
    printf("Pop:     %d\n", pop());
    printf("Top:     %d\n", peek());
    printf("Size:    %d\n", size());

    return 0;
}