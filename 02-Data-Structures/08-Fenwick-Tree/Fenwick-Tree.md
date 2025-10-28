
## **Data Structure: Fenwick Tree (Binary Indexed Tree)**

### **Conceptual Overview**

A **Fenwick Tree**, also known as a **Binary Indexed Tree (BIT)**, is a data structure that provides efficient methods for calculating prefix sums and performing point updates on an array. It is a powerful and often simpler alternative to a Segment Tree for problems involving range sum queries and point updates.

The core idea is that each index in the BIT stores the sum of a specific, non-contiguous range of elements from the original array. The size and start of this range are determined by the value of the least significant bit of the index. This clever structure allows for both querying prefix sums and updating elements in logarithmic time.

### **Fenwick Tree vs. Segment Tree**

* **Simplicity:** Fenwick Trees are significantly easier and faster to code than Segment Trees.  
* **Space:** A Fenwick Tree requires only O(N) space, whereas a Segment Tree typically requires O(4N) space.  
* **Functionality:** Segment Trees are more versatile and can handle a wider range of queries (e.g., range minimum/maximum), while Fenwick Trees are primarily optimized for sum-based (or other invertible associative operations) queries. \[4\]

### **Core Theory**

* **Structure:** A Fenwick Tree is implemented as a single array, typically 1-indexed for easier bit manipulation logic.  
* **Key Operation (idx & \-idx):** This bitwise trick isolates the least significant bit (LSB) of an index idx. This value is crucial for navigation.  
* **Query Operation (query(idx)):** To find the prefix sum up to idx, you start at idx and repeatedly subtract the LSB from the index (idx \-= idx & \-idx) until it becomes 0, summing up the values at each step.  
* **Update Operation (update(idx, val)):** To add val to the element at idx, you start at idx and repeatedly add the LSB to the index (idx \+= idx & \-idx) until you go past the array bounds, adding val at each step.  
* **Range Sum:** A sum over a range \`\` can be calculated as query(R) \- query(L-1).

### **Implementation Template (Prefix Sum with Point Updates)**

```#include <iostream>
#include <vector>

class FenwickTree {
private:
    // Binary Indexed Tree array, 1-indexed for implementation ease
    std::vector<long long> bit;
    // Size of the original array (0-indexed size, used for boundary check)
    int n;

public:
    /**
     * @brief Initializes a Fenwick Tree for an array of a given size.
     */
    FenwickTree(int size) {
        n = size;
        // The BIT array is 1-indexed, so it needs size n + 1
        bit.assign(n + 1, 0);
    }

    /**
     * @brief Adds a delta value to the element at index idx (0-based).
     * @param idx The 0-based index to update.
     * @param delta The value to add to the element.
     */
    void update(int idx, int delta) {
        idx++; // Convert to 1-based index
        while (idx <= n) {
            bit[idx] += delta;
            // Move to the next relevant index (parent in the implicit tree)
            idx += idx & -idx;
        }
    }

    /**
     * @brief Queries the prefix sum from index 0 up to idx (inclusive, 0-based).
     * @param idx The 0-based index for the upper bound of the prefix sum.
     * @return The prefix sum sum(arr[0]...arr[idx]).
     */
    long long query(int idx) {
        idx++; // Convert to 1-based index
        long long sum = 0;
        while (idx > 0) {
            sum += bit[idx];
            // Move to the parent index (by removing the rightmost set bit)
            idx -= idx & -idx;
        }
        return sum;
    }

    /**
     * @brief Queries the sum of the elements in the range [l, r] (inclusive, 0-based).
     * @param l The 0-based starting index.
     * @param r The 0-based ending index.
     * @return The range sum sum(arr[l]...arr[r]).
     */
    long long range_query(int l, int r) {
        if (l > r) return 0;
        // Range sum is calculated as PrefixSum(r) - PrefixSum(l-1)
        return query(r) - query(l - 1);
    }
};
```
### **Advanced Variants**

* **Range Updates and Point Queries:** A Fenwick Tree can be adapted to handle range updates by updating two indices for each range.  
* **Range Updates and Range Queries:** This requires using two Fenwick Trees to manage the updates and queries.  
* **2D Fenwick Tree:** Can be used for range sum/point update queries on a 2D matrix. \[2\]

### **Real-World Applications**

* **Frequency Counting:** Can be used to maintain counts of elements in a dynamic set. \[5\]  
* **Offline Queries:** Efficiently process queries that are known in advance. \[5\]  
* **Inversion Count:** A classic problem of counting pairs (i, j) such that i \< j and arr\[i\] \> arr\[j\].

### **Complexity Analysis**

| Operation | Big-O | Notes |
| :---- | :---- | :---- |
| Build | O(NlogN) | Can be done by performing N updates. An O(N) build is also possible. \[4\] |
| Prefix Sum Query | O(logN) | Traverses up the tree structure. |
| Point Update | O(logN) | Traverses up the tree structure. |
| Space | O(N) | Requires a single array of size N+1. |

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Range Sum Query \- Mutable | LeetCode | [Link](https://leetcode.com/problems/range-sum-query-mutable/) | Point Update, Range Sum |
| Count of Smaller Numbers After Self | LeetCode | [Link](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) | Coordinate Compression, Inversions |
| Inversion Count | SPOJ | [Link](https://www.spoj.com/problems/INVCNT/) | Counting Inversions |
| D-query | SPOJ | [Link](https://www.spoj.com/problems/DQUERY/) | Offline Processing |
| Range Sum Queries II | CSES | [Link](https://cses.fi/problemset/task/1650) | Range Update, Point Query |
| Range Update Queries | CSES | [Link](https://cses.fi/problemset/task/1651) | Range Update, Point Query |
| Prefix Sum Queries | CSES | [Link](https://cses.fi/problemset/task/2166) | Range Max on Fenwick Tree |
| Subarray Sums II | CSES | [Link](https://cses.fi/problemset/task/1661) | Coordinate Compression |
| Salary Queries | CSES | [Link](https://cses.fi/problemset/task/1144) | Coordinate Compression |
| New Year and Counting Orders | Codeforces | [Link](https://codeforces.com/problemset/problem/493/D) | Fenwick Tree \+ Combinatorics |
