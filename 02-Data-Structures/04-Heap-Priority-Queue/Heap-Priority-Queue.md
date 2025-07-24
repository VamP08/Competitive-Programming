
## **Data Structures: Heap & Priority Queue**

### **Conceptual Overview**

A **Priority Queue** is an abstract data type where each element has a "priority." Elements with higher priority are served before elements with lower priority.

A **Heap** is a specialized tree-based data structure that is a common and efficient way to *implement* a priority queue. It is a complete binary tree that satisfies the heap property:

* **Max-Heap:** The key of a parent node is always greater than or equal to the keys of its children. The largest element is at the root.  
* **Min-Heap:** The key of a parent node is always less than or equal to the keys of its children. The smallest element is at the root.

### **Key Operations & Complexity**

For a heap with N elements, the key operations are highly efficient:

| Operation | Big-O | Description |
| :---- | :---- | :---- |
| Insertion (push) | O(logN) | Adds a new element while maintaining the heap property. |
| Deletion (pop) | O(logN) | Removes the root element (highest/lowest priority). |
| Peek (top) | O(1) | Retrieves the root element without removing it. |
| Build Heap | O(N) | Creates a heap from an unsorted array. |

### **Real-World Applications**

* **Task Scheduling:** Operating systems use priority queues to manage processes with different priorities.  
* **Event-Driven Simulation:** Managing events by processing the one with the earliest timestamp first.  
* **Graph Algorithms:**  
  * **Dijkstra's Algorithm:** A priority queue efficiently selects the unvisited node with the smallest distance.  
  * **Prim's Algorithm:** A priority queue helps find the minimum-weight edge to connect a new vertex to the MST.  
* **Data Compression:** Huffman coding uses a priority queue to build the optimal prefix code tree.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Kth Largest Element in an Array | LeetCode | [Link](https://leetcode.com/problems/kth-largest-element-in-an-array/) | Min-Heap |
| Merge K Sorted Lists | LeetCode | [Link](https://leetcode.com/problems/merge-k-sorted-lists/) | Min-Heap |
| Find Median from Data Stream | LeetCode | [Link](https://leetcode.com/problems/find-median-from-data-stream/) | Two Heaps (Min-Heap & Max-Heap) |
| Top K Frequent Elements | LeetCode | [Link](https://leetcode.com/problems/top-k-frequent-elements/) | Min-Heap, Hashing |
| Meeting Rooms II | LeetCode | [Link](https://leetcode.com/problems/meeting-rooms-ii/) | Min-Heap, Sorting |
| IPO | LeetCode | [Link](https://leetcode.com/problems/ipo/) | Two Heaps, Greedy |
| Kth Smallest Element in a Sorted Matrix | LeetCode | [Link](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/) | Min-Heap |
| Find K Pairs with Smallest Sums | LeetCode | [Link](https://leetcode.com/problems/find-k-pairs-with-smallest-sums/) | Min-Heap |
| Last Stone Weight | LeetCode | [Link](https://leetcode.com/problems/last-stone-weight/) | Max-Heap |
| K Closest Points to Origin | LeetCode | [Link](https://leetcode.com/problems/k-closest-points-to-origin/) | Max-Heap |
| Reorganize String | LeetCode | [Link](https://leetcode.com/problems/reorganize-string/) | Max-Heap, Greedy |
| Task Scheduler | LeetCode | [Link](https://leetcode.com/problems/task-scheduler/) | Max-Heap, Greedy |
