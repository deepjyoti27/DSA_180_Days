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