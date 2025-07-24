
## **Dynamic Programming: Longest Increasing Subsequence (LIS)**

### **Conceptual Overview**

The Longest Increasing Subsequence (LIS) problem is a classic algorithmic challenge: given a sequence of numbers, find the length of the longest subsequence where all elements are in strictly increasing order. A subsequence is derived by deleting zero or more elements from the original sequence without changing the order of the remaining elements. \[18\]

For example, in the sequence \[19, 20, 21, 22, 23, 24, 25, 26\], the LIS is \[21, 23, 24, 25\], and its length is 4\. \[27\]

### **Core Theory & Patterns**

There are two primary DP-based approaches to solve the LIS problem.

1. **O(N2) DP Approach:**  
   * **State:** dp\[i\] represents the length of the longest increasing subsequence that *ends* at index i. \[28\]  
   * Recurrence Relation: To compute dp\[i\], we look at all previous indices j \< i. If arr\[j\] \< arr\[i\], it means we can potentially extend the increasing subsequence ending at j by including arr\[i\]. We take the maximum length among all such valid j.  
     dp\[i\] \= 1 \+ max(dp\[j\]) for all 0 \<= j \< i where arr\[j\] \< arr\[i\]. \[28\]  
   * **Final Answer:** The length of the LIS for the entire array is the maximum value in the dp array.  
2. **O(NlogN) Optimized Approach:**  
   * **Intuition:** This highly efficient approach maintains an auxiliary array, tails, which stores the smallest tail element of all increasing subsequences of a given length. This tails array will always be sorted, enabling the use of binary search. \[26\]  
   * **Algorithm:** Iterate through the input array. For each number num:  
     1. If num is greater than the last element in tails, append num to tails. This extends the LIS.  
     2. Otherwise, find the smallest element in tails that is greater than or equal to num and replace it with num. This is done efficiently using binary search (lower\_bound). This step creates a potential for a longer LIS in the future with a smaller tail. \[29\]  
   * **Final Answer:** The length of the tails array at the end is the length of the LIS.

### **Implementation Templates (O(N log N) Approach)**

C++

\#**include** \<iostream\>  
\#**include** \<vector\>  
\#**include** \<algorithm\>

int lengthOfLIS(const std::vector\<int\>& nums) {  
    if (nums.empty()) {  
        return 0;  
    }  
    std::vector\<int\> tails;  
    for (int num : nums) {  
        auto it \= std::lower\_bound(tails.begin(), tails.end(), num);  
        if (it \== tails.end()) {  
            tails.push\_back(num);  
        } else {  
            \*it \= num;  
        }  
    }  
    return tails.size();  
}

### **Real-World Applications**

* **Bioinformatics:** Used in analyzing DNA sequences to find patterns of increasing gene expression levels or other ordered phenomena.  
* **Data Analysis & Finance:** Identifying the longest period of monotonic increase in a time-series dataset, such as stock prices or sales figures.  
* **Patience Sorting:** The O(NlogN) algorithm is directly related to the card game Patience.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Longest Increasing Subsequence | LeetCode | [Link](https://leetcode.com/problems/longest-increasing-subsequence/) | Classic LIS (O(N2) and O(NlogN)) \[30\] |
| Russian Doll Envelopes | LeetCode | [Link](https://leetcode.com/problems/russian-doll-envelopes/) | LIS on 2D data |
| Maximum Sum Increasing Subsequence | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/maximum-sum-increasing-subsequence-dp-14/) | LIS variant (sum instead of length) |
| Number of Longest Increasing Subsequences | LeetCode | [Link](https://leetcode.com/problems/number-of-longest-increasing-subsequence/) | LIS variant (counting paths) |
| LIS | AtCoder | [Link](https://atcoder.jp/contests/dp/tasks/dp_q) | LIS with Segment Tree |
| Longest Increasing Subsequence II | LeetCode | [Link](https://leetcode.com/problems/longest-increasing-subsequence-ii/) | LIS with constraints \[31\] |
| Minimum Number of Removals to Make Mountain Array | LeetCode | [Link](https://leetcode.com/problems/minimum-number-of-removals-to-make-mountain-array/) | LIS \+ LDS (Longest Decreasing Subsequence) |
| Building Bridges | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/dynamic-programming-building-bridges/) | LIS on pairs |
| Box Stacking Problem | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/box-stacking-problem-dp-22/) | LIS on 3D data |
| Longest Chain of Pairs | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/dynamic-programming-set-3-longest-increasing-subsequence/) | LIS on pairs |
