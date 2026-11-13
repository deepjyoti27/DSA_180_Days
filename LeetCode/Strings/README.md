LeetCode 1768 – Merge Strings Alternately

Difficulty: Easy

Topic: Strings, Two Pointers

Language: C++

Status: Accepted – 108/108 Test Cases Passed

Problem

Merge two strings by taking characters alternately, starting with the first string. Append remaining characters when one string is exhausted.

Approach

1. Initialize an empty result string.
2. Use two indexes, "i" and "j", starting from zero.
3. Use a while loop while either string has remaining characters.
4. Append a character from the first string if available.
5. Append a character from the second string if available.
6. Return the merged string.

Complexity Analysis

- Time Complexity: O(n + m)
- Auxiliary Space Complexity: O(1), excluding the output string.
- Output Space Complexity: O(n + m)

Key Learnings

- String indexing in C++.
- Two-pointer technique.
- "push_back()" function.
- While loops and boundary conditions.

LeetCode

https://leetcode.com/problems/merge-strings-alternately/