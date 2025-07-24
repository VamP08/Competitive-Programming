
## **Data Structure: Array**

### **Conceptual Overview**

An array is a fundamental data structure that stores a collection of elements of the same type in contiguous memory locations. It is one of the most important data structures in competitive programming due to its efficiency in accessing elements. Elements are identified by an index, which typically starts at 0\.

### **Key Concepts & Properties**

* **Contiguous Memory:** Elements are stored next to each other, which allows for efficient cache utilization.  
* **Random Access:** Any element can be accessed in O(1) time using its index.  
* **Fixed vs. Dynamic Size:** In C++, standard arrays have a fixed size. std::vector is a dynamic array that can resize itself, though resizing can be an O(N) operation.  
* **Subarray vs. Subsequence:**  
  * A **subarray** is a contiguous part of an array.  
  * A **subsequence** is derived by deleting zero or more elements without changing the order of the remaining elements.

### **Complexity Analysis**

| Operation | Big-O | Notes |
| :---- | :---- | :---- |
| Access | O(1) | The primary advantage of arrays. |
| Search | O(N) | Requires iterating through the array. |
| Search (Sorted) | O(logN) | Can be done efficiently with Binary Search. |
| Insertion/Deletion | O(N) | Requires shifting subsequent elements. |
| Insertion/Deletion (at end) | O(1) | Amortized time for dynamic arrays. |

### **Real-World Applications**

* **Storing Tabular Data:** Used to implement matrices and tables, such as spreadsheets.  
* **Implementing Other Data Structures:** Arrays form the basis for stacks, queues, heaps, and hash tables.  
* **Image Processing:** A digital image can be represented as a 2D array of pixels.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Contains Duplicate | LeetCode | [Link](https://leetcode.com/problems/contains-duplicate/) | Hashing, Sorting |
| Maximum Subarray | LeetCode | [Link](https://leetcode.com/problems/maximum-subarray/) | Kadane's Algorithm, DP |
| 3Sum | LeetCode | [Link](https://leetcode.com/problems/3sum/) | Two Pointers, Sorting |
| Container With Most Water | LeetCode | [Link](https://leetcode.com/problems/container-with-most-water/) | Two Pointers |
| Search in Rotated Sorted Array | LeetCode | [Link](https://leetcode.com/problems/search-in-rotated-sorted-array/) | Modified Binary Search |
| Sliding Window Maximum | LeetCode | [Link](https://leetcode.com/problems/sliding-window-maximum/) | Sliding Window, Deque |
| Product of Array Except Self | LeetCode | [Link](https://leetcode.com/problems/product-of-array-except-self/) | Prefix/Suffix Products |
| Rotate Array | LeetCode | [Link](https://leetcode.com/problems/rotate-array/) | In-place Manipulation |
| Merge Sorted Array | LeetCode | [Link](https://leetcode.com/problems/merge-sorted-array/) | Two Pointers |
| Trapping Rain Water | LeetCode | [Link](https://leetcode.com/problems/trapping-rain-water/) | Two Pointers, DP |
| Next Permutation | LeetCode | [Link](https://leetcode.com/problems/next-permutation/) | Array Manipulation |
| Best Time to Buy and Sell Stock | LeetCode | [Link](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | One Pass |
