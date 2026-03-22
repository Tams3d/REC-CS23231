# Problems

## Note

Solutions here are written to pass test cases on their respective platforms — LeetCode, GeeksForGeeks, and others. The focus is on correctness and time complexity, not production-level code quality.

Some things intentionally omitted compared to standard C codebases:

- `free()` - platforms manage memory; freeing is unnecessary and sometimes penalised for overhead
- `malloc` failure checks - judges don't run out of memory
- Input validation and error messages - inputs are guaranteed valid per constraints

The goal is to understand the algorithm, get it right, and optimise it. How it would look in a real codebase is a separate concern handled in the main implementations.

## LeetCode

| # | Problem | Topic | Difficulty | Approach | Solution |
| --- | --- | --- | --- | --- | --- |
| 0002 | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | Linked List | Medium | Dummy node, carry propagation | [lc_0002_add_two_numbers.c](Problems/LeetCode/lc_0002_add_two_numbers.c) |
| 0019 | [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) | Linked List | Medium | Two pointer, fast-slow gap of n | [lc_0019_remove_nth_node_from_end_of_list.c](Problems/LeetCode/lc_0019_remove_nth_node_from_end_of_list.c) |
| 0141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) | Linked List | Easy | Floyd's tortoise and hare | [lc_0141_linked_list_cycle.c](Problems/LeetCode/lc_0141_linked_list_cycle.c) |
| 0203 | [Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/) | Linked List | Easy | Dummy node, single pass | [lc_0203_remove_linked_list_elements.c](Problems/LeetCode/lc_0203_remove_linked_list_elements.c) |
| 0206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | Linked List | Easy | Iterative, three pointer | [lc_0206_reverse_linked_list.c](Problems/LeetCode/lc_0206_reverse_linked_list.c) |
| 0234 | [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/) | Linked List | Easy | Find middle, reverse second half, compare | [lc_0234_palindrome_linked_list.c](Problems/LeetCode/lc_0234_palindrome_linked_list.c) |
| 0328 | [Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/) | Linked List | Medium | Two pointer, separate odd/even chains | [lc_0328_odd_even_linked_list.c](Problems/LeetCode/lc_0328_odd_even_linked_list.c) |

## GeeksForGeeks

| Problem | Topic | Difficulty | Approach | Solution |
| --- | --- | --- | --- | --- |
| [Sort a Linked List of 0s, 1s and 2s](https://www.geeksforgeeks.org/sort-a-linked-list-of-0s-1s-or-2s/) | Linked List | Medium | Three dummy nodes, single pass, reconnect chains | [gfg_sort_linked_list_of_0s_1s_2s.c](Problems/GeeksForGeeks/gfg_sort_linked_list_of_0s_1s_2s.c) |

> Problem statements are copyrighted by their respective platforms. This file links to problems for reference only.
