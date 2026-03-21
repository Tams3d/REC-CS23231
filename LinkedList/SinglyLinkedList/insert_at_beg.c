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

void insert_at_beg(struct Node **head, int data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

int main() {
    struct Node *head = NULL;

    insert_at_beg(&head, 1);
    insert_at_beg(&head, 2);
    insert_at_beg(&head, 3);

    print_list(head);
}