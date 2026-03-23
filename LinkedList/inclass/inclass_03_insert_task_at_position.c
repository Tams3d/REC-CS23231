#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void insert_at_end(struct node **head, int data) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    struct node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = new_node;
}

void print_data(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void insert_at_pos(struct node **head, int pos, int data) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    new_node->data = data;
    new_node->next = NULL;

    if (pos == 1) {
        new_node->next = *head;
        *head = new_node;
        return;
    }

    struct node *temp = *head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range");
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

int main() {
    int n, p, m, data;
    struct node *head = NULL;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        insert_at_end(&head, data);
    }

    scanf("%d", &p);
    scanf("%d", &m);

    insert_at_pos(&head, p, m);

    print_data(head);

    return 0;
}