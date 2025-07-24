
## **Dynamic Programming: DP on Trees**

### **Conceptual Overview**

DP on Trees is a technique used to solve problems on tree structures by breaking them down into subproblems based on subtrees. \[7\] The key idea is that the solution for a subtree rooted at a node u can be computed from the solutions for the subtrees of its children. This is typically done using a single Depth-First Search (DFS) traversal. \[8\]

### **Core Theory**

* **State:** The DP state is usually defined for each node, dp\[u\], representing the solution for the subproblem on the subtree rooted at u. Often, multiple states are needed per node to handle different conditions (e.g., whether the node u is included in a set or not). \[9\]  
* **Traversal:** A post-order traversal (implemented with DFS) is the natural way to compute the DP states. This ensures that when we are at a node u, the DP values for all of its children have already been computed. \[7\]  
* **Recurrence Relation:** The recurrence for dp\[u\] is formulated by combining the DP values from its children v. For example, dp\[u\] might be the sum or maximum of dp\[v\] over all children v.  
* **Rerooting Technique:** A powerful extension for problems that ask for an answer from the perspective of every node as the root (e.g., "find the maximum path length starting from each node"). This is solved with two DFS traversals. The first computes subtree values from an arbitrary root. The second computes the final answers for each node by considering the "parent" part of the tree. \[10\]

### **Implementation Template (Independent Set)**

Find the size of the maximum independent set of a tree (a set of vertices where no two are adjacent).

C++

\#**include** \<iostream\>  
\#**include** \<vector\>  
\#**include** \<algorithm\>

std::vector\<int\> adj;  
// dp\[u\]: max independent set in subtree u, where u is NOT included  
// dp\[u\]\[1\]: max independent set in subtree u, where u IS included  
int dp\[2\];

void dfs(int u, int parent) {  
    dp\[u\] \= 0;  
    dp\[u\]\[1\] \= 1;

    for (int v : adj\[u\]) {  
        if (v\!= parent) {  
            dfs(v, u);  
            // If u is NOT included, we can either include or not include v  
            dp\[u\] \+= std::max(dp\[v\], dp\[v\]\[1\]);  
            // If u IS included, we CANNOT include v  
            dp\[u\]\[1\] \+= dp\[v\];  
        }  
    }  
}

int main() {  
    int n;  
    std::cin \>\> n;  
    for (int i \= 0; i \< n \- 1; \++i) {  
        int u, v;  
        std::cin \>\> u \>\> v;  
        adj\[u\].push\_back(v);  
        adj\[v\].push\_back(u);  
    }

    dfs(1, 0); // Assuming 1 is the root and has no parent (0)

    std::cout \<\< std::max(dp\[1\], dp\[1\]\[1\]) \<\< std::endl;

    return 0;  
}

### **Real-World Applications**

* **Network Optimization:** Finding the optimal placement of resources (e.g., servers, fire stations) in a hierarchical network to minimize latency or maximize coverage.  
* **Bioinformatics:** Analyzing phylogenetic trees to find evolutionary relationships or properties.  
* **Computer Graphics:** Calculating properties of hierarchical scene graphs.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Independent Set | AtCoder | [Link](https://atcoder.jp/contests/dp/tasks/dp_p) | Classic DP on Trees \[9\] |
| Barn Painting | USACO | [Link](https://usaco.guide/problems/usaco-766-barn-painting/solution) | DP with constraints \[9\] |
| Distance in Tree | Codeforces | [Link](https://usaco.guide/problems/cf-161d-distance-in-tree/solution) | Counting paths of length K \[9\] |
| Subtree | AtCoder | [Link](https://atcoder.jp/contests/dp/tasks/dp_v) | Rerooting Technique \[10\] |
| Tree Painting | Codeforces | [Link](https://usaco.guide/problems/cf-1187e-tree-painting/solution) | Rerooting Technique \[10\] |
| Diameter of a Binary Tree | LeetCode | [Link](https://leetcode.com/problems/diameter-of-binary-tree/) | Longest Path |
| Binary Tree Maximum Path Sum | LeetCode | [Link](https://leetcode.com/problems/binary-tree-maximum-path-sum/) | Max Path Sum |
| House Robber III | LeetCode | [Link](https://leetcode.com/problems/house-robber-iii/) | Independent Set |
| Sum of Distances in Tree | LeetCode | [Link](https://leetcode.com/problems/sum-of-distances-in-tree/) | Rerooting Technique |
| F. Leaf Sets | Codeforces | [Link](https://codeforces.com/problemset/problem/1188/C) | DP on Trees |
| C. Tree Matching | AtCoder | [Link](https://atcoder.jp/contests/abc222/tasks/abc222_c) | Maximum Matching |
| P. Independent Set | AtCoder | [Link](https://atcoder.jp/contests/dp/tasks/dp_p) | Independent Set |
