🚀 DSA_180_Days – My Data Structures & Algorithms Journey

Welcome to my 180 Days of DSA Challenge!

I am consistently improving my problem-solving skills through Data Structures and Algorithms using C++.

My goal is to develop strong programming fundamentals, master DSA concepts, and prepare for software engineering opportunities at leading technology companies.

🎯 Goals

- Solve LeetCode problems consistently.
- Complete the LeetCode 75 study plan.
- Master Data Structures and Algorithms using C++.
- Understand time and space complexity.
- Develop problem-solving and analytical thinking.
- Maintain consistency through GitHub.

💻 Tech Stack

- Language: C++
- Practice Platform: LeetCode
- IDE: Visual Studio Code
- Version Control: Git & GitHub

📚 Repository Structure

DSA_180_Days/
│
├── LeetCode/
│   ├── Strings/
│   │   └── 1768_Merge_Strings_Alternately.cpp
│   │
│   ├── Arrays/
│   ├── Two_Pointers/
│   ├── Binary_Search/
│   ├── Linked_List/
│   ├── Stack_Queue/
│   ├── Trees/
│   ├── Graphs/
│   └── Dynamic_Programming/
│
├── Daily_Progress/
│
└── README.md

🏆 LeetCode Progress

DAY 1(problem statement)

Problem| Topic| Difficulty| Status
1768. Merge Strings Alternately| Strings| Easy| Accepted

Problems completed: 1

📈 My Learning Approach

For every problem, I focus on:

1. Understanding the problem statement.
2. Developing the logic independently.
3. Implementing the solution in C++.
4. Performing a dry run.
5. Analyzing time and space complexity.
6. Testing and submitting the solution.
7. Documenting my learning.

🌱 My Commitment

Consistency over perfection.

Every problem solved is another step towards becoming a better software engineer.

180 Days. Consistent Learning. Better Problem Solving.

DAY 2(problem statement)
## DAY 2 – Problem Statement

| Problem | Topic | Difficulty | Status |
|---|---|---|---|
| 1071. Greatest Common Divisor of Strings | Strings, Mathematics, GCD | Easy | Accepted |

**Problem Link:** [LeetCode 1071 – Greatest Common Divisor of Strings](https://leetcode.com/problems/greatest-common-divisor-of-strings/)

### Concepts Learned
- Greatest Common Divisor (GCD).
- String concatenation.
- String length and prefix extraction.
- C++ `substr()` function.
- Pattern matching in strings.

### My Approach
1. Compare `str1 + str2` with `str2 + str1`.
2. If they are different, return an empty string.
3. Calculate the lengths of both strings.
4. Find the GCD of the two lengths.
5. Extract the prefix of length GCD from `str1`.
6. Return the common repeating string.

### Example

**Input:**
- str1 = "ABCABC"
- str2 = "ABC"

**Output:** "ABC"

**Key Learning:**

I learned how the mathematical concept of GCD can be applied to string problems. I also understood how string concatenation helps identify a common repeating pattern.

### Complexity Analysis
- Time Complexity: O(n + m)
- Auxiliary Space: O(n + m) for concatenation.

### My Learning Reflection

Today, I improved my understanding of string manipulation and mathematical problem-solving. I learned to connect string patterns with the GCD concept and implement the solution using C++.

### Progress
- Problems completed today: 1
- Total problems completed: 2
- Language: C++
- Platform: LeetCode

**Consistency over perfection. One problem at a time!**


## 📅 DAY 3 – Kids With the Greatest Number of Candies

### 📝 Problem Details

| Problem | Topic | Difficulty | Status |
|---|---|---|---|
| 1431. Kids With the Greatest Number of Candies | Arrays | Easy | Accepted |

**LeetCode:** [1431 – Kids With the Greatest Number of Candies](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/)

### 🎯 Problem Understanding

Given an integer array `candies`, where each element represents the number of candies a child has, and an integer `extraCandies`.

For each child, determine whether giving them all the extra candies would make their total greater than or equal to the maximum number of candies currently held by any child.

### 🧠 Approach & Logic

1. Initialize a variable `maxCandies` with 0.
2. Traverse the array to find the maximum number of candies.
3. Create a Boolean vector named `result`.
4. Traverse the array again.
5. Check whether `candies[i] + extraCandies >= maxCandies`.
6. If the condition is true, insert `true` into the result vector.
7. Otherwise, insert `false`.
8. Return the result vector.

### 💡 Key Concepts Learned

- Array traversal using loops.
- Finding the maximum element.
- Conditional statements (`if-else`).
- Boolean vectors (`vector<bool>`).
- `push_back()` function.
- Comparing values using the `>=` operator.

### 🔍 Example

**Input:**
- candies = [2, 3, 5, 1, 3]
- extraCandies = 3

**Output:**

`[true, true, true, false, true]`

### ⏱️ Complexity Analysis

- **Time Complexity:** O(n)
  - First traversal finds the maximum element.
  - Second traversal checks every child.
- **Space Complexity:** O(n)
  - The result vector stores n Boolean values.

### 📚 My Learning & Takeaways

- Learned how to find the maximum element in an array.
- Understood how to use two separate traversals to solve a problem.
- Improved my understanding of Boolean conditions.
- Practiced storing results using a vector.
- Learned why we use `>=` instead of `>` when equal maximum values are allowed.

### 📊 Progress Tracker

- Problems completed today: 1
- Total problems completed: 3
- Day 1: Merge Strings Alternately – Accepted
- Day 2: Greatest Common Divisor of Strings – Accepted
- Day 3: Kids With the Greatest Number of Candies – Accepted
- Language: C++
- Platform: LeetCode

**Consistency over perfection. Small improvements every day lead to big achievements!** 🚀


Day 4 – Can Place Flowers 🌱

Problem Details

- Platform: LeetCode
- Problem Number: 605
- Problem Name: Can Place Flowers
- Difficulty: Easy
- Topic: Arrays, Greedy
- Language: C++

Problem Link

"LeetCode – Can Place Flowers" (https://leetcode.com/problems/can-place-flowers/)

Problem Understanding

Given a flowerbed represented by an array:

- "0" represents an empty plot.
- "1" represents a plot that already contains a flower.

We need to determine whether "n" new flowers can be planted without placing flowers in adjacent plots.

Approach: Greedy Algorithm

1. Traverse the flowerbed using a loop.
2. Check whether the current position is empty.
3. Check whether the left neighbour is empty or the current position is the first index.
4. Check whether the right neighbour is empty or the current position is the last index.
5. If all conditions are satisfied, plant a flower by updating the current position to "1".
6. Increase the flower count.
7. Return "true" if the required number of flowers has been planted; otherwise, return "false".

Important Concepts Learned

- Array traversal
- Greedy algorithm
- Accessing neighbouring elements
- Boundary conditions
- Logical AND ("&&") and OR ("||")
- Updating array elements
- Time and space complexity

Complexity Analysis

- Time Complexity: O(m), where m is the length of the flowerbed.
- Auxiliary Space Complexity: O(1), because only a constant number of extra variables are used.

Key Learning

Today I learned how to solve an array problem using a greedy approach. I understood how to check neighbouring elements, handle boundary conditions, and update an array while traversing it.

180-Day Challenge Progress

- Day 1: Merge Strings Alternately
- Day 2: Greatest Common Divisor of Strings
- Day 3: Kids With the Greatest Number of Candies
- Day 4: Can Place Flowers

Progress: 4 / 180 Days Completed 🚀

Consistency, logic building, and problem-solving — one day at a time.



Day 5 – Reverse Vowels of a String

Problem Details

- Platform: LeetCode
- Problem Number: 345
- Problem Name: Reverse Vowels of a String
- Difficulty: Easy
- Topics: Strings, Two Pointers
- Language: C++

Problem Link

"LeetCode – Reverse Vowels of a String" (https://leetcode.com/problems/reverse-vowels-of-a-string/)

Problem Understanding

Given a string "s", reverse only its vowels while keeping all consonants and other characters in their original positions.

The vowels include:

- Lowercase: a, e, i, o, u
- Uppercase: A, E, I, O, U

Approach: Two Pointers

I used the Two Pointers technique to reverse the vowels efficiently.

1. Create an "isVowel()" function to identify vowels.
2. Initialise "left" at the beginning of the string.
3. Initialise "right" at the end of the string.
4. Move the left pointer forward until it finds a vowel.
5. Move the right pointer backward until it finds a vowel.
6. Swap the two vowels.
7. Move both pointers towards the centre.
8. Repeat until the pointers meet or cross.
9. Return the modified string.

Example

Input:

s = "IceCreAm"

Output:

"AceCreIm"

The vowels "I, e, e, A" become "A, e, e, I", while the consonants remain in their original positions.

Important Concepts Learned

- Two Pointers technique
- String traversal
- Character comparison
- Vowel identification
- "while" loops
- Logical operators ("&&", "||", "!")
- "swap()" function
- Working with string indices

Complexity Analysis

- Time Complexity: O(m), where m is the length of the string.
- Auxiliary Space Complexity: O(1), excluding the input string copy.

Key Learning

Today I learned how to use the Two Pointers technique to process a string from both ends.

I understood how to skip unwanted characters, identify valid characters, swap them, and move both pointers towards the centre.

This problem improved my understanding of string manipulation and efficient pointer movement.

180-Day DSA Challenge Progress

- Day 1: Merge Strings Alternately
- Day 2: Greatest Common Divisor of Strings
- Day 3: Kids With the Greatest Number of Candies
- Day 4: Can Place Flowers
- Day 5: Reverse Vowels of a String

Progress: 5 / 180 Days Completed 🚀

Consistency over perfection. Building logic one problem at a time.



Day 6 – Reverse Words in a String

Problem Details

- Platform: LeetCode
- Problem Number: 151
- Problem Name: Reverse Words in a String
- Difficulty: Medium
- Topics: Strings, String Manipulation
- Language: C++

Problem Link

"LeetCode – Reverse Words in a String" (https://leetcode.com/problems/reverse-words-in-a-string/)

Problem Understanding

Given a string containing words separated by spaces, reverse the order of the words.

The final string must:

- Have exactly one space between words.
- Have no leading spaces.
- Have no trailing spaces.
- Preserve the original spelling of each word.

Approach: Stringstream + Vector

1. Create a "stringstream" using the input string.
2. Extract individual words using "ss >> word".
3. Store each extracted word in a vector using "push_back()".
4. Reverse the vector using "reverse()".
5. Create an empty result string.
6. Append each word to the result.
7. Add a space before every word except the first.
8. Return the final string.

Example

Input:

"  hello   world  "

Extracted words:

["hello", "world"]

After reversing:

["world", "hello"]

Output:

"world hello"

Important Concepts Learned

- String manipulation
- Stringstream
- Vector of strings
- Word extraction
- "push_back()"
- "reverse()" function
- String concatenation
- Handling extra spaces
- Time and space complexity

Complexity Analysis

- Time Complexity: O(n), where n is the input string length.
- Auxiliary Space Complexity: O(n), for storing the extracted words and constructing the result.

Key Learning

Today I learned how to extract individual words from a sentence, handle multiple spaces, reverse the order of words, and construct a clean output string.

I also understood how "stringstream", vectors, and the STL "reverse()" function work together to solve string manipulation problems efficiently.

180-Day DSA Challenge Progress

- Day 1: Merge Strings Alternately
- Day 2: Greatest Common Divisor of Strings
- Day 3: Kids With the Greatest Number of Candies
- Day 4: Can Place Flowers
- Day 5: Reverse Vowels of a String
- Day 6: Reverse Words in a String

Progress: 6 / 180 Days Completed 🚀

Learning consistently, improving logical thinking, and becoming a better problem solver.
\


Day 7 – Product of Array Except Self

Problem Details

- Platform: LeetCode
- Problem Number: 238
- Problem Name: Product of Array Except Self
- Difficulty: Medium
- Topics: Arrays, Prefix Product, Suffix Product
- Language: C++

Problem Link

"LeetCode – Product of Array Except Self" (https://leetcode.com/problems/product-of-array-except-self/)

Problem Understanding

Given an integer array "nums", return an array "answer" where each element contains the product of all elements in the original array except the element at the same index.

The solution must:

- Run in O(n) time.
- Not use division.
- Use O(1) auxiliary space, excluding the output array.

Approach: Prefix Product and Suffix Product

I solved this problem using two traversals.

First Pass – Prefix Product

1. Create an answer array initialised with 1.
2. Initialise a variable "prefix = 1".
3. Traverse the array from left to right.
4. Store the current prefix product in "answer[i]".
5. Multiply prefix by the current array element.

Second Pass – Suffix Product

1. Initialise a variable "suffix = 1".
2. Traverse the array from right to left.
3. Multiply "answer[i]" by the current suffix product.
4. Update suffix by multiplying it with "nums[i]".

The final answer contains the product of all elements except the current element.

Example

Input:

nums = [1, 2, 3, 4]

Prefix products:

[1, 1, 2, 6]

Suffix products:

[24, 12, 4, 1]

Output:

[24, 12, 8, 6]

Important Concepts Learned

- Array traversal
- Prefix product
- Suffix product
- Left-to-right traversal
- Right-to-left traversal
- Space optimisation
- Handling zero values
- Avoiding division
- Time and space complexity

Complexity Analysis

- Time Complexity: O(n), because the array is traversed twice.
- Auxiliary Space Complexity: O(1), excluding the output array.

Key Learning

Today I learned how prefix and suffix products work together to solve an array problem efficiently.

I understood how to calculate products from both directions without using division or an additional prefix/suffix array.

This problem improved my understanding of array traversal, mathematical logic, and space optimisation.

180-Day DSA Challenge Progress

- Day 1: Merge Strings Alternately
- Day 2: Greatest Common Divisor of Strings
- Day 3: Kids With the Greatest Number of Candies
- Day 4: Can Place Flowers
- Day 5: Reverse Vowels of a String
- Day 6: Reverse Words in a String
- Day 7: Product of Array Except Self

Progress: 7 / 180 Days Completed 🚀

Building strong fundamentals through consistent practice.

Day 8 – Increasing Triplet Subsequence

Problem Details

- Platform: LeetCode
- Problem Number: 334
- Problem Name: Increasing Triplet Subsequence
- Difficulty: Medium
- Topics: Arrays, Greedy
- Language: C++

Problem Link

"LeetCode – Increasing Triplet Subsequence" (https://leetcode.com/problems/increasing-triplet-subsequence/)

Problem Understanding

Given an integer array, determine whether there are three indices i, j, and k such that:

- i < j < k
- nums[i] < nums[j] < nums[k]

Return true if an increasing triplet exists; otherwise, return false.

Approach: Greedy Algorithm

1. Initialise two variables, "first" and "second", with "INT_MAX".
2. Traverse the array from left to right.
3. If the current element is less than or equal to "first", update "first".
4. Otherwise, if it is less than or equal to "second", update "second".
5. Otherwise, an increasing triplet has been found, so return true.
6. If traversal finishes without finding a triplet, return false.

Example

Input:

[2, 1, 5, 0, 4, 6]

Increasing triplet:

0 < 4 < 6

Output:

true

Important Concepts Learned

- Array traversal
- Greedy algorithm
- Maintaining two minimum values
- Conditional statements
- Strictly increasing subsequences
- INT_MAX
- Optimised problem solving

Complexity Analysis

- Time Complexity: O(n), because the array is traversed once.
- Auxiliary Space Complexity: O(1), because only two variables are maintained.

Key Learning

Today I learned how to identify an increasing triplet subsequence using a greedy approach.

I understood how maintaining two minimum values helps identify a valid increasing sequence without using nested loops or additional arrays.

180-Day DSA Challenge Progress

- Day 1: Merge Strings Alternately
- Day 2: Greatest Common Divisor of Strings
- Day 3: Kids With the Greatest Number of Candies
- Day 4: Can Place Flowers
- Day 5: Reverse Vowels of a String
- Day 6: Reverse Words in a String
- Day 7: Product of Array Except Self
- Day 8: Increasing Triplet Subsequence

Progress: 8 / 180 Days Completed 🚀

Consistency, problem-solving, and continuous improvement.



# Day 9 – String Compression

## Problem Details
- **Platform:** LeetCode
- **Problem Number:** 443
- **Problem Name:** String Compression
- **Difficulty:** Medium
- **Topics:** Strings, Arrays, Two Pointers
- **Language:** C++

## Problem Link
[LeetCode – String Compression](https://leetcode.com/problems/string-compression/)

## Problem Understanding

Given an array of characters, compress consecutive repeated characters.

- Write each character once.
- If it appears more than once consecutively, write its frequency after the character.
- Modify the original array in-place.
- Return the length of the compressed result.

## Approach: Two Pointers

1. Initialise a reading pointer `i` and writing pointer `write`.
2. Traverse the array using the reading pointer.
3. Store the current character.
4. Count its consecutive occurrences.
5. Write the character at the writing position.
6. If the count is greater than one, convert it into a string and write each digit.
7. Return the writing pointer as the compressed length.

## Example

**Input:**
```cpp
['a','a','b','b','c','c','c']
```

**Output:**
```cpp
['a','2','b','2','c','3']
```

**Compressed length:** 6

## Important Concepts Learned

- Two Pointers technique
- In-place array modification
- Consecutive character counting
- Frequency counting
- `to_string()` function
- String traversal
- Time and space complexity

## Complexity Analysis

- Time Complexity: O(n)
- Auxiliary Space Complexity: O(1)

## Key Learning

Today I learned how to compress consecutive repeated characters using two pointers.

I understood the difference between the reading pointer and writing pointer, how to count repeated characters, and how to convert an integer frequency into individual characters.

## 180-Day DSA Challenge Progress

- Day 1: Merge Strings Alternately
- Day 2: Greatest Common Divisor of Strings
- Day 3: Kids With the Greatest Number of Candies
- Day 4: Can Place Flowers
- Day 5: Reverse Vowels of a String
- Day 6: Reverse Words in a String
- Day 7: Product of Array Except Self
- Day 8: Increasing Triplet Subsequence
- Day 9: String Compression

**Progress: 9 / 180 Days Completed 🚀**

Learning the logic, writing my own code, and improving every day.


Day 10 -- LeetCode 283: Move Zeroes
Study plan: LeetCode 75
Topic: Array / Two Pointers
Difficulty: Easy
Language: C++
1. Problem statement
Given an integer array nums, move all 0s to the end of the array
while maintaining the relative order of the non-zero elements.

You must modify the original array in-place. Do not make a copy of
the array.
What the question means
1. Every non-zero number must appear before every zero.
2. The non-zero numbers must keep their original order.
3. The original nums array must be changed directly.
4. The function does not need to return an array. LeetCode checks the
   modified array.
Example 1
Input
nums = {0, 1, 0, 3, 12};
Expected array after the function runs
{1, 3, 12, 0, 0}
The non-zero numbers were 1, 3, 12, and their order stays the same.
Other useful cases
  Input               Array after moving zeroes
  {0}               {0}
{1, 2, 3}         {1, 2, 3}
{0, 0, 5}         {5, 0, 0}
{4, 0, 5, 0, 2}   {4, 5, 2, 0, 0}
2. Understand the Two Pointers idea
We use two index variables for two different jobs:
- i scans the array from left to right.
- position marks the next index where a non-zero number should be
  placed.
Think of position as the next available place in the front section of
the array.

Initially:
int position = 0;
Why zero? Because the first non-zero number we find should be placed at
the beginning of the array.

As we scan:
- If nums[i] is zero, skip it. Do not move position.
- If nums[i] is non-zero, swap it with nums[position], then
  increase position.
This gradually collects all non-zero values at the front, in their
original order. The zeroes are left behind at the end.
3. Dry run: step by step
Start with:
nums = {0, 1, 0, 3, 12};
position = 0;
`i`   `nums[i]` What happens                Array after action     `position`

  0           0 Zero: skip                  `{0, 1, 0, 3, 12}`              0
  1           1 Swap index 1 with index 0   `{1, 0, 0, 3, 12}`              1
  2           0 Zero: skip                  `{1, 0, 0, 3, 12}`              1
  3           3 Swap index 3 with index 1   `{1, 3, 0, 0, 12}`              2
  4          12 Swap index 4 with index 2   `{1, 3, 12, 0, 0}`              3
Final array:
{1, 3, 12, 0, 0}
The key observation
position only increases when a non-zero number is found.

It does not increase when we see zero. This is what allows the next
non-zero number to fill the earliest zero position.
4. C++ solution
This is the code to enter in the LeetCode editor shown in the
screenshot:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int position = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[position], nums[i]);
                position++;
            }
        }
    }
};
If your editor does not already include the standard headers, vector
and swap are commonly provided by:
#include <vector>
#include <algorithm>
using namespace std;
LeetCode generally provides the required environment, so use the class
and function template it gives you.
5. Explain every line
Function signature
void moveZeroes(vector<int>& nums)
- void: The function does not return a value.
- vector<int>: The input is a vector of integers.
- &: Pass by reference, so changes affect the original vector.
- nums: The name of the input vector.
Position variable
int position = 0;
Stores the next index for a non-zero element.
Loop
for (int i = 0; i < nums.size(); i++)
Visits every element once. i is the scanning pointer.
Condition
if (nums[i] != 0)
Only non-zero elements need to be moved to the front.
Swap
swap(nums[position], nums[i]);
Places the current non-zero element into the next available front
position. The value at that front position is moved to index i.

When i == position, this swaps an element with itself, which is safe.
Advance the placement pointer
position++;
The next non-zero element should go in the next position.
6. Why does this work?
At any point in the loop, the section before position contains the
non-zero elements we have found so far, in their original relative
order.

When we find another non-zero value at index i, we put it at
position, immediately after the non-zero values already collected.
Then we increase position.

At the end:
- The front section contains every non-zero element in original order.
- All remaining positions contain zeroes.
The loop does not need a separate step to fill zeroes. The swaps
naturally leave them in the remaining positions.
7. Complexity analysis
Let n be the number of elements in nums.
- Time complexity: O(n) -- the loop scans the vector once. Each
  iteration does constant-time work.
- Auxiliary space complexity: O(1) -- only the two integer
  indices are used; no second array is created.
This satisfies the in-place requirement.
8. Common mistakes
1. Increasing position for every element: Wrong. Increase it only
   when a non-zero element is found.
2. Using && or an unnecessary second loop: A single scan is
   enough for this approach.
3. Sorting the vector: Sorting can change the relative order of
   non-zero elements.
4. Creating a second vector: The question explicitly requires
   in-place modification.
5. Returning nums: The required function returns void; modify
   the vector through its reference.
9. Practice before looking at the solution
Try this input by hand:
nums = {0, 5, 0, 2, 0, 8, 9};
Expected final vector:
{5, 2, 8, 9, 0, 0, 0}
Answer these questions in your own words:
1. What is the job of i?
2. What is the job of position?
3. Why does position stay unchanged when nums[i] == 0?
4. Why do we preserve the order of non-zero elements?
5. Why is the space complexity O(1)?
10. Day 10 takeaways
- A Two Pointers solution can use two indices for different
  responsibilities.
- One pointer scans; the other tracks where to place a value.
- Understand what each pointer represents before writing the loop.
- In-place means modifying the original data structure rather than
  creating a copy.
- Do a dry run to check how indices and array values change.
Core logic to remember:
Scan every element. When it is non-zero, swap it into the next
available front position and advance that position.

Do not memorize the code. Understand why position moves only for
non-zero values.





Day 11 – Is Subsequence

Problem Details

- Platform: LeetCode
- Problem Number: 392
- Problem Name: Is Subsequence
- Difficulty: Easy
- Topics: Two Pointers, Strings
- Language: C++

Problem Link

LeetCode – Is Subsequence
https://leetcode.com/problems/is-subsequence/

Problem Understanding

Given two strings "s" and "t", return true if "s" is a subsequence of "t". Otherwise, return false.

A subsequence is a string that can be formed by deleting zero or more characters from another string without changing the relative order of the remaining characters.

The solution checks whether every character of "s" can be found in "t" in the same order. Characters may be skipped in "t", but the order of the characters in "s" must be maintained.

Approach: Two Pointers

I solved this problem using two pointers and one traversal of string "t".

Pointer "i" tracks the current character in string "s".
Pointer "j" traverses string "t" to search for the required characters.

1. Initialise "i = 0" and "j = 0".
2. Traverse string "t" while "j" is less than the length of "t".
3. Check whether "i" is less than the length of "s" and whether "s[i]" is equal to "t[j]".
4. If the characters match, increment "i" because one character of "s" has been found.
5. Increment "j" in every iteration to continue scanning string "t".
6. After the traversal, check whether "i" is equal to the length of "s".
7. If they are equal, all characters of "s" were found in the correct order, so return true. Otherwise, return false.

C++ Code

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;

        while (j < t.size()) {
            if (i < s.size() && s[i] == t[j]) {
                i++;
            }

            j++;
        }

        return i == s.size();
    }
};

Example 1

Input:
s = "abc"
t = "ahbgdc"

Output:
true

Explanation:
- Match 'a' with the first character of "t".
- Skip 'h' and find 'b'.
- Skip 'g' and 'd', then find 'c'.
- All characters of "s" are found in the correct order.

Example 2

Input:
s = "axc"
t = "ahbgdc"

Output:
false

Explanation:
- The character 'a' is found.
- The next required character is 'x'.
- The remaining part of "t" does not contain 'x'.
- Therefore, "s" is not a subsequence of "t".

Important Concepts Learned

- Two Pointers technique
- String traversal
- Character comparison
- Maintaining relative order
- Skipping characters while searching
- Using a condition to avoid out-of-range access
- Understanding subsequences
- Time and space complexity

Complexity Analysis

- Time Complexity: O(n), where n is the length of string "t", because the second string is traversed once.
- Auxiliary Space Complexity: O(1), because only two pointer variables are used and no additional array or string is created.

Key Learning

Today I learned how to use the Two Pointers technique to check whether one string is a subsequence of another.

I understood that pointer "i" moves only when a matching character is found, while pointer "j" moves through string "t" in every iteration.

This ensures that characters are matched in the correct order without using extra space.

180-Day DSA Challenge Progress

- Day 1: Merge Strings Alternately
- Day 2: Greatest Common Divisor of Strings
- Day 3: Kids With the Greatest Number of Candies
- Day 4: Can Place Flowers
- Day 5: Reverse Vowels of a String
- Day 6: Reverse Words in a String
- Day 7: Product of Array Except Self
- Day 11: Is Subsequence

Progress: 11 / 180 Days Completed

Building strong fundamentals through consistent practice.

Day 12 – Container With Most Water

Problem Details

- Platform: LeetCode
- Problem Number: 11
- Problem Name: Container With Most Water
- Difficulty: Medium
- Topics: Arrays, Two Pointers, Greedy
- Language: C++

Problem Link

LeetCode – Container With Most Water
https://leetcode.com/problems/container-with-most-water/

Problem Understanding

Given an integer array "height", find two lines that, together with the x-axis, can form a container that holds the maximum amount of water.

Each element represents the height of a vertical line, and its index represents its position.

The amount of water depends on the distance between the two selected lines and the height of the shorter line.

The solution must find the maximum possible area.

Approach: Two Pointers

I solved this problem using the Two Pointers technique.

I used two pointers:

- "left" starts from the beginning of the array.
- "right" starts from the end of the array.

I also used a variable "maxArea" to store the maximum water area.

The logic works as follows:

1. Initialise "left = 0".
2. Initialise "right = height.size() - 1".
3. Initialise "maxArea = 0".
4. Run a loop while "left < right".
5. Calculate the width using "right - left".
6. Find the smaller height using "min(height[left], height[right])".
7. Calculate the current area by multiplying width and the smaller height.
8. Update "maxArea" if the current area is greater.
9. If the left height is smaller than the right height, increment "left".
10. Otherwise, decrement "right".
11. Continue until both pointers meet.
12. Return "maxArea".

C++ Code

class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int maxArea = 0;

        while (left < right) {

            int width = right - left;

            int h = min(height[left], height[right]);

            int area = width * h;

            maxArea = max(maxArea, area);

            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }

        return maxArea;
    }
};

Example

Input:

height = [1, 8, 6, 2, 5, 4, 8, 3, 7]

Output:

49

Explanation:

- Initially, left = 0 and right = 8.
- Calculate the width and smaller height.
- Area = 8 * min(1, 7) = 8.
- Move the left pointer because its height is smaller.
- Continue calculating the area and moving the pointer with the smaller height.
- When left = 1 and right = 8, the area becomes 7 * min(8, 7) = 49.
- The maximum area found is 49.

Important Concepts Learned

- Two Pointers technique
- Array traversal
- Finding maximum area
- Width and height calculation
- Using the minimum of two heights
- Greedy approach
- Pointer movement
- Optimizing brute force solutions
- Time and space complexity

Complexity Analysis

- Brute Force Time Complexity: O(n²), because every possible pair of lines is checked.
- Optimized Time Complexity: O(n), because both pointers move towards each other and each position is visited at most once.
- Auxiliary Space Complexity: O(1), because only a few variables are used and no additional array is created.

Key Learning

Today I learned how to solve the Container With Most Water problem using the Two Pointers technique.

I understood that the amount of water depends on the width between two lines and the height of the shorter line.

I also learned why moving the pointer with the smaller height helps us eliminate pairs that cannot improve the current area.

This problem improved my understanding of Two Pointers, greedy thinking, mathematical calculations, and optimization from O(n²) to O(n).

180-Day DSA Challenge Progress

- Day 1: Merge Strings Alternately
- Day 2: Greatest Common Divisor of Strings
- Day 3: Kids With the Greatest Number of Candies
- Day 4: Can Place Flowers
- Day 5: Reverse Vowels of a String
- Day 6: Reverse Words in a String
- Day 7: Product of Array Except Self
- Day 10: Move Zeroes
- Day 11: Is Subsequence
- Day 12: Container With Most Water

Progress: 12 / 180 Days Completed 🚀

Building strong fundamentals through consistent practice.