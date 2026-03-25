#include <ctype.h>
#include <stdio.h>


#define MAX 100

int stack[MAX], top = -1;

void push(int x) {
    stack[++top] = x;
}
int pop() {
    return stack[top--];
}

int main() {
    char s[MAX];
    fgets(s, MAX, stdin);

    for (int i = 0; s[i]; i++) {
        if (s[i] == ' ')
            continue;

        // number
        if (isdigit(s[i])) {
            int num = 0;
            while (s[i] && isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;
            push(num);
        }
        // operator
        else {
            int b = pop();
            int a = pop();

            if (s[i] == '+')
                push(a + b);
            else if (s[i] == '-')
                push(a - b);
            else if (s[i] == '*')
                push(a * b);
            else if (s[i] == '/')
                push(a / b);
        }
    }

    printf("%d", pop());
    return 0;
}