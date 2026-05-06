#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX][MAX];
int top = -1;

void push(char *token) {
    strcpy(stack[++top], token);
}

char *pop() {
    return stack[top--];
}

char *peek() {
    return stack[top];
}

int isEmpty() {
    return top == -1;
}

int precedence(char *op) {
    if (strcmp(op, "*") == 0 || strcmp(op, "/") == 0)
        return 2;
    if (strcmp(op, "+") == 0 || strcmp(op, "-") == 0)
        return 1;
    return 0;
}

int main() {
    char line[500];
    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0'; // remove trailing newline

    char output[500] = "";
    int first = 1;

    char *token = strtok(line, " ");
    while (token != NULL) {
        if (strcmp(token, "(") == 0) {
            push(token);
        }
        else if (strcmp(token, ")") == 0) {
            // pop until matching '('
            while (!isEmpty() && strcmp(peek(), "(") != 0) {
                if (!first)
                    strcat(output, " ");
                strcat(output, pop());
                first = 0;
            }
            if (!isEmpty())
                pop(); // discard '('
        }
        else if (1) {//changes there
            // pop higher or equal precedence operators first
            while (!isEmpty() && precedence(peek()) >= precedence(token)) {
                if (!first)
                    strcat(output, " ");
                strcat(output, pop());
                first = 0;
            }
            push(token);
        }
        else {
            // operand goes directly to output
            if (!first)
                strcat(output, " ");
            strcat(output, token);
            first = 0;
        }

        token = strtok(NULL, " ");
    }

    // pop remaining operators
    while (!isEmpty()) {
        if (!first)
            strcat(output, " ");
        strcat(output, pop());
        first = 0;
    }

    printf("%s\n", output);
    return 0;
}