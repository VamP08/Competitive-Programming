
## **Dynamic Programming: Knapsack Problem**

### **Conceptual Overview**

The Knapsack Problem is a classic optimization problem in computer science. Given a set of items, each with a weight and a value, the goal is to determine the subset of items to include in a collection (the "knapsack") so that the total weight is less than or equal to a given limit, and the total value is as large as possible.

### **Common Variations**

1. **0/1 Knapsack:** Each item can either be taken or left behind. You cannot take a fractional amount of an item or take an item multiple times. This is the most common variant solved with DP.  
2. **Unbounded Knapsack:** You can take an unlimited number of each item.  
3. **Fractional Knapsack:** You can take fractional parts of items. This version is solvable with a greedy algorithm.

### **0/1 Knapsack DP Solution**

* **State:** dp\[i\]\[w\] represents the maximum value that can be obtained using the first i items with a total weight limit of w.  
* **Recurrence Relation:** For each item i, we have two choices:  
  1. **Don't include item i:** The value is the same as the optimal value for the first i-1 items with the same weight limit: dp\[i-1\]\[w\].  
  2. Include item i (if it fits): The value is value\[i\] plus the optimal value for the first i-1 items with the remaining weight limit: value\[i\] \+ dp\[i-1\]\[w \- weight\[i\]\].  
     The final recurrence is the maximum of these two choices.  
* **Base Cases:** dp\[w\] \= 0 and dp\[i\] \= 0 for all i and w.

### **Implementation Template (0/1 Knapsack \- Space Optimized)**

C++

\#**include** \<iostream\>  
\#**include** \<vector\>  
\#**include** \<algorithm\>

int knapsack(int W, const std::vector\<int\>& wt, const std::vector\<int\>& val, int n) {  
    std::vector\<int\> dp(W \+ 1, 0);

    for (int i \= 0; i \< n; i++) {  
        for (int w \= W; w \>= wt\[i\]; w--) {  
            dp\[w\] \= std::max(dp\[w\], val\[i\] \+ dp\[w \- wt\[i\]\]);  
        }  
    }  
    return dp;  
}

### **Complexity Analysis**

* **Time Complexity:** O(N⋅W), where N is the number of items and W is the knapsack capacity.  
* **Space Complexity:** O(N⋅W), which can be optimized to O(W).

### **Real-World Applications**

* **Resource Allocation:** Deciding which projects to invest in to maximize return given a limited budget.  
* **Cargo Loading:** Choosing which items to load onto a cargo plane to maximize value without exceeding weight limits.  
* **Portfolio Optimization:** Selecting a combination of assets to maximize returns for a given level of risk.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Partition Equal Subset Sum | LeetCode | [Link](https://leetcode.com/problems/partition-equal-subset-sum/) | 0/1 Knapsack |
| Target Sum | LeetCode | [Link](https://leetcode.com/problems/target-sum/) | 0/1 Knapsack |
| Coin Change 2 | LeetCode | [Link](https://leetcode.com/problems/coin-change-2/) | Unbounded Knapsack |
| Knapsack 1 | AtCoder | [Link](https://atcoder.jp/contests/dp/tasks/dp_d) | Classic 0/1 Knapsack |
| Knapsack 2 | AtCoder | [Link](https://atcoder.jp/contests/dp/tasks/dp_e) | Knapsack with large weights |
| Coin Change | LeetCode | [Link](https://leetcode.com/problems/coin-change/) | Unbounded Knapsack (min coins) |
| Combination Sum IV | LeetCode | [Link](https://leetcode.com/problems/combination-sum-iv/) | Unbounded Knapsack (permutations) |
| Last Stone Weight II | LeetCode | [Link](https://leetcode.com/problems/last-stone-weight-ii/) | 0/1 Knapsack |
| 0-1 Knapsack Problem | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/) | Classic 0/1 Knapsack |
| Rod Cutting | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/cutting-a-rod-dp-13/) | Unbounded Knapsack |
