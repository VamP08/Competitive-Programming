
## **Data Structure: Trees (Introduction)**

### **Conceptual Overview**

A tree is a non-linear, hierarchical data structure consisting of nodes connected by edges. Unlike linear structures, trees represent parent-child relationships, making them ideal for storing information with a natural hierarchy.

### **Key Terminologies**

* **Node:** The fundamental unit, containing data and pointers to children.  
* **Root:** The topmost node with no parent.  
* **Parent:** A node with one or more child nodes.  
* **Child:** A node with a parent.  
* **Leaf:** A node with no children.  
* **Subtree:** A tree consisting of a node and all its descendants.  
* **Depth/Level:** The distance (number of edges) from the root to a node.  
* **Height:** The length of the longest path from a node to a leaf.

### **Types of Trees**

* **Binary Tree:** Each node has at most two children.  
* **Binary Search Tree (BST):** A binary tree with a specific ordering property for fast searching.  
* **Self-Balancing BSTs (AVL, Red-Black):** BSTs that maintain logarithmic height.  
* **Heap:** A complete binary tree used to implement priority queues.  
* **Trie:** A tree used for efficient storage and retrieval of strings.  
* **N-ary Tree:** Each node can have up to N children.

### **Tree Traversal Algorithms**

There are two main ways to traverse a tree:

* **Depth-First Search (DFS):** Explores as far as possible down each branch before backtracking.  
  * **Pre-order:** Root \-\> Left \-\> Right  
  * **In-order:** Left \-\> Root \-\> Right  
  * **Post-order:** Left \-\> Right \-\> Root  
* **Breadth-First Search (BFS) / Level Order:** Explores nodes level by level, from top to bottom and left to right.

### **Real-World Applications**

* **File Systems:** Directory structures in operating systems.  
* **Database Indexing:** B-Trees and B+ Trees are used for efficient data indexing.  
* **DOM in HTML:** The Document Object Model represents an HTML page as a tree.  
* **AI and Game Development:** Decision trees and game trees model decision-making.  
* **Compilers:** Abstract Syntax Trees (ASTs) represent the structure of source code.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Maximum Depth of Binary Tree | LeetCode | [Link](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | Recursion, DFS |
| Invert Binary Tree | LeetCode | [Link](https://leetcode.com/problems/invert-binary-tree/) | Recursion, Tree Traversal |
| Subtree of Another Tree | LeetCode | [Link](https://leetcode.com/problems/subtree-of-another-tree/) | Recursion, Tree Hashing |
| Binary Tree Level Order Traversal | LeetCode | [Link](https://leetcode.com/problems/binary-tree-level-order-traversal/) | BFS, Queue |
| Binary Tree Preorder Traversal | LeetCode | [Link](https://leetcode.com/problems/binary-tree-preorder-traversal/) | DFS, Pre-order |
| Binary Tree Inorder Traversal | LeetCode | [Link](https://leetcode.com/problems/binary-tree-inorder-traversal/) | DFS, In-order |
| Binary Tree Right Side View | LeetCode | [Link](https://leetcode.com/problems/binary-tree-right-side-view/) | BFS, Level Order |
| Diameter of Binary Tree | LeetCode | [Link](https://leetcode.com/problems/diameter-of-binary-tree/) | DFS, Recursion |
| Lowest Common Ancestor of a Binary Tree | LeetCode | [Link](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) | DFS, Recursion |
| Validate Binary Search Tree | LeetCode | [Link](https://leetcode.com/problems/validate-binary-search-tree/) | DFS, In-order Traversal |
