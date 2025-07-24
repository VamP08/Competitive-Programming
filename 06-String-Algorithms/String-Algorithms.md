
## **String Algorithms**

### **Conceptual Overview**

String algorithms are a specialized set of techniques designed for efficiently processing and analyzing strings. In competitive programming, problems often involve tasks like finding patterns, identifying palindromes, or comparing substrings within large amounts of text. While basic string manipulation is fundamental, advanced algorithms are necessary to solve these problems within typical time limits. \[3\]

### **Core Areas**

1. **String Hashing (Rabin-Karp):**  
   * **Focus:** Converting strings or substrings into numerical values (hashes) for fast comparison. \[5\]  
   * **Key Concept:** The polynomial rolling hash allows for constant-time comparison of any two substrings after a linear-time preprocessing step.  
   * **Application:** Quickly checking for equality between substrings, finding duplicate substrings, and palindrome detection.  
2. **Knuth-Morris-Pratt (KMP) Algorithm:**  
   * **Focus:** An efficient algorithm for finding all occurrences of a pattern string within a larger text string. \[3\]  
   * **Key Concept:** It uses a precomputed "Longest Proper Prefix Suffix" (LPS) array to avoid redundant comparisons by intelligently shifting the pattern upon a mismatch.  
   * **Application:** Linear-time pattern searching, finding periods in strings.  
3. **Z-Algorithm:**  
   * **Focus:** Another linear-time pattern searching algorithm. \[3\]  
   * **Key Concept:** It computes a Z-array where Z\[i\] is the length of the longest substring starting at index i that is also a prefix of the entire string.  
   * **Application:** Efficient pattern matching by constructing a new string P \+ "$" \+ T.

### **Why are String Algorithms Important?**

* **Efficiency:** Brute-force string searching can be O(N⋅M). Advanced algorithms like KMP and Z-Algorithm reduce this to O(N+M).  
* **Substring Operations:** Hashing provides a powerful tool to handle a vast number of problems involving substring comparisons that would otherwise be too slow.  
* **Specialized Problems:** Many competitive programming problems are specifically designed around string properties, making these algorithms essential.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Repeated DNA Sequences | LeetCode | [Link](https://leetcode.com/problems/repeated-dna-sequences/) | Hashing |
| Implement strStr() | LeetCode | [Link](https://leetcode.com/problems/implement-strstr/) | KMP / Z-Algorithm |
| String Matching | CSES | [Link](https://cses.fi/problemset/task/1753) | KMP / Hashing |
| Longest Duplicate Substring | LeetCode | [Link](https://leetcode.com/problems/longest-duplicate-substring/) | Binary Search \+ Hashing |
| Shortest Palindrome | LeetCode | [Link](https://leetcode.com/problems/shortest-palindrome/) | KMP / Hashing |
| Password | Codeforces | [Link](https://codeforces.com/problemset/problem/126/B) | KMP / Z-Algorithm |
| Finding Borders | CSES | [Link](https://cses.fi/problemset/task/1732) | KMP / Z-Algorithm |
| Good Substrings | Codeforces | [Link](https://codeforces.com/problemset/problem/271/D) | Hashing |
| Repeated Substring Pattern | LeetCode | [Link](https://leetcode.com/problems/repeated-substring-pattern/) | KMP |
| Prefixes and Suffixes | Codeforces | [Link](https://codeforces.com/problemset/problem/432/D) | Z-Algorithm |
