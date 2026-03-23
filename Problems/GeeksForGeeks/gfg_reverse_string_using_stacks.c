#include <stdio.h>
#include <string.h>
#define MAX 100

int top = -1;
char stack[MAX];

void push(char ch) {
    if (top == MAX - 1)
        return;
    stack[++top] = ch;
}

char pop() {
    if (top == -1)
        return '\0';
    return stack[top--];
}

void reverse_string(char string[]) {
    int i = 0;

    while (string[i] != '\0') {
        push(string[i++]);
    }

    i = 0;
    while (top != -1) {
        string[i++] = pop();
    }
}

int main() {
    char string[MAX];

    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
    reverse_string(string);
    printf("%s\n", string);

    return 0;
}