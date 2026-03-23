#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL)
        return;

    new_node->data = data;
    new_node->next = top;
    top = new_node;
}

int pop() {
    if (top == NULL)
        return -1;

    struct Node *temp = top;
    int value = temp->data;
    top = top->next;
    free(temp);

    return value;
}

void reverse_list(struct Node *head) {
    struct Node *temp = head;

    while (temp != NULL) {
        push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL) {
        temp->data = pop();
        temp = temp->next;
    }
}

void insert_at_end(struct Node **head, int data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    struct Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new_node;
}

int main() {
    struct Node *head = NULL, *temp, *new_node;

    int values[] = {10, 20, 30, 40, 50};
    int n = 5;

    for (int i = 0; i < n; i++) {
        insert_at_end(&head, values[i]);
    }

    printf("Original: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    reverse_list(head);

    printf("\nReversed: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}