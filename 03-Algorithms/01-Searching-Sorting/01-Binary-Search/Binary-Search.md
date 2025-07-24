
## **Algorithm: Binary Search**

### **Conceptual Overview**

Binary search is a highly efficient searching algorithm used to find an element within a **sorted** array or sequence. It works by repeatedly dividing the search interval in half. If the value of the search key is less than the item in the middle of the interval, the search is narrowed to the lower half; otherwise, it's narrowed to the upper half. This process continues until the value is found or the interval is empty.

### **Binary Search on the Answer**

A powerful application of binary search in competitive programming is "Binary Search on the Answer." This technique is used when a problem asks for the minimum or maximum value of some variable that satisfies a certain condition. If we can determine for a given value x whether it's possible to achieve a solution with that value (or better), and this property is monotonic (i.e., if x works, any value better than x also works), we can binary search for the optimal value of x.

### **Implementation Template (C++)**

Here are robust templates for finding the first true (lower bound) and last true (upper bound) in a monotonic boolean function, which are common patterns in competitive programming.

C++

\#**include** \<iostream\>  
\#**include** \<vector\>  
\#**include** \<functional\>

// Finds the first value 'x' in \[lo, hi\] for which f(x) is true.  
// If no such value exists, returns hi \+ 1\.  
// Assumes f is monotonic: if f(x) is true, f(y) is true for all y \> x.  
int first\_true(int lo, int hi, std::function\<bool(int)\> f) {  
    int ans \= hi \+ 1;  
    while (lo \<= hi) {  
        int mid \= lo \+ (hi \- lo) / 2;  
        if (f(mid)) {  
            ans \= mid;  
            hi \= mid \- 1;  
        } else {  
            lo \= mid \+ 1;  
        }  
    }  
    return ans;  
}

// Finds the last value 'x' in \[lo, hi\] for which f(x) is true.  
// If no such value exists, returns lo \- 1\.  
// Assumes f is monotonic: if f(x) is true, f(y) is true for all y \< x.  
int last\_true(int lo, int hi, std::function\<bool(int)\> f) {  
    int ans \= lo \- 1;  
    while (lo \<= hi) {  
        int mid \= lo \+ (hi \- lo) / 2;  
        if (f(mid)) {  
            ans \= mid;  
            lo \= mid \+ 1;  
        } else {  
            hi \= mid \- 1;  
        }  
    }  
    return ans;  
}

### **Complexity Analysis**

* **Time Complexity:** O(logN), where N is the number of elements in the search space. Each step reduces the search space by half.  
* **Space Complexity:** O(1) for the iterative version.

### **Real-World Applications**

* **Searching in Databases:** Used to quickly locate records in sorted database indexes.  
* **Debugging:** The git bisect command uses binary search on the commit history to efficiently find the commit that introduced a bug.  
* **Root Finding:** Can be used to find the root of a monotonic function within a certain precision.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Binary Search | LeetCode | [Link](https://leetcode.com/problems/binary-search/) | Basic Implementation |
| Search in Rotated Sorted Array | LeetCode | [Link](https://leetcode.com/problems/search-in-rotated-sorted-array/) | Modified Binary Search |
| Find Minimum in Rotated Sorted Array | LeetCode | [Link](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) | Modified Binary Search |
| Aggressive cows | SPOJ | [Link](https://www.spoj.com/problems/AGGRCOW/) | Binary Search on Answer |
| EKO | SPOJ | [Link](https://www.spoj.com/problems/EKO/) | Binary Search on Answer |
| Capacity To Ship Packages Within D Days | LeetCode | [Link](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/) | Binary Search on Answer |
| Koko Eating Bananas | LeetCode | [Link](https://leetcode.com/problems/koko-eating-bananas/) | Binary Search on Answer |
| Find First and Last Position of Element | LeetCode | [Link](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) | Lower/Upper Bound |
| Median of Two Sorted Arrays | LeetCode | [Link](https://leetcode.com/problems/median-of-two-sorted-arrays/) | Advanced Binary Search |
| Search a 2D Matrix | LeetCode | [Link](https://leetcode.com/problems/search-a-2d-matrix/) | Binary Search on 2D Array |
| Find Peak Element | LeetCode | [Link](https://leetcode.com/problems/find-peak-element/) | Binary Search on Property |
| Square root of an integer | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/square-root-of-an-integer/) | Binary Search on Answer |
| Allocate Minimum Number of Pages | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/allocate-minimum-number-pages/) | Binary Search on Answer |
| The Painter's Partition Problem | InterviewBit | [Link](https://www.interviewbit.com/problems/painters-partition-problem/) | Binary Search on Answer |
| Roti Prata | SPOJ | [Link](https://www.spoj.com/problems/PRATA/) | Binary Search on Answer |
