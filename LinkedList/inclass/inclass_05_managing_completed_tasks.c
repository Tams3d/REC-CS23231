#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insert_at_end(struct Node **head, int data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL)
        return;
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

void delete_last(struct Node **head) {
    if (*head == NULL)
        return;

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }

    struct Node *temp = *head;
    while (temp->next->next != NULL)
        temp = temp->next;
    free(temp->next);
    temp->next = NULL;
}

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

int main() {
    struct Node *head = NULL;

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int data;
        scanf("%d", &data);
        insert_at_end(&head, data);
    }

    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        delete_last(&head);
    }
    print_list(head);

    return 0;
}