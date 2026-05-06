#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX], infix[MAX], postfix[MAX];
int top = -1;

void push(char x) {
    stack[++top] = x;
}
char pop() {
    return stack[top--];
}
char peek() {
    return stack[top];
}
int isEmpty() {
    return top == -1;
}

int prec(char x) {
    if (x == '*' || x == '/')
        return 2;
    if (x == '+' || x == '-')
        return 1;
    return 0;
}

void infixToPostfix() {
    int j = 0;
    char next;

    for (int i = 0; infix[i]; i++) {
        char s = infix[i];

        if (s == ' ')
            continue;

        if (s == '(')
            push(s);

        else if (s == ')') {
            while (!isEmpty() && (next = pop()) != '(') {
                postfix[j++] = next;
                postfix[j++] = ' ';
            }
        }

        else if (prec(s)) {
            while (!isEmpty() && peek() != '(' && prec(peek()) >= prec(s)) {
                postfix[j++] = pop();
                postfix[j++] = ' ';
            }
            push(s);
        }

        else {
            postfix[j++] = s;
            postfix[j++] = ' ';
        }
    }

    while (!isEmpty()) {
        postfix[j++] = pop();
        postfix[j++] = ' ';
    }
        postfix[j - 1] = '\0';
}

int main() {
    fgets(infix, MAX, stdin);
    infix[strcspn(infix, "\n")] = '\0';

    infixToPostfix();
    printf("%s\n", postfix);
}