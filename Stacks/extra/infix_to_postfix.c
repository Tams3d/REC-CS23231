#include <ctype.h>
#include <stdio.h>


#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}
char pop() {
    return stack[top--];
}
char peek() {
    return stack[top];
}
int empty() {
    return top == -1;
}

int prec(char c) {
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    return 0;
}

int main() {
    char s[MAX];
    fgets(s, MAX, stdin);

    for (int i = 0; s[i]; i++) {
        if (s[i] == ' ')
            continue;

        // operand (A, B, etc.)
        if (isalnum(s[i])) {
            printf("%c ", s[i]);
        }

        // (
        else if (s[i] == '(') {
            push(s[i]);
        }

        // )
        else if (s[i] == ')') {
            while (!empty() && peek() != '(')
                printf("%c ", pop());
            pop(); // remove '('
        }

        // operator
        else {
            while (!empty() && peek() != '(' && prec(peek()) >= prec(s[i]))
                printf("%c ", pop());
            push(s[i]);
        }
    }

    while (!empty())
        printf("%c ", pop());

    return 0;
}