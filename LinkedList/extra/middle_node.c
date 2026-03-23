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

struct Node *middle_node(struct Node *head) {
    struct Node *slow = head;
    struct Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {
    struct Node *n1 = malloc(sizeof(struct Node));
    struct Node *n2 = malloc(sizeof(struct Node));
    struct Node *n3 = malloc(sizeof(struct Node));
    struct Node *n4 = malloc(sizeof(struct Node));
    struct Node *n5 = malloc(sizeof(struct Node));

    n1->data = 1;
    n1->next = n2;
    n2->data = 2;
    n2->next = n3;
    n3->data = 3;
    n3->next = n4;
    n4->data = 4;
    n4->next = n5;
    n5->data = 5;
    n5->next = NULL;

    struct Node *head = n1;
    struct Node *mid = middle_node(head);
    print_list(head);
    print_list(mid);

    return 0;
}
