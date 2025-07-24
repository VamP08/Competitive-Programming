
## **Dynamic Programming (DP)**

### **Conceptual Overview**

Dynamic Programming (DP) is a powerful algorithmic technique for solving optimization, counting, or decision problems by breaking them down into simpler, overlapping subproblems. The core idea is to solve each subproblem only once and store its result in a cache or table, avoiding the redundant computations that often plague naive recursive solutions. \[8\]

A problem is a good candidate for DP if it exhibits two key properties:

1. **Optimal Substructure:** The optimal solution to the main problem can be constructed from the optimal solutions of its subproblems.  
2. **Overlapping Subproblems:** A recursive approach solves the same subproblems multiple times. DP optimizes this by storing the results.

### **Implementation Approaches: Memoization vs. Tabulation**

There are two primary ways to implement a DP solution.

1. Memoization (Top-Down Approach)  
   This approach follows the natural recursive structure of the problem. You write a standard recursive function and enhance it with a cache (e.g., a map or an array) to store the results of subproblems. \[9\]  
   * **Pros:** Often more intuitive to write. It only computes the states that are actually required. \[10\]  
   * **Cons:** Can be slightly slower due to recursion overhead and may lead to a stack overflow error. \[11\]  
2. Tabulation (Bottom-Up Approach)  
   This is an iterative approach where you build a DP table from the ground up, starting with base cases and iteratively computing solutions for larger subproblems. \[12\]  
   * **Pros:** Generally faster and avoids stack overflow. Can often be space-optimized. \[10\]  
   * **Cons:** Can be less intuitive to formulate the correct order of filling the table.

### **Implementation Templates (Fibonacci Example)**

C++

\#**include** \<iostream\>  
\#**include** \<vector\>  
\#**include** \<unordered\_map\>

// 1\. Memoization (Top-Down) Approach  
std::unordered\_map\<int, int\> memo;  
int fib\_memo(int n) {  
    if (n \<= 1) return n;  
    if (memo.count(n)) return memo\[n\];  
    return memo\[n\] \= fib\_memo(n \- 1) \+ fib\_memo(n \- 2);  
}

// 2\. Tabulation (Bottom-Up) Approach  
int fib\_tab(int n) {  
    if (n \<= 1) return n;  
    std::vector\<int\> dp(n \+ 1);  
    dp \= 0;  
    dp\[13\] \= 1;  
    for (int i \= 2; i \<= n; \++i) {  
        dp\[i\] \= dp\[i \- 1\] \+ dp\[i \- 2\];  
    }  
    return dp\[n\];  
}

// 2b. Space-Optimized Tabulation  
int fib\_tab\_optimized(int n) {  
    if (n \<= 1) return n;  
    int prev2 \= 0, prev1 \= 1;  
    for (int i \= 2; i \<= n; \++i) {  
        int current \= prev1 \+ prev2;  
        prev2 \= prev1;  
        prev1 \= current;  
    }  
    return prev1;  
}

### **Common DP Patterns**

Recognizing these patterns is key to mastering DP. Each has a dedicated guide in this repository. \[14, 15\]

* **DP on Grids:** Pathfinding, counting, or optimization problems on a 2D matrix.  
* **Knapsack:** Selecting a subset of items to maximize value within a capacity constraint.  
* **Longest Increasing Subsequence (LIS):** Finding the longest subsequence of elements in increasing order.  
* **Longest Common Subsequence (LCS):** A fundamental pattern for problems involving two sequences.  
* **DP on Subsets (Bitmask DP):** For problems with a small number of items (N≤22).  
* **DP on Trees:** Solving problems where the state is defined for nodes of a tree.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Sub-topic/Pattern |
| :---- | :---- | :---- | :---- |
| Climbing Stairs | LeetCode | [Link](https://leetcode.com/problems/climbing-stairs/) | Intro, Fibonacci-style \[15\] |
| Min Cost Climbing Stairs | LeetCode | [Link](https://leetcode.com/problems/min-cost-climbing-stairs/) | Min/Max Path \[15\] |
| Coin Change | LeetCode | [Link](https://leetcode.com/problems/coin-change/) | Unbounded Knapsack \[15\] |
| Knapsack 1 | AtCoder | [Link](https://atcoder.jp/contests/dp/tasks/dp_d) | 0/1 Knapsack \[16\] |
| Longest Increasing Subsequence | LeetCode | [Link](https://leetcode.com/problems/longest-increasing-subsequence/) | LIS (O(N2) and O(NlogN)) |
| Longest Common Subsequence | LeetCode | [Link](https://leetcode.com/problems/longest-common-subsequence/) | LCS / Two Sequences \[15\] |
| Unique Paths | LeetCode | [Link](https://leetcode.com/problems/unique-paths/) | DP on Grids \[15\] |
| Minimum Path Sum | LeetCode | [Link](https://leetcode.com/problems/minimum-path-sum/) | DP on Grids \[15\] |
| Edit Distance | LeetCode | [Link](https://leetcode.com/problems/edit-distance/) | Two Sequences \[15\] |
| Word Break | LeetCode | [Link](https://leetcode.com/problems/word-break/) | 1D DP on String |
| House Robber | LeetCode | [Link](https://leetcode.com/problems/house-robber/) | 1D DP |
| Partition Equal Subset Sum | LeetCode | [Link](https://leetcode.com/problems/partition-equal-subset-sum/) | 0/1 Knapsack |
| Independent Set | AtCoder | [Link](https://atcoder.jp/contests/dp/tasks/dp_p) | DP on Trees \[16\] |
| Partition to K Equal Sum Subsets | LeetCode | [Link](https://leetcode.com/problems/partition-to-k-equal-sum-subsets/) | DP on Subsets \[17\] |
| Vacation | Codeforces | [Link](https://codeforces.com/problemset/problem/698/A) | State Machine DP \[8\] |
