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