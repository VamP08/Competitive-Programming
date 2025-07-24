
## **Data Structure: Binary Search Tree (BST)**

### **Conceptual Overview**

A Binary Search Tree (BST) is a node-based binary tree data structure with a special ordering property that allows for fast searching, insertion, and deletion of elements.

### **The BST Property**

For any given node N in a BST:

1. All keys in the **left subtree** of N are **less than** the key of N.  
2. All keys in the **right subtree** of N are **greater than** the key of N.  
3. Both the left and right subtrees must also be binary search trees.

This property ensures that an **in-order traversal** of a BST visits the nodes in ascending (sorted) order.

### **Key Operations & Complexity**

The efficiency of BST operations depends on the height (h) of the tree.

| Operation | Average Case | Worst Case | Description |
| :---- | :---- | :---- | :---- |
| Search | O(logN) | O(N) | Compares the target key and decides whether to go left or right. |
| Insertion | O(logN) | O(N) | Searches for the correct position and inserts a new leaf node. |
| Deletion | O(logN) | O(N) | Finds the node and restructures the tree to maintain the BST property. |

* **Worst Case:** Occurs when the tree is unbalanced (skewed), resembling a linked list. **Self-balancing BSTs** (AVL, Red-Black trees) guarantee O(logN) performance.

### **Real-World Applications**

* **Database Indexing:** BSTs are used to build indexes for efficient record searching.  
* **Symbol Tables in Compilers:** Used to store information about variables and functions.  
* **Implementing Dictionaries and Sets:** std::map and std::set in C++ are often implemented using self-balancing BSTs.  
* **Dynamic Sorting:** Maintaining a sorted collection of data with frequent additions and removals.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Validate Binary Search Tree | LeetCode | [Link](https://leetcode.com/problems/validate-binary-search-tree/) | In-order Traversal, Recursion |
| Kth Smallest Element in a BST | LeetCode | [Link](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) | In-order Traversal |
| Lowest Common Ancestor of a BST | LeetCode | [Link](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/) | BST Properties |
| Convert Sorted Array to BST | LeetCode | [Link](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/) | Recursion, Balanced BST |
| Delete Node in a BST | LeetCode | [Link](https://leetcode.com/problems/delete-node-in-a-bst/) | BST Deletion Logic |
| Insert into a Binary Search Tree | LeetCode | [Link](https://leetcode.com/problems/insert-into-a-binary-search-tree/) | BST Insertion |
| Search in a Binary Search Tree | LeetCode | [Link](https://leetcode.com/problems/search-in-a-binary-search-tree/) | BST Search |
| Two Sum IV \- Input is a BST | LeetCode | [Link](https://leetcode.com/problems/two-sum-iv-input-is-a-bst/) | Traversal \+ Hashing/Two Pointers |
| Trim a Binary Search Tree | LeetCode | [Link](https://leetcode.com/problems/trim-a-binary-search-tree/) | Recursion |
| Unique Binary Search Trees | LeetCode | [Link](https://leetcode.com/problems/unique-binary-search-trees/) | Dynamic Programming, Catalan Numbers |
| Recover Binary Search Tree | LeetCode | [Link](https://leetcode.com/problems/recover-binary-search-tree/) | In-order Traversal |
| Minimum Absolute Difference in BST | LeetCode | [Link](https://leetcode.com/problems/minimum-absolute-difference-in-bst/) | In-order Traversal |
