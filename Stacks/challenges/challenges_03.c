#include <stdio.h>

#define MAX 1000

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

void pop() {
    top--;
}
char peek() {
    return stack[top];
}
int isEmpty() {
    return top == -1;
}

void removeDuplicates(char s[]) {
    for (int i = 0; s[i]; i++) {
        if (!isEmpty() && peek() == s[i]) {
            pop();
        }
        else {
            push(s[i]);
        }
    }
}

void print_stack() {
    if (top == -1) {
        printf("Empty String\n");
    }
    else {
        for (int i = 0; i <= top; i++)
            printf("%c", stack[i]);
        printf("\n");
    }
}

int main() {
    char s[MAX];

    scanf("%s", s);

    removeDuplicates(s);
    print_stack();

    return 0;
}