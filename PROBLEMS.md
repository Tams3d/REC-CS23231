# Problems

## Note

Solutions here are written to pass test cases, not to be production-ready code. When you submit to LeetCode or GeeksForGeeks, the platform calls your function directly with valid inputs, so some things that matter in real C programs are intentionally skipped:

- `free()` - the platform cleans up memory after each test run, so freeing manually isn't needed
- `malloc` failure checks - platform runs in controlled environments where allocation doesn't fail
- Input validation - the problem guarantees valid input, so checking for edge cases like negative sizes isn't necessary unless specified in constraints

The goal is to understand the algorithm and get it right. The same logic written as a full standalone program (like the files in `SinglyLinkedList/`) would include all of these.

## LeetCode

| # | Problem | Topic | Difficulty | Approach | Solution |
| --- | --- | --- | --- | --- | --- |
| 0002 | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | Linked List | Medium | Dummy node, carry propagation | [lc_0002_add_two_numbers.c](Problems/LeetCode/lc_0002_add_two_numbers.c) |
| 0019 | [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) | Linked List | Medium | Two pointer, fast-slow gap of n | [lc_0019_remove_nth_node_from_end_of_list.c](Problems/LeetCode/lc_0019_remove_nth_node_from_end_of_list.c) |
| 0021 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | Linked List | Easy | Dummy node, compare and append | [lc_0021_merge_two_sorted_lists.c](Problems/LeetCode/lc_0021_merge_two_sorted_lists.c) |
| 0141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) | Linked List | Easy | Floyd's tortoise and hare | [lc_0141_linked_list_cycle.c](Problems/LeetCode/lc_0141_linked_list_cycle.c) |
| 0203 | [Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/) | Linked List | Easy | Dummy node, single pass | [lc_0203_remove_linked_list_elements.c](Problems/LeetCode/lc_0203_remove_linked_list_elements.c) |
| 0206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | Linked List | Easy | Iterative, three pointer | [lc_0206_reverse_linked_list.c](Problems/LeetCode/lc_0206_reverse_linked_list.c) |
| 0234 | [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/) | Linked List | Easy | Find middle, reverse second half, compare | [lc_0234_palindrome_linked_list.c](Problems/LeetCode/lc_0234_palindrome_linked_list.c) |
| 0328 | [Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/) | Linked List | Medium | Two pointer, separate odd/even chains | [lc_0328_odd_even_linked_list.c](Problems/LeetCode/lc_0328_odd_even_linked_list.c) |
| 0876 | [Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/) | Linked List | Easy | Fast and slow pointer | [lc_0876_middle_of_the_linked_list.c](Problems/LeetCode/lc_0876_middle_of_the_linked_list.c) |

## GeeksForGeeks

| Problem | Topic | Difficulty | Approach | Solution |
| --- | --- | --- | --- | --- |
| [Sort a Linked List of 0s, 1s and 2s](https://www.geeksforgeeks.org/sort-a-linked-list-of-0s-1s-or-2s/) | Linked List | Medium | Three dummy nodes, single pass, reconnect chains | [gfg_sort_linked_list_of_0s_1s_2s.c](Problems/GeeksForGeeks/gfg_sort_linked_list_of_0s_1s_2s.c) |
| [Reverse a Linked List using Stack](https://www.geeksforgeeks.org/reverse-a-linked-list/) | Linked List, Stack | Easy | Push all nodes, pop to rebuild | [gfg_reverse_linkedlist_using_stacks.c](Problems/GeeksForGeeks/gfg_reverse_linkedlist_using_stacks.c) |
| [Reverse a String using Stack](https://www.geeksforgeeks.org/stack-set-3-reverse-string-using-stack/) | Stack, Strings | Easy | Push characters, pop to reverse | [gfg_reverse_string_using_stacks.c](Problems/GeeksForGeeks/gfg_reverse_string_using_stacks.c) |

> [!NOTE]
> Problems from LeetCode and GeeksForGeeks are solved to reinforce the concepts covered in the main implementations. The actual assessment question may vary, the goal is to understand the pattern, not memorise the solution.
>
> *Problem statements are copyrighted by their respective platforms. This file links to problems for reference only.*