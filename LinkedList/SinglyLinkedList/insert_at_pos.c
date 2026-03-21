#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void print_list(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insert_at_pos(struct Node **head, int pos, int data) {
    if (pos <= 0) {
        printf("Invalid Position\n");
        return;
    }

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    new_node->data = data;

    if (pos == 1) {
        new_node->next = *head;
        *head = new_node;
        return;
    }

    struct Node *temp = *head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range\n");
        free(new_node);
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

int main() {
    struct Node *head = NULL;

    insert_at_pos(&head, 1, 10);
    insert_at_pos(&head, 2, 50);
    insert_at_pos(&head, 3, 90);
    insert_at_pos(&head, 2, 20);
    insert_at_pos(&head, 4, 70);
    print_list(head);
}