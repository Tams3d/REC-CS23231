#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

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

void print_list(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct Node *remove_nth_from_end(struct Node **head, int n) {
    struct Node dummy;
    dummy.next = *head;

    struct Node *slow = &dummy;
    struct Node *fast = &dummy;

    for (int i = 0; i < n; i++)
        fast = fast->next;

    while (fast->next != NULL) {
        slow = slow->next;
        fast = fast->next;
    }

    struct Node *delete_node = slow->next;
    slow->next = slow->next->next;
    free(delete_node);

    return dummy.next;
}

int main() {
    struct Node *head = NULL;

    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        int data;
        scanf("%d", &data);
        insert_at_end(&head, data);
    }

    int n;
    scanf("%d", &n);
    head = remove_nth_from_end(&head, n);

    print_list(head);

    return 0;
}