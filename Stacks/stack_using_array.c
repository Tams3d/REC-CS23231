#include <stdio.h>
#define MAX 100

int top = -1;
int stack[MAX];

void push(int x) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
}
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAX - 1;
}

int size() {
    return top + 1;
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
    printf("isFull:  %s\n", isFull() ? "Yes" : "No");
    printf("Top:     %d\n", peek());
    printf("Size:    %d\n", size());

    return 0;
}