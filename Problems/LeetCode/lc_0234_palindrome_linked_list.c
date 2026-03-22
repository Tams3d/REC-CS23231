#include <stdbool.h>
#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

// recurvse method of reversing a linkedlist, just alternative
struct ListNode *reverse(struct ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode *new_head = reverse(head->next);

    head->next->next = head;
    head->next = NULL;

    return new_head;
}

bool isPalindrome(struct ListNode *head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // slow points to the middle node
    struct ListNode *second_head = reverse(slow);
    while (second_head != NULL) {
        if (head->val != second_head->val)
            return false;
        head = head->next;
        second_head = second_head->next;
    }

    return true;
}