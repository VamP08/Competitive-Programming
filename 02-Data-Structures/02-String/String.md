
## **Data Structure: String**

### **Conceptual Overview**

A string is a sequence of characters, typically used to represent text. In most programming languages, strings are implemented as an array of characters. They are a fundamental data structure in competitive programming, with problems ranging from simple manipulation to complex pattern matching.

### **Key Concepts & Properties**

* **Character Set:** Strings are composed of characters from a specific set, like ASCII (256 characters) or the English alphabet (26 characters). This small set size can often be exploited for optimizations.  
* **Immutability:** In many languages like Java and Python, strings are immutable, meaning they cannot be changed after creation. In C++, std::string is mutable.  
* **Substrings and Subsequences:**  
  * A **substring** is a contiguous sequence of characters within a string.  
  * A **subsequence** is formed by deleting zero or more characters without changing the order of the remaining characters.

### **Common String Operations & Algorithms**

* **Basic Manipulation:** Concatenation, finding length, accessing characters by index.  
* **Searching:** Finding occurrences of a substring (e.g., using KMP or Rabin-Karp).  
* **Comparison:** Lexicographical (dictionary) comparison.  
* **Hashing:** Polynomial rolling hash is a common technique to compare substrings in O(1) time after preprocessing.  
* **Advanced Algorithms:** KMP, Z-algorithm, Tries, Suffix Arrays/Trees.

### **Real-World Applications**

* **Text Processing:** Used in text editors, word processors, and search engines.  
* **Bioinformatics:** DNA sequences are often represented and analyzed as strings.  
* **Compilers:** Source code is parsed as a string.  
* **Data Transmission:** Data serialization formats like JSON or XML.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Valid Palindrome | LeetCode | [Link](https://leetcode.com/problems/valid-palindrome/) | Two Pointers |
| Longest Substring Without Repeating Characters | LeetCode | [Link](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Sliding Window, Hashing |
| Longest Palindromic Substring | LeetCode | [Link](https://leetcode.com/problems/longest-palindromic-substring/) | DP, Expand Around Center |
| Valid Anagram | LeetCode | [Link](https://leetcode.com/problems/valid-anagram/) | Hashing, Sorting |
| Implement strStr() | LeetCode | [Link](https://leetcode.com/problems/implement-strstr/) | String Searching, KMP |
| Word Break | LeetCode | [Link](https://leetcode.com/problems/word-break/) | Dynamic Programming |
| Group Anagrams | LeetCode | [Link](https://leetcode.com/problems/group-anagrams/) | Hashing, Sorting |
| Minimum Window Substring | LeetCode | [Link](https://leetcode.com/problems/minimum-window-substring/) | Sliding Window, Hashing |
| Valid Parentheses | LeetCode | [Link](https://leetcode.com/problems/valid-parentheses/) | Stack |
| Longest Repeating Character Replacement | LeetCode | [Link](https://leetcode.com/problems/longest-repeating-character-replacement/) | Sliding Window |
| String to Integer (atoi) | LeetCode | [Link](https://leetcode.com/problems/string-to-integer-atoi/) | String Parsing |
| Repeated DNA Sequences | LeetCode | [Link](https://leetcode.com/problems/repeated-dna-sequences/) | Hashing, Sliding Window |
