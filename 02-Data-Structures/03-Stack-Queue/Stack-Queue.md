
## **Data Structures: Stack & Queue**

### **Conceptual Overview**

Stacks and Queues are linear data structures fundamental to computer science. They differ in how elements are added and removed.

* **Stack:** Follows the **Last-In, First-Out (LIFO)** principle. Imagine a stack of plates; you add a new plate to the top and remove the topmost plate.  
* **Queue:** Follows the **First-In, First-Out (FIFO)** principle, like a line of people. The first person in line is the first to be served.

### **Key Operations & Complexity**

Both stacks and queues support their primary operations in **O(1)** time.

| Data Structure | Add Operation | Remove Operation |
| :---- | :---- | :---- |
| **Stack** | push (add to top) | pop (remove from top) |
| **Queue** | enqueue (add to back) | dequeue (remove from front) |

Other common operations include peek or top (viewing the next element) and checking if the structure is empty.

### **Real-World Applications**

**Stack:**

* **Function Call Management:** The call stack in programming languages manages active function calls.  
* **Undo/Redo Functionality:** Actions are pushed onto a stack to be easily undone.  
* **Expression Evaluation:** Used to convert infix expressions to postfix and evaluate them.  
* **Backtracking Algorithms:** The implicit stack of recursion is central to algorithms like Depth-First Search (DFS).

**Queue:**

* **Task Scheduling:** Operating systems use queues to manage processes waiting for the CPU.  
* **Buffering:** Used in network communications to handle data streams.  
* **Breadth-First Search (BFS):** The BFS algorithm uses a queue to explore graph nodes level by level.  
* **Resource Management:** Any "first-come, first-served" system, like a printer queue.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Data Structure |
| :---- | :---- | :---- | :---- |
| Valid Parentheses | LeetCode | [Link](https://leetcode.com/problems/valid-parentheses/) | Stack |
| Min Stack | LeetCode | [Link](https://leetcode.com/problems/min-stack/) | Stack |
| Implement Queue using Stacks | LeetCode | [Link](https://leetcode.com/problems/implement-queue-using-stacks/) | Stack & Queue |
| Number of Islands | LeetCode | [Link](https://leetcode.com/problems/number-of-islands/) | Queue (for BFS) |
| Daily Temperatures | LeetCode | [Link](https://leetcode.com/problems/daily-temperatures/) | Monotonic Stack |
| Sliding Window Maximum | LeetCode | [Link](https://leetcode.com/problems/sliding-window-maximum/) | Deque (Double-ended Queue) |
| Evaluate Reverse Polish Notation | LeetCode | [Link](https://leetcode.com/problems/evaluate-reverse-polish-notation/) | Stack |
| Next Greater Element I | LeetCode | [Link](https://leetcode.com/problems/next-greater-element-i/) | Monotonic Stack |
| Asteroid Collision | LeetCode | [Link](https://leetcode.com/problems/asteroid-collision/) | Stack |
| Implement Stack using Queues | LeetCode | [Link](https://leetcode.com/problems/implement-stack-using-queues/) | Stack & Queue |
| Number of Recent Calls | LeetCode | [Link](https://leetcode.com/problems/number-of-recent-calls/) | Queue |
| Moving Average from Data Stream | LeetCode | [Link](https://leetcode.com/problems/moving-average-from-data-stream/) | Queue |
