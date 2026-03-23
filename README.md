<div align="center">

# REC-CS23231

[![C](https://img.shields.io/badge/C-A8B9CC?style=flat-square&logo=c&logoColor=white)](https://www.c-language.org/)
[![Code Style: LLVM](https://img.shields.io/badge/Code%20Style-LLVM-555555?style=flat-square&logo=llvm&logoColor=white)](https://llvm.org/docs/CodingStandards.html)
[![LeetCode](https://img.shields.io/badge/LeetCode-FFA116?style=flat-square&logo=leetcode&logoColor=white)](https://leetcode.com/u/tams_3d/)
[![Status](https://img.shields.io/badge/Status-Active-success?style=flat-square)](https://github.com/Tams3d/REC-CS23231)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow?style=flat-square)](LICENSE)

*Data Structures implemented in C*

</div>

## Overview

My implementations of Data Structures in C - written as I learn, not after. Each file reflects what I understood when I wrote it.

Most files are straightforward implementations. Some may follow different approaches where I was figuring out why one is cleaner than the other - dummy node vs special-casing head, pointer-to-pointer traversal vs index walking, iterative vs recursive.

Code style is consistent throughout using `.clang-format` with the LLVM standard.

## Table of Contents

- [Pointers](#pointers)
- [Structures](#structures)
- [Dynamic Memory Allocation](#dynamic-memory-allocation)
- [Linked List](#linked-list)
  - [Singly Linked List](#singly-linked-list)
- [Stacks](#stacks)
  - [Implementation](#implementation)
- [Extra](#extra)
- [Problems](#problems)
- [Language and Style](#language-and-style)
- [Legal](#legal)
- [License](#license)
- [About](#about)

## Pointers

[`Pointers/`](Pointers/)

| File | Description |
|------|-------------|
| [`pointer.c`](Pointers/pointer.c) | Pointer basics - declaration, dereferencing, address-of |
| [`pointer_arithmetics.c`](Pointers/pointer_arithmetics.c) | Arithmetic on pointers - increment, decrement, offset |
| [`call_by_value.c`](Pointers/call_by_value.c) | Passing by value - local copy, no effect on original |
| [`call_by_reference.c`](Pointers/call_by_reference.c) | Passing by pointer - modifying the original variable |
| [`array_elements_pointer.c`](Pointers/array_elements_pointer.c) | Accessing array elements via pointer |
| [`array_of_pointers.c`](Pointers/array_of_pointers.c) | Array where each element is a pointer |
| [`double_pointer.c`](Pointers/double_pointer.c) | Pointer to pointer - `**ptr` |

## Structures

[`Structures/`](Structures/)

| File | Description |
|------|-------------|
| [`structure_variables.c`](Structures/structure_variables.c) | Struct declaration, initialization, and member access |
| [`structures_functions.c`](Structures/structures_functions.c) | Passing structs to functions - by value and by pointer |
| [`selfref_structure.c`](Structures/selfref_structure.c) | Self-referential struct - a struct with a pointer to itself, the basis of linked lists |

## Dynamic Memory Allocation

[`DynamicMemoryAllocation/`](DynamicMemoryAllocation/)

| File | Description |
|------|-------------|
| [`malloc.c`](DynamicMemoryAllocation/malloc.c) | `malloc` - allocates uninitialized memory |
| [`calloc.c`](DynamicMemoryAllocation/calloc.c) | `calloc` - allocates zero-initialized memory |
| [`realloc.c`](DynamicMemoryAllocation/realloc.c) | `realloc` - resizes an existing allocation, preserving data |

## Linked List

[`LinkedList/`](LinkedList/)

### Singly Linked List

[`LinkedList/SinglyLinkedList/`](LinkedList/SinglyLinkedList/)

| File | Description |
|------|-------------|
| [`linked_list.c`](LinkedList/SinglyLinkedList/linked_list.c) | Node structure, traversal, and print |
| [`insert_at_beg.c`](LinkedList/SinglyLinkedList/insert_at_beg.c) | Insert at head |
| [`insert_at_end.c`](LinkedList/SinglyLinkedList/insert_at_end.c) | Insert at tail |
| [`insert_at_pos.c`](LinkedList/SinglyLinkedList/insert_at_pos.c) | Insert at given 1-based position |
| [`delete_head.c`](LinkedList/SinglyLinkedList/delete_head.c) | Delete head node |
| [`delete_last.c`](LinkedList/SinglyLinkedList/delete_last.c) | Delete tail node |
| [`delete_at_pos.c`](LinkedList/SinglyLinkedList/delete_at_pos.c) | Delete at given 1-based position |

## Stacks

[`Stacks/`](Stacks/)

### Implementation

| File | Description |
|------|-------------|
| [`stack_using_array.c`](Stacks/stack_using_array.c) | Stack implementation using array - push, pop, peek, isEmpty, isFull |
| [`stack_using_linkedlist.c`](Stacks/stack_using_linkedlist.c) | Stack implementation using linked list - dynamic push/pop operations |

## Extra

Advanced algorithms and applications using the implemented data structures.

| File | Topic | Description |
|------|-------|-------------|
| [`reverse_list.c`](LinkedList/extra/reverse_list.c) | Linked List | Iterative three pointer reversal |
| [`length_of_list.c`](LinkedList/extra/length_of_list.c) | Linked List | Length of a linked list |
| [`floyd_cycle_detection.c`](LinkedList/extra/floyd_cycle_detection.c) | Linked List | Cycle detection - Floyd's tortoise and hare |
| [`middle_node.c`](LinkedList/extra/middle_node.c) | Linked List | Find middle node using slow/fast pointers |
| [`reverse_string.c`](Stacks/extra/reverse_string.c) | Stack | Reverse a string using stack (see also [GFG solution](Problems/GeeksForGeeks/gfg_reverse_string_using_stacks.c)) |
| [`reverse_linkedlist.c`](Stacks/extra/reverse_linkedlist.c) | Stack | Reverse a linked list using stack (see also [GFG solution](Problems/GeeksForGeeks/gfg_reverse_linkedlist_using_stacks.c)) |

## Problems

Problems from external platforms, organised by source. Only solution code is stored - no problem statements or sample data.

| Platform | Directory | Naming |
|----------|-----------|--------|
| LeetCode | [`Problems/LeetCode/`](Problems/LeetCode/) | `lc_XXXX_problem_name.c` |
| GeeksForGeeks | [`Problems/GeeksForGeeks/`](Problems/GeeksForGeeks/) | `gfg_problem_name.c` |

See [PROBLEMS.md](PROBLEMS.md) for the full list with approaches and links.

## Language and Style

- Language: **C**
- LLVM code style via `.clang-format`
- Compiled with Clang
- Some files have multiple solutions showing how the approach changed as I understood the problem better

## Legal

Problem statements on competitive programming platforms are copyrighted by their respective authors and platforms. This repository:

- Does not include problem descriptions
- Does not include sample inputs or outputs
- Stores only original solution code

Problem links may be included for external reference without reproducing any platform content.

## License

MIT - free to use, study, and modify. See [LICENSE](LICENSE) for details.

## About

I'm 18, studying CS, interested in DSA, competitive programming, and machine learning. I try to actually understand what I'm writing rather than just getting it to work - this repo is where that process is visible.

<div align="center">

Made with 💙 by [Tamil Selvan](https://github.com/Tams3d)

</div>