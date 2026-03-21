#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *removeElements(struct ListNode *head, int val) {
    struct ListNode dummy;
    struct ListNode *temp = &dummy;
    temp->next = head;

    while (temp->next != NULL) {
        if (temp->next->val == val) {
            temp->next = temp->next->next;
        } else {
            temp = temp->next;
        }
    }

    return dummy.next;
}