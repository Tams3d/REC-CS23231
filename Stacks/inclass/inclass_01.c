#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1)
        return;
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

void isEmpty() {
    printf(top == -1 ? "true\n" : "false\n");
}

void size() {
    printf("%d\n", top + 1);
}

int main() {
    int n;
    char line[100];

    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        fgets(line, sizeof(line), stdin);

        line[strcspn(line, "\n")] = '\0'; // removes trailing newline

        if (strncmp(line, "Push", 4) == 0) {
            int x = atoi(line + 5); // converts char to int
            push(x);
        } else if (strncmp(line, "Pop", 3) == 0) {
            printf("%d\n", pop());
        } else if (strncmp(line, "Top", 3) == 0) {
            printf("%d\n", peek());
        } else if (strncmp(line, "IsEmpty", 7) == 0) {
            isEmpty();
        } else if (strncmp(line, "Size", 4) == 0) {
            size();
        }
    }

    return 0;
}