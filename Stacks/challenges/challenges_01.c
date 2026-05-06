#include <stdio.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    return stack[top--];
}

int isEmpty() {
    return top == -1;
}

int main() {
    char str[MAX];
    int isBalanced = 1;

    scanf("%s", str);

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            push(str[i]);
        else {
            if (isEmpty()) {
                isBalanced = 0;
                break;
            }

            char open = pop();
            if (!(open == '(' && str[i] == ')' ||
                  open == '{' && str[i] == '}' ||
                  open == '[' && str[i] == ']')) {
                isBalanced = 0;
                break;
            }
        }

        i++;
    }

    if (!isEmpty()) {
        isBalanced = 0;
    }

    printf("%s\n", isBalanced ? "true" : "false");
}