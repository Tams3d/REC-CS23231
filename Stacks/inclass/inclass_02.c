#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char book[101];
    struct Node *next;
};

struct Node *top = NULL;
int size = 0;

void push(char *book) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    strcpy(new_node->book, book);
    new_node->next = top;
    top = new_node;
    size++;
}

void pop() {
    if (top == NULL) {
        printf("Stack Underflow\n");
        return;
    }
    struct Node *temp = top;
    top = top->next;
    free(temp);
    size--;
}

void peek() {
    if (top == NULL) {
        printf("Stack Underflow\n");
        return;
    }
    printf("%s\n", top->book);
}

void isEmpty() {
    printf("%s\n", top == NULL ? "true" : "false");
}

void print_size() {
    printf("%d\n", size);
}

int main() {
    int n;
    scanf("%d\n", &n);

    for (int i = 0; i < n; i++) {
        char line[110];
        fgets(line, sizeof(line), stdin);
        line[strcspn(line, "\n")] = '\0'; // removes trailing newline

        if (strncmp(line, "Push ", 5) == 0) {
            push(line + 5);
        } else if (strcmp(line, "Pop") == 0) {
            pop();
        } else if (strcmp(line, "Top") == 0) {
            peek();
        } else if (strcmp(line, "IsEmpty") == 0) {
            isEmpty();
        } else if (strcmp(line, "Size") == 0) {
            print_size();
        }
    }

    return 0;
}