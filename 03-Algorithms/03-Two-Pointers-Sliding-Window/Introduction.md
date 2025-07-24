
## **Overview: Two Pointers & Sliding Window**

### **Conceptual Overview**

The **Two Pointers** and **Sliding Window** techniques are powerful algorithmic patterns for efficiently processing linear data structures like arrays, strings, and linked lists. They involve using two index pointers to traverse the data in a single pass, which often reduces the time complexity of a brute-force approach from quadratic (O(N2)) to linear (O(N)).

### **Core Relationship**

The **Sliding Window** technique is a specialized application of the **Two Pointers** pattern. While both use two pointers, their focus differs:

* **Two Pointers (General):** This is a broader category. The pointers can move in opposite directions (converging), the same direction at different speeds (fast/slow), or according to other logic. The focus is often on the elements *at* the pointers themselves, such as finding a pair that sums to a target.  
* **Sliding Window:** This is a form of the same-directional two-pointer technique where the pointers define a contiguous sub-segment (the "window"). The algorithm is concerned with the properties of all the elements *within* this window. The window expands and contracts as it moves across the data.

### **When to Use Which**

* Use the **Opposite Directional Two Pointers** pattern for finding pairs in a **sorted array** or checking for palindromes.  
* Use the **Fast & Slow Two Pointers** pattern for problems involving **linked lists**, such as cycle detection or finding the middle element.  
* Use the **Sliding Window** pattern for problems on **contiguous subarrays or substrings**, such as finding the maximum sum subarray of size K or the longest substring with no repeating characters.

### **Detailed Guides**

For a deep dive into each technique, including theory, applications, and practice problems, please see the detailed guides in this directory:

* **(./Two-Pointers.md)**  
* **(./Sliding-Window.md)**