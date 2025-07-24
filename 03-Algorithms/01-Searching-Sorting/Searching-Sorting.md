
## **Algorithms: Searching & Sorting**

### **Conceptual Overview**

Searching and sorting are two of the most fundamental and frequently encountered tasks in competitive programming. A deep understanding of these algorithms is crucial, as they often serve as building blocks for solving more complex problems. The efficiency of a solution can hinge on choosing the right searching or sorting algorithm for the given constraints.

* **Searching:** The process of finding the location of a specific element (the target) within a collection of items. The choice of algorithm depends heavily on whether the data is sorted.  
* **Sorting:** The process of arranging elements of a list or array in a specific order (e.g., ascending or descending). A sorted collection enables much more efficient searching and is often a necessary preprocessing step for many other algorithms.

### **Core Theory & Patterns**

#### **Searching Algorithms**

1. **Linear Search:**  
   * **How it works:** Iterates through the collection one element at a time until the target is found or the end is reached.  
   * **When to use:** When the data is unsorted or the collection is small.  
   * **Complexity:** O(N) time, O(1) space.  
2. **Binary Search:**  
   * **How it works:** A highly efficient "divide and conquer" algorithm that works only on **sorted** data. It repeatedly divides the search interval in half, eliminating half of the remaining elements at each step.  
   * **When to use:** On any sorted array or when you can apply "Binary Search on the Answer" to a monotonic function.  
   * **Complexity:** O(logN) time, O(1) space.

#### **Sorting Algorithms**

Sorting algorithms are broadly classified into two categories:

1. **Comparison-Based Sorting:** These algorithms sort by comparing elements. The theoretical lower bound for their time complexity is O(NlogN).  
   * **Merge Sort:** A stable, divide-and-conquer algorithm that guarantees O(NlogN) performance. It requires O(N) extra space. \[1\]  
   * **Quick Sort:** Also a divide-and-conquer algorithm. It has an average-case time complexity of O(NlogN) but can degrade to O(N2) in the worst case. It is an in-place sort. \[2\]  
   * **Heap Sort:** An in-place sort with guaranteed O(NlogN) performance.  
2. **Non-Comparison-Based Sorting:** These algorithms sort without comparing elements, often by exploiting the properties of the input data (e.g., integer ranges). They can be faster than O(NlogN).  
   * **Counting Sort:** Efficient for sorting integers within a small range. Time complexity is O(N+K), where K is the range of the input values.  
   * **Radix Sort:** Sorts integers digit by digit. Efficient for large numbers.

### **Real-World Applications**

* **Databases:** Sorting is used for ordering results, and binary search is used on indexed columns for fast lookups.  
* **Search Engines:** Sorting algorithms rank search results, while searching algorithms locate relevant documents.  
* **Computer Graphics:** Sorting is used to render objects in the correct order (painter's algorithm).  
* **Networking:** Routers use sorting to prioritize data packets.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Binary Search | LeetCode | [Link](https://leetcode.com/problems/binary-search/) | Basic Binary Search |
| Search in Rotated Sorted Array | LeetCode | [Link](https://leetcode.com/problems/search-in-rotated-sorted-array/) | Modified Binary Search |
| Sort an Array | LeetCode | [Link](https://leetcode.com/problems/sort-an-array/) | Merge Sort / Quick Sort |
| Merge Sorted Array | LeetCode | [Link](https://leetcode.com/problems/merge-sorted-array/) | Merge Step of Merge Sort |
| Aggressive cows | SPOJ | [Link](https://www.spoj.com/problems/AGGRCOW/) | Binary Search on Answer |
| Kth Largest Element in an Array | LeetCode | [Link](https://leetcode.com/problems/kth-largest-element-in-an-array/) | Quickselect / Sorting |
| Sort Colors (Dutch National Flag) | LeetCode | [Link](https://leetcode.com/problems/sort-colors/) | 3-way Partitioning |
| Counting Inversions | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/counting-inversions/) | Merge Sort Application |
| Find First and Last Position of Element in Sorted Array | LeetCode | [Link](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) | Binary Search (Lower/Upper Bound) |
| Search a 2D Matrix | LeetCode | [Link](https://leetcode.com/problems/search-a-2d-matrix/) | Binary Search on 2D Array |
| Top K Frequent Elements | LeetCode | [Link](https://leetcode.com/problems/top-k-frequent-elements/) | Bucket Sort / Quickselect |
| Meeting Rooms II | LeetCode | [Link](https://leetcode.com/problems/meeting-rooms-ii/) | Sorting, Priority Queue |
