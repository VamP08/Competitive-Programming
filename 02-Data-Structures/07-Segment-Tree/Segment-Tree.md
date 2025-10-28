
## **Data Structure: Segment Tree**

### **Conceptual Overview**

A **Segment Tree** is a versatile, binary tree-based data structure that stores information about array intervals or segments. It is exceptionally powerful for answering **range queries** (e.g., sum, minimum, maximum, GCD over a range) and handling **point updates** on an array efficiently. The structure is built on the divide and conquer principle: the root represents the entire array \[0...N-1\], and each internal node is split into two child nodes representing the two halves of its interval, until the leaf nodes represent individual array elements.

### **Core Theory**

* **Structure:** A Segment Tree is a complete binary tree. It can be implemented using an array of size approximately 4N to avoid complex pointer management. For a node at index i, its left child is at 2\*i and its right child is at 2\*i \+ 1 (using 1-based indexing for the tree).  
* **Build Operation:** The tree is constructed recursively. The value of an internal node is derived by merging the values of its children. For a range sum query tree, a parent node's value is the sum of its children's values. The build process starts from the leaves and moves up to the root. \[1\]  
* **Query Operation:** A range query for an interval \`\` is answered by recursively traversing the tree. A node's range is compared with the query range:  
  1. **Total Overlap:** If the node's range is completely inside \`\`, return its value.  
  2. **No Overlap:** If the node's range is completely outside \`\`, return an identity value (e.g., 0 for sum, infinity for min).  
  3. **Partial Overlap:** Recursively call on both left and right children and merge their results. \[1\]  
* **Update Operation:** To update an element at a specific index, the tree is traversed down to the corresponding leaf. The leaf's value is updated, and the changes are propagated back up to the root by updating all parent nodes along the path. \[1\]

### **Implementation Template (Range Sum with Point Updates)**

```#include <iostream>
#include <vector>
#include <numeric>

class SegmentTree {
private:
    std::vector<long long> tree;
    std::vector<int> arr;
    int n;

    /**
     * @brief Recursively builds the Segment Tree.
     */
    void build(int node, int start, int end) {
        if (start == end) {
            tree[node] = arr[start];
            return;
        }
        int mid = start + (end - start) / 2;
        build(2 * node, start, mid);
        build(2 * node + 1, mid + 1, end);
        // Operation: Sum
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }

public:
    /**
     * @brief Constructs the Segment Tree.
     */
    SegmentTree(const std::vector<int>& inputArray) {
        arr = inputArray;
        n = arr.size();
        // The tree array size is typically 4*N to safely accommodate all nodes.
        tree.resize(4 * n);
        build(1, 0, n - 1);
    }

    /**
     * @brief Updates the value at a specific index in the array and tree.
     */
    void update(int node, int start, int end, int idx, int val) {
        if (start == end) {
            arr[idx] = val;
            tree[node] = val;
            return;
        }
        int mid = start + (end - start) / 2;
        if (start <= idx && idx <= mid) {
            update(2 * node, start, mid, idx, val);
        } else {
            update(2 * node + 1, mid + 1, end, idx, val);
        }
        // Recalculate the sum for the current node
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }

    /**
     * @brief Queries the sum in the range [l, r].
     */
    long long query(int node, int start, int end, int l, int r) {
        // Range represented by node is completely outside the given range [l, r]
        if (r < start || end < l) {
            return 0; // Return identity element for sum (0)
        }
        // Range represented by node is completely inside the given range [l, r]
        if (l <= start && end <= r) {
            return tree[node];
        }
        // Range represented by node is partially inside
        int mid = start + (end - start) / 2;
        long long p1 = query(2 * node, start, mid, l, r);
        long long p2 = query(2 * node + 1, mid + 1, end, l, r);
        return p1 + p2;
    }
    
    /**
     * @brief Public helper to call update starting from the root (node 1).
     */
    void update(int idx, int val) {
        update(1, 0, n - 1, idx, val);
    }

    /**
     * @brief Public helper to call query starting from the root (node 1).
     */
    long long query(int l, int r) {
        return query(1, 0, n - 1, l, r);
    }
};
```
### **Advanced Variants**

* **Lazy Propagation:** A powerful optimization that allows for efficient **range updates** (e.g., add a value X to all elements in a range \`\`) in O(logN) time. Updates are "lazily" propagated down the tree only when necessary. \[2\]  
* **Persistent Segment Tree:** A version that allows you to query previous states of the array. Each update creates a new version of the tree with minimal changes. \[2\]  
* **2D Segment Tree:** Can be used to perform range queries on a 2D matrix, typically with a complexity of O(log2N).

### **Real-World Applications**

* **Computational Geometry:** Used for problems involving geometric range searching. \[3\]  
* **Real-time Data Analysis:** Answering range-based statistical queries (like sum or average) on large, frequently updated datasets. \[3\]  
* **Image Processing:** Used to divide an image into segments based on attributes like color or texture. \[3\]  
* **Geographic Information Systems (GIS):** Finding data points within a specific rectangular region.

### **Complexity Analysis**

| Operation | Big-O | Notes |
| :---- | :---- | :---- |
| Build | O(N) | Constructs the entire tree from the initial array. \[1\] |
| Range Query | O(logN) | Answers a query over a given range. |
| Point Update | O(logN) | Updates a single element and propagates the change. \[1\] |
| Space | O(N) | The tree requires about 4N nodes in its array-based implementation. |

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Range Sum Query \- Mutable | LeetCode | [Link](https://leetcode.com/problems/range-sum-query-mutable/) | Point Update, Range Sum |
| Range Minimum Query | SPOJ | [Link](https://www.spoj.com/problems/RMQSQ/) | Range Minimum |
| Horrible Queries | SPOJ | [Link](https://www.spoj.com/problems/HORRIBLE/) | Range Update, Range Sum (Lazy Propagation) |
| Xenia and Bit Operations | Codeforces | [Link](https://codeforces.com/problemset/problem/339/D) | Point Update, Custom Merge Operation |
| K-query | SPOJ | [Link](https://www.spoj.com/problems/KQUERY/) | Offline Processing / Merge Sort Tree |
| Range Sum Query 2D \- Mutable | LeetCode | [Link](https://leetcode.com/problems/range-sum-query-2d-mutable/) | 2D Segment Tree / Fenwick Tree |
| Count of Smaller Numbers After Self | LeetCode | [Link](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) | Segment Tree / Fenwick Tree |
| Falling Squares | LeetCode | [Link](https://leetcode.com/problems/falling-squares/) | Range Update, Range Max (Lazy Propagation) |
| My Calendar III | LeetCode | [Link](https://leetcode.com/problems/my-calendar-iii/) | Range Update, Range Max (Lazy Propagation) |
| Dynamic Range Minimum Queries | CSES | [Link](https://cses.fi/problemset/task/1649) | Point Update, Range Min |
| Hotel Queries | CSES | [Link](https://cses.fi/problemset/task/1141) | Range Max, Search on Segment Tree |
| Range Updates and Sums | CSES | [Link](https://cses.fi/problemset/task/1735) | Range Update, Range Sum (Lazy Propagation) |
