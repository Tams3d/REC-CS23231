#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *sortLinkedList(struct Node *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct Node zero_dummy, one_dummy, two_dummy;
    struct Node *zero = &zero_dummy;
    struct Node *one = &one_dummy;
    struct Node *two = &two_dummy;

    struct Node *temp = head;
    while (temp != NULL) {
        if (temp->data == 0) {
            zero->next = temp;
            zero = zero->next;
        } else if (temp->data == 1) {
            one->next = temp;
            one = one->next;
        } else {
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }

    one->next = two_dummy.next;
    zero->next = one_dummy.next;
    two->next = NULL;

    return zero_dummy.next;
}