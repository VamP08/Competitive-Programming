
## **Advanced Techniques: Square Root Decomposition**

### **Conceptual Overview**

Square Root Decomposition is a technique for processing array queries that provides a trade-off between query time and update time. It's often used when more advanced data structures like Segment Trees or Fenwick Trees are too complex to implement or when the operations are not easily mergeable.

The core idea is to divide the input array of size N into N​ blocks, each of size N​.

### **Core Theory**

* **Preprocessing:** Some information is precomputed for each block. For example, for range sum queries, the sum of all elements in each block is stored. This step typically takes O(N) time.  
* **Querying:** A range query on \`\` is handled by splitting it into three parts:  
  1. The elements in the partial block at the beginning (from L to the end of its block).  
  2. The full blocks that are completely contained within \`\`.  
  3. The elements in the partial block at the end (from the start of its block to R).  
     The answer is computed by iterating through the elements in the partial blocks and using the precomputed values for the full blocks. This takes O(N​) time.  
* **Updating:** A point update on an element at index i requires updating the value at A\[i\] and then recomputing the value for the block that i belongs to. This takes O(1) time for the element and O(1) for the block's precomputed value (if the operation is simple like sum).

### **Mo's Algorithm**

A popular application of Square Root Decomposition is Mo's Algorithm, an offline algorithm for range queries. It processes queries by sorting them in a specific order based on the blocks their start indices fall into, minimizing total pointer movement to achieve a complexity of O((N+Q)N​). \[3\]

### **Implementation Template (Range Sum with Point Updates)**

C++

\#**include** \<iostream\>  
\#**include** \<vector\>  
\#**include** \<cmath\>  
\#**include** \<numeric\>

const int MAXN \= 100005;  
const int SQR\_SIZE \= 320;

long long arr\[MAXN\];  
long long blocks;  
int n;  
int block\_size;

void update(int idx, int val) {  
    int block\_idx \= idx / block\_size;  
    blocks\[block\_idx\] \-= arr\[idx\];  
    blocks\[block\_idx\] \+= val;  
    arr\[idx\] \= val;  
}

long long query(int l, int r) {  
    long long sum \= 0;  
    int start\_block \= l / block\_size;  
    int end\_block \= r / block\_size;

    if (start\_block \== end\_block) {  
        for (int i \= l; i \<= r; \++i) {  
            sum \+= arr\[i\];  
        }  
    } else {  
        for (int i \= l; i \< (start\_block \+ 1) \* block\_size; \++i) {  
            sum \+= arr\[i\];  
        }  
        for (int i \= start\_block \+ 1; i \< end\_block; \++i) {  
            sum \+= blocks\[i\];  
        }  
        for (int i \= end\_block \* block\_size; i \<= r; \++i) {  
            sum \+= arr\[i\];  
        }  
    }  
    return sum;  
}

void preprocess() {  
    block\_size \= sqrt(n);  
    for (int i \= 0; i \< n; \++i) {  
        blocks\[i / block\_size\] \+= arr\[i\];  
    }  
}

### **Complexity Analysis**

* **Query Time:** O(N​)  
* **Update Time:** O(1) for point updates, O(N​) for range updates.  
* **Space Complexity:** O(N​) for storing the precomputed block data.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Range Sum Queries | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/sqrt-square-root-decomposition-technique-set-1-introduction/) | Range Sum, Point Update |
| D-query | SPOJ | [Link](https://www.spoj.com/problems/DQUERY/) | Mo's Algorithm |
| Powerful array | Codeforces | [Link](https://codeforces.com/problemset/problem/86/D) | Mo's Algorithm |
| Range Sum Queries II | CSES | [Link](https://cses.fi/problemset/task/1648) | Point Update, Range Sum |
| Little Elephant and Array | Codeforces | [Link](https://codeforces.com/problemset/problem/220/B) | Mo's Algorithm |
| XOR and Favorite Number | Codeforces | [Link](https://codeforces.com/problemset/problem/617/E) | Mo's Algorithm |
| Range Update Queries | CSES | [Link](https://cses.fi/problemset/task/1651) | Sqrt Decomposition with Lazy Updates |
| Chef and Array and K | CodeChef | [Link](https://www.codechef.com/problems/ARRAYS) | Sqrt Decomposition |
| Give a rectangular area | SPOJ | [Link](https://www.spoj.com/problems/GIVE/) | 2D Sqrt Decomposition |
| Range Queries and Copies | Codeforces | [Link](https://codeforces.com/problemset/problem/704/B) | Sqrt Decomposition |
