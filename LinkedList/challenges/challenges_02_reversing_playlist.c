#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char data[100];
    struct Node *next;
};

void insert_at_end(struct Node **head, char *data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    strcpy(new_node->data, data);
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

void reverse(struct Node **head) {
    struct Node *prev = NULL;
    struct Node *curr = *head;
    struct Node *next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    *head = prev;
}

void print_list(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%s ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node *head = NULL;

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char song[100];
        scanf("%s", song);
        insert_at_end(&head, song);
    }

    reverse(&head);
    print_list(head);

    return 0;
}