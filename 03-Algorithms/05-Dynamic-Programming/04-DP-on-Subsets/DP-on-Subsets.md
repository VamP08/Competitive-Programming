
## **Dynamic Programming: DP on Subsets (Bitmask DP)**

### **Conceptual Overview**

DP on Subsets, commonly known as Bitmask DP, is a powerful dynamic programming technique used to solve problems where the state can be represented by a subset of a small collection of items. It is typically applicable when the number of items, N, is small (usually N≤22), as the complexity is exponential in N. \[4\]

The core idea is to use an integer's binary representation as a "mask" to represent a subset. Each bit of the integer corresponds to an item; if the i-th bit is set (1), the i-th item is in the subset, and if it's clear (0), it is not. This allows us to iterate through all 2N subsets and define DP states on them. \[4\]

### **Core Theory**

* **State Representation:** The DP state is typically dp\[mask\], which stores the answer to the subproblem for the subset of items represented by mask. For example, dp\[mask\] could be the minimum cost to visit all cities in the subset mask.  
* **Transitions:** Transitions often involve iterating through the elements within a mask or iterating through all submasks of a given mask. A common pattern is to build a solution for a larger set mask from a smaller subset prev\_mask where prev\_mask is mask with one bit turned off.  
* **Iterating Subsets:** You can iterate through all 2N subsets from 0 to 2N−1. To iterate through all elements i in a given mask:  
  C++  
  for (int i \= 0; i \< N; \++i) {  
      if (mask & (1 \<\< i)) {  
          // element i is in the subset  
          // transition from a smaller subproblem, e.g., dp\[mask ^ (1 \<\< i)\]  
      }  
  }

### **Implementation Template (Traveling Salesperson Problem)**

The Traveling Salesperson Problem (TSP) is a classic problem solved with Bitmask DP for small N. \[4\]

C++

\#**include** \<iostream\>  
\#**include** \<vector\>  
\#**include** \<algorithm\>

const int INF \= 1e9;

int tsp(const std::vector\<std::vector\<int\>\>& dist, int n) {  
    // dp\[mask\]\[i\] \= min cost to visit cities in mask, ending at city i  
    std::vector\<std::vector\<int\>\> dp(1 \<\< n, std::vector\<int\>(n, INF));

    // Base case: start at city 0  
    dp\[1\] \= 0;

    for (int mask \= 1; mask \< (1 \<\< n); \++mask) {  
        for (int i \= 0; i \< n; \++i) {  
            // Check if city i is in the current subset  
            if (mask & (1 \<\< i)) {  
                // Try to transition from a previous city j  
                for (int j \= 0; j \< n; \++j) {  
                    if (i\!= j && (mask & (1 \<\< j))) {  
                        int prev\_mask \= mask ^ (1 \<\< i);  
                        if (dp\[prev\_mask\]\[j\]\!= INF) {  
                            dp\[mask\]\[i\] \= std::min(dp\[mask\]\[i\], dp\[prev\_mask\]\[j\] \+ dist\[j\]\[i\]);  
                        }  
                    }  
                }  
            }  
        }  
    }

    // Find the minimum cost to return to city 0 after visiting all cities  
    int min\_cost \= INF;  
    int final\_mask \= (1 \<\< n) \- 1;  
    for (int i \= 1; i \< n; \++i) {  
        if (dp\[final\_mask\]\[i\]\!= INF) {  
            min\_cost \= std::min(min\_cost, dp\[final\_mask\]\[i\] \+ dist\[i\]);  
        }  
    }

    return min\_cost;  
}

### **Real-World Applications**

* **Traveling Salesperson Problem (TSP):** For a small number of cities, Bitmask DP provides an exact solution to this classic NP-hard problem. \[4\]  
* **Optimal Task Assignment:** Assigning a set of tasks to a set of people to minimize cost or maximize efficiency. \[4\]  
* **Resource Allocation:** Finding the optimal allocation of a small number of resources to various projects.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Partition to K Equal Sum Subsets | LeetCode | [Link](https://leetcode.com/problems/partition-to-k-equal-sum-subsets/) | Subset Sum \[5\] |
| Matchsticks to Square | LeetCode | [Link](https://leetcode.com/problems/matchsticks-to-square/) | Subset Sum \[5\] |
| Find Minimum Time to Finish All Jobs | LeetCode | [Link](https://leetcode.com/problems/find-minimum-time-to-finish-all-jobs/) | Optimal Partitioning \[5\] |
| Grouping | AtCoder | [Link](https://atcoder.jp/contests/dp/tasks/dp_u) | DP on Subsets \[6\] |
| Traveling Salesman Problem | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/traveling-salesman-problem-set-1/) | Classic TSP |
| Optimal Account Balancing | LeetCode | [Link](https://leetcode.com/problems/optimal-account-balancing/) | Subset Sum |
| Smallest Sufficient Team | LeetCode | [Link](https://leetcode.com/problems/smallest-sufficient-team/) | Set Cover |
| Maximum Students Taking Exam | LeetCode | [Link](https://leetcode.com/problems/maximum-students-taking-exam/) | DP on Profile/Subsets |
| Number of Ways to Wear Different Hats to Each Other | LeetCode | [Link](https://leetcode.com/problems/number-of-ways-to-wear-different-hats-to-each-other/) | Counting Assignments |
| Visiting Cities | Codeforces | [Link](https://codeforces.com/problemset/problem/103/E) | TSP with a twist |
