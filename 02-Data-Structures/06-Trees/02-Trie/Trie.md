
## **Data Structure: Trie (Prefix Tree)**

### **Conceptual Overview**

A **Trie** (from "re**trie**val"), also known as a prefix tree, is a tree-like data structure for efficiently storing and searching a collection of strings. Unlike a BST, a node's position in the Trie defines the key it's associated with. Each node represents a character, and a path from the root represents a prefix. A special marker on a node indicates the end of a complete word.

### **Key Operations & Complexity**

Let L be the length of the string and N be the number of keys in the Trie.

| Operation | Big-O | Description |
| :---- | :---- | :---- |
| Insertion | O(L) | Traverses the Trie, creating new nodes for characters not yet in the path. |
| Search | O(L) | Traverses the Trie based on the characters of the search string. |
| Deletion | O(L) | Finds the word and removes its nodes carefully. |
| Prefix Search | O(L) | Finds all words starting with a given prefix. |

The key advantage is that operation time complexity depends only on the key's length, not the total number of keys.

### **Real-World Applications**

* **Autocomplete/Predictive Text:** Used in search engines and code editors for fast prefix-based suggestions.  
* **Spell Checkers:** A dictionary stored in a Trie allows for efficient word validation and correction suggestions.  
* **IP Routing (Radix Tree):** Routers use Tries to find the longest prefix match for routing packets efficiently.  
* **Bioinformatics:** Used in sequence alignment applications like BLAST.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Implement Trie (Prefix Tree) | LeetCode | [Link](https://leetcode.com/problems/implement-trie-prefix-tree/) | Basic Trie Implementation |
| Word Search II | LeetCode | [Link](https://leetcode.com/problems/word-search-ii/) | Trie, Backtracking |
| Add and Search Word | LeetCode | [Link](https://leetcode.com/problems/add-and-search-word-data-structure-design/) | Trie with Wildcard Search |
| Maximum XOR of Two Numbers in an Array | LeetCode | [Link](https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/) | Binary Trie |
| Replace Words | LeetCode | [Link](https://leetcode.com/problems/replace-words/) | Prefix Matching |
| Word Break | LeetCode | [Link](https://leetcode.com/problems/word-break/) | Trie \+ DP |
| Design Search Autocomplete System | LeetCode | [Link](https://leetcode.com/problems/design-search-autocomplete-system/) | Trie with Frequency |
| Palindrome Pairs | LeetCode | [Link](https://leetcode.com/problems/palindrome-pairs/) | Trie, Palindromes |
| Concatenated Words | LeetCode | [Link](https://leetcode.com/problems/concatenated-words/) | Trie \+ DP |
| Shortest Encoding of Words | LeetCode | [Link](https://leetcode.com/problems/shortest-encoding-of-words/) | Suffix Trie idea |
