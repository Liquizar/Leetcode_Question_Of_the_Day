# LeetCode Problem 1750: Minimum Length of String After Deleting Similar Ends

## Problem Statement
Given a string `s` consisting only of characters 'a', 'b', and 'c', you are asked to apply the following algorithm on the string any number of times:

1. Pick a non-empty prefix from the string `s` where all the characters in the prefix are equal.
2. Pick a non-empty suffix from the string `s` where all the characters in this suffix are equal.
3. The prefix and the suffix should not intersect at any index.
4. The characters from the prefix and suffix must be the same.
5. Delete both the prefix and the suffix.

Return the minimum length of `s` after performing the above operation any number of times (possibly zero times).

**Example 1:**
```
Input: s = "ca"
Output: 2
Explanation: You can't remove any characters, so the string stays as is.
```

**Example 2:**
```
Input: s = "cabaabac"
Output: 0
Explanation: An optimal sequence of operations is:
- Take prefix = "c" and suffix = "c" and remove them, s = "abaaba".
- Take prefix = "a" and suffix = "a" and remove them, s = "baab".
- Take prefix = "b" and suffix = "b" and remove them, s = "aa".
- Take prefix = "a" and suffix = "a" and remove them, s = "".
```

**Example 3:**
```
Input: s = "aabccabba"
Output: 3
Explanation: An optimal sequence of operations is:
- Take prefix = "aa" and suffix = "a" and remove them, s = "bccabb".
- Take prefix = "b" and suffix = "bb" and remove them, s = "cca".
```

## Approach
To find the minimum length of the resulting string, we can use a two-pointer approach. We initialize two pointers `left` and `right` pointing to the start and end of the string respectively.

We then continue shrinking the prefix and suffix of the string as long as they are equal. We move the `left` pointer to the right until it encounters a different character or reaches the `right` pointer. Similarly, we move the `right` pointer to the left until it encounters a different character or reaches the `left` pointer.

Finally, we return the length of the remaining substring, which is `right - left + 1`.

## Constraints
- 1 <= s.length <= 10^5
- `s` only consists of characters 'a', 'b', and 'c'.

## Time and Space Complexity
- **Time Complexity:** O(n), where n is the length of the input string `s`.
- **Space Complexity:** O(1)

Feel free to test the solution with additional test cases or provide feedback for improvement. Happy coding! 🚀
