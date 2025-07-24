
## **Data Structure: Disjoint Set Union (DSU)**

### **Conceptual Overview**

**Disjoint Set Union (DSU)**, also known as **Union-Find**, is a data structure that tracks a collection of elements partitioned into a number of disjoint (non-overlapping) sets. It is incredibly efficient for problems involving connectivity and grouping, such as determining if two nodes in a graph are in the same connected component.

Each set is represented by a tree, where one element is designated as the "representative" or "root" of the set. \[6\]

### **Core Operations**

DSU has two primary operations:

1. **find(i):** Determines the representative (root) of the set containing element i. This is used to check if two elements belong to the same set.  
2. **union(i, j):** Merges the two sets containing elements i and j into a single set.

### **Optimizations & Complexity**

A naive implementation of DSU can be slow (with tree heights growing linearly). Two key optimizations make it nearly constant time on average for each operation:

1. **Union by Size/Rank:** When merging two sets, always attach the root of the smaller tree to the root of the larger tree. This keeps the trees from becoming too tall and unbalanced.  
2. **Path Compression:** During a find(i) operation, make every node on the path from i to the root point directly to the root. This dramatically flattens the tree structure for all future operations on those nodes. \[6\]

With these optimizations, the time complexity for M operations on N elements is O(M⋅α(N)), where α(N) is the inverse Ackermann function. This function grows so slowly that it is less than 5 for any practical value of N, making the operations effectively amortized constant time.

### **Implementation Template (Union by Size & Path Compression)**

C++

\#**include** \<iostream\>  
\#**include** \<vector\>  
\#**include** \<numeric\>

class DSU {  
private:  
    std::vector\<int\> parent;  
    std::vector\<int\> sz; // Using size for union by size

public:  
    DSU(int n) {  
        parent.resize(n);  
        std::iota(parent.begin(), parent.end(), 0); // Each node is its own parent initially  
        sz.assign(n, 1); // Each component has size 1 initially  
    }

    int find(int i) {  
        if (parent\[i\] \== i) {  
            return i;  
        }  
        // Path compression  
        return parent\[i\] \= find(parent\[i\]);  
    }

    void unite(int i, int j) {  
        int root\_i \= find(i);  
        int root\_j \= find(j);  
        if (root\_i\!= root\_j) {  
            // Union by size  
            if (sz\[root\_i\] \< sz\[root\_j\]) {  
                std::swap(root\_i, root\_j);  
            }  
            parent\[root\_j\] \= root\_i;  
            sz\[root\_i\] \+= sz\[root\_j\];  
        }  
    }  
};

### **Real-World Applications**

* **Network Connectivity:** Determining if two computers in a network are connected.  
* **Kruskal's Algorithm for Minimum Spanning Tree:** DSU is used to efficiently detect if adding an edge would form a cycle.  
* **Image Processing:** Grouping pixels into connected components for image segmentation.  
* **Social Networks:** Finding groups of friends or connected communities.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Number of Connected Components | LeetCode | [Link](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/) | Basic DSU |
| Number of Provinces | LeetCode | [Link](https://leetcode.com/problems/number-of-provinces/) | Basic DSU |
| Redundant Connection | LeetCode | [Link](https://leetcode.com/problems/redundant-connection/) | Cycle Detection |
| Accounts Merge | LeetCode | [Link](https://leetcode.com/problems/accounts-merge/) | DSU on Strings/Indices |
| Road Construction | CSES | [Link](https://cses.fi/problemset/task/1676) | Basic DSU with component count |
| Kruskal (MST): Really Special Subtree | HackerRank | [Link](https://www.hackerrank.com/challenges/kruskalmstrsub/problem) | Kruskal's Algorithm |
| Friends | Codeforces | [Link](https://codeforces.com/problemset/problem/445/B) | DSU with Size |
| Graph Connectivity with Threshold | LeetCode | [Link](https://leetcode.com/problems/graph-connectivity-with-threshold/) | DSU with Number Theory |
| Making A Large Island | LeetCode | [Link](https://leetcode.com/problems/making-a-large-island/) | DSU on Grid |
| City and Flood | HackerEarth | [Link](https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-flood-1/) | Basic DSU |
| Owl Fight | HackerEarth | [Link](https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/owl-fight/) | DSU with properties |
| Friend Circles | LeetCode | [Link](https://leetcode.com/problems/friend-circles/) | Basic DSU |
