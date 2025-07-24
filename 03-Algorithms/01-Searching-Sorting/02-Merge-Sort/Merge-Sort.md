
## **Algorithm: Merge Sort**

### **Conceptual Overview**

Merge Sort is an efficient, comparison-based sorting algorithm that follows the **Divide and Conquer** paradigm. The algorithm works as follows: \[3\]

1. **Divide:** The unsorted array is divided into two halves.  
2. **Conquer:** Each half is recursively sorted by calling Merge Sort on it. This continues until the subarrays have only one element (which is trivially sorted).  
3. **Combine:** The two sorted halves are merged back together to form a single sorted array.

The key to the algorithm is the merge() function, which efficiently merges two sorted subarrays into one in linear time. \[4\]

### **Implementation Template (C++)**

This implementation shows the classic recursive structure of Merge Sort.

C++

\#**include** \<iostream\>  
\#**include** \<vector\>

// Merges two subarrays of arr.  
// First subarray is arr\[l..m\]  
// Second subarray is arr\[m+1..r\]  
void merge(std::vector\<int\>& arr, int l, int m, int r) {  
    int n1 \= m \- l \+ 1;  
    int n2 \= r \- m;

    // Create temp arrays  
    std::vector\<int\> L(n1), R(n2);

    // Copy data to temp arrays L and R  
    for (int i \= 0; i \< n1; i++)  
        L\[i\] \= arr\[l \+ i\];  
    for (int j \= 0; j \< n2; j++)  
        R\[j\] \= arr\[m \+ 1 \+ j\];

    // Merge the temp arrays back into arr\[l..r\]  
    int i \= 0; // Initial index of first subarray  
    int j \= 0; // Initial index of second subarray  
    int k \= l; // Initial index of merged subarray  
    while (i \< n1 && j \< n2) {  
        if (L\[i\] \<= R\[j\]) {  
            arr\[k\] \= L\[i\];  
            i++;  
        } else {  
            arr\[k\] \= R\[j\];  
            j++;  
        }  
        k++;  
    }

    // Copy the remaining elements of L, if there are any  
    while (i \< n1) {  
        arr\[k\] \= L\[i\];  
        i++;  
        k++;  
    }

    // Copy the remaining elements of R, if there are any  
    while (j \< n2) {  
        arr\[k\] \= R\[j\];  
        j++;  
        k++;  
    }  
}

// l is for left index and r is right index of the  
// sub-array of arr to be sorted  
void mergeSort(std::vector\<int\>& arr, int l, int r) {  
    if (l \>= r) {  
        return;  
    }  
    int m \= l \+ (r \- l) / 2;  
    mergeSort(arr, l, m);  
    mergeSort(arr, m \+ 1, r);  
    merge(arr, l, m, r);  
}

### **Complexity Analysis**

* **Time Complexity:** O(NlogN) in all cases (worst, average, and best). The dividing step takes logN levels of recursion, and the merging step takes O(N) work at each level. \[5\]  
* **Space Complexity:** O(N), as it requires an auxiliary array of the same size as the input to perform the merge operation. \[6\]

### **Properties**

* **Stable:** Merge Sort is a stable sorting algorithm, meaning that the relative order of equal elements is preserved. \[7\]  
* **External Sorting:** It is well-suited for sorting large datasets that do not fit into memory (external sorting) because it works with sequential data access.

### **Real-World Applications**

* **External Sorting:** Its ability to work on data that doesn't fit in RAM makes it valuable for sorting massive files.  
* **Inversion Count Problem:** Merge Sort can be modified to count the number of inversions in an array in O(NlogN) time.  
* **Foundation for other algorithms:** The merge step is a common subroutine in other algorithms, such as external sorting and parallel sorting.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Sort an Array | LeetCode | [Link](https://leetcode.com/problems/sort-an-array/) | Basic Sorting |
| Merge Sorted Array | LeetCode | [Link](https://leetcode.com/problems/merge-sorted-array/) | Merge Step |
| Count of Smaller Numbers After Self | LeetCode | [Link](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) | Inversion Count |
| Inversion Count | SPOJ | [Link](https://www.spoj.com/problems/INVCNT/) | Inversion Count |
| Reverse Pairs | LeetCode | [Link](https://leetcode.com/problems/reverse-pairs/) | Modified Merge Sort |
| Sort a Linked List | LeetCode | [Link](https://leetcode.com/problems/sort-list/) | Merge Sort on Linked List |
| Count Inversions | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/counting-inversions/) | Inversion Count |
| K-th Smallest Prime Fraction | LeetCode | [Link](https://leetcode.com/problems/k-th-smallest-prime-fraction/) | Sorting, Binary Search |
| The Skyline Problem | LeetCode | [Link](https://leetcode.com/problems/the-skyline-problem/) | Divide and Conquer, Merge |
| Count of Range Sum | LeetCode | [Link](https://leetcode.com/problems/count-of-range-sum/) | Divide and Conquer, Merge Sort |
