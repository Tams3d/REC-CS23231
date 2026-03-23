#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void print_list(struct Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insert_at_end(struct Node **head, int data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
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

void delete_at_pos(struct Node **head, int pos) {
    if (*head == NULL) {
        printf("List is empty\n");
        exit(0);
    }

    struct Node *temp = *head;

    if (pos == 1) {
        *head = (*head)->next;
        free(temp);
        return;
    }

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL) {
        printf("Position out of range\n");
        exit(0);
    }

    struct Node *delete_node = temp->next;
    temp->next = temp->next->next;
    free(delete_node);
}

int main() {
    struct Node *head = NULL;

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int data;
        scanf("%d", &data);
        insert_at_end(&head, data);
    }

    int p;
    scanf("%d", &p);
    delete_at_pos(&head, p);
    print_list(head);

    return 0;
}