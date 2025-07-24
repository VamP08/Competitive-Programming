
## **Graph Theory: Strongly Connected Components (SCC)**

### **Conceptual Overview**

A **Strongly Connected Component (SCC)** of a directed graph is a maximal subgraph where for any two vertices u and v in the SCC, there is a path from u to v and a path from v to u. In simpler terms, it's a part of the graph where every node can reach every other node within that same part.

### **Key Algorithms**

* **Kosaraju's Algorithm:**  
  * **Approach:** This algorithm performs two DFS traversals.  
    1. First DFS on the original graph to compute finishing times (post-order traversal).  
    2. Second DFS on the transpose of the graph (all edges reversed), processing vertices in decreasing order of their finishing times. Each tree in the resulting DFS forest is an SCC.  
  * **Complexity:** O(V+E).  
* **Tarjan's Algorithm:**  
  * **Approach:** This algorithm finds all SCCs in a single DFS traversal. It maintains discovery times and "low-link" values for each vertex to identify the root of an SCC. A stack is used to track nodes in the current exploration path.  
  * **Complexity:** O(V+E).

### **Implementation Template (Tarjan's Algorithm)**

C++

\#**include** \<iostream\>  
\#**include** \<vector\>  
\#**include** \<stack\>  
\#**include** \<algorithm\>

const int MAXN \= 100001;  
std::vector\<int\> adj\[MAXN\];  
int disc\[MAXN\], low\[MAXN\];  
bool onStack\[MAXN\];  
std::stack\<int\> st;  
int timer \= 0;

void findSCCs(int u) {  
    disc\[u\] \= low\[u\] \= \++timer;  
    st.push(u);  
    onStack\[u\] \= true;

    for (int v : adj\[u\]) {  
        if (disc\[v\] \== 0) { // Not visited  
            findSCCs(v);  
            low\[u\] \= std::min(low\[u\], low\[v\]);  
        } else if (onStack\[v\]) { // Back edge to a node on the current DFS path  
            low\[u\] \= std::min(low\[u\], disc\[v\]);  
        }  
    }

    // If u is the root of an SCC  
    if (low\[u\] \== disc\[u\]) {  
        std::cout \<\< "SCC: ";  
        while (true) {  
            int node \= st.top();  
            st.pop();  
            onStack\[node\] \= false;  
            std::cout \<\< node \<\< " ";  
            if (node \== u) break;  
        }  
        std::cout \<\< std::endl;  
    }  
}

### **Real-World Applications**

* **Social Network Analysis:** Identifying tightly-knit communities or groups where members are mutually connected.  
* **2-Satisfiability (2-SAT) Problems:** SCCs are used to find a satisfying assignment for a set of boolean clauses with two literals each.  
* **Analyzing State Machines:** Decomposing a large state machine into smaller, manageable components.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Capital City | SPOJ | [Link](https://www.spoj.com/problems/CAPCITY/) | SCC, Condensation Graph |
| Critical Connections in a Network | LeetCode | [Link](https://leetcode.com/problems/critical-connections-in-a-network/) | Bridges (related to Tarjan's) |
| Check if a graph is strongly connected | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/check-if-a-given-directed-graph-is-strongly-connected/) | SCC |
| Flight Routes Check | CSES | [Link](https://cses.fi/problemset/task/1682) | SCC |
| Coin Collector | CSES | [Link](https://cses.fi/problemset/task/1686) | SCC, Condensation Graph, DP |
| Planets and Kingdoms | CSES | [Link](https://cses.fi/problemset/task/1683) | SCC |
| Max Flow \- 2-SAT | TopCoder | [Link](https://www.topcoder.com/community/competitive-programming/tutorials/maximum-flow-section-2/) | 2-SAT application |
| Come and Go | UVa | [Link](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2946) | SCC |
| The Largest SCC | Timus | [Link](https://acm.timus.ru/problem.aspx?space=1&num=1280) | SCC |
| True Friends | Codeforces | [Link](https://codeforces.com/problemset/problem/113/B) | SCC |
