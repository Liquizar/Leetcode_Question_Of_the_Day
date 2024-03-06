# LeetCode Problem 141: Linked List Cycle

## Problem Statement
Given `head`, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the `next` pointer. Internally, `pos` is used to denote the index of the node that tail's `next` pointer is connected to. Note that `pos` is not passed as a parameter.

Return `true` if there is a cycle in the linked list. Otherwise, return `false`.

**Example 1:**
```
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
```

**Example 2:**
```
Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
```

**Example 3:**
```
Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.
```

## Constraints
- The number of the nodes in the list is in the range [0, 10^4].
- -10^5 <= Node.val <= 10^5
- `pos` is -1 or a valid index in the linked-list.

## Solution
To determine whether a given linked list has a cycle, we can use the Floyd's Tortoise and Hare algorithm, also known as the "two-pointer" approach.

We initialize two pointers: `slow` and `fast`, both pointing to the head of the linked list. We move the `slow` pointer by one step and the `fast` pointer by two steps. If there's a cycle in the linked list, eventually the `slow` and `fast` pointers will meet at some node.

Here's the algorithm in detail:
1. Initialize two pointers: `slow` and `fast`, both pointing to the head of the linked list.
2. Move the `slow` pointer by one step and the `fast` pointer by two steps.
3. If `slow` and `fast` pointers meet, a cycle is detected and we return `true`.
4. If the `fast` pointer reaches the end of the list (i.e., `fast` or `fast->next` becomes `nullptr`), we return `false`.

## Time and Space Complexity
- **Time Complexity:** O(n), where n is the number of nodes in the linked list.
- **Space Complexity:** O(1), as we are using only constant extra space.

Feel free to test the solution with additional test cases or provide feedback for improvement. Happy coding! 🚀
