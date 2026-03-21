#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
    struct ListNode dummy;
    struct ListNode *tail = &dummy;
    tail->next = NULL;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry) {
        int sum = carry;

        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;

        struct ListNode *new_node =
            (struct ListNode *)malloc(sizeof(struct ListNode));
        new_node->val = sum % 10;
        new_node->next = NULL;

        tail->next = new_node;
        tail = new_node;
    }

    return dummy.next;
}