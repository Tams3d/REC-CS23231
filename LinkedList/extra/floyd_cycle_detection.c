#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *next;
};

bool hasCycle(struct Node *head) {
    struct Node *slow = head;
    struct Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }

    return false;
}

int main() {
    struct Node *n1 = malloc(sizeof(struct Node));
    struct Node *n2 = malloc(sizeof(struct Node));
    struct Node *n3 = malloc(sizeof(struct Node));
    struct Node *n4 = malloc(sizeof(struct Node));
    struct Node *n5 = malloc(sizeof(struct Node));

    n1->val = 1;
    n1->next = n2;
    n2->val = 2;
    n2->next = n3;
    n3->val = 3;
    n3->next = n4;
    n4->val = 4;
    n4->next = n5;
    n5->val = 5;
    n5->next = NULL;

    printf("Is cycle detected: %2s\n", hasCycle(n1) ? "yes" : "no");

    n5->next = n2;
    printf("After cycle: %9s\n", hasCycle(n1) ? "yes" : "no");

    return 0;
}