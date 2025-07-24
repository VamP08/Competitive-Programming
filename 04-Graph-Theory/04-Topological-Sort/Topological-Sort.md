
## **Graph Theory: Topological Sort**

### **Conceptual Overview**

A topological sort or topological ordering of a directed graph is a linear ordering of its vertices such that for every directed edge from vertex u to vertex v, u comes before v in the ordering. A topological sort is only possible if and only if the graph is a **Directed Acyclic Graph (DAG)**. A graph can have multiple valid topological orderings.

### **Algorithms**

* **Kahn's Algorithm (BFS-based):**  
  * **Approach:** The algorithm works by finding vertices with an in-degree of 0, adding them to the sorted list, and then "removing" them and their outgoing edges from the graph. This process is repeated until no vertices are left.  
  * **Implementation:** Uses a queue to keep track of vertices with an in-degree of 0\.  
  * **Complexity:** O(V+E).  
* **DFS-based Algorithm:**  
  * **Approach:** Perform a DFS traversal on the graph. The topological sort is the reverse of the post-order traversal of the vertices. A vertex is finished (and added to the head of a list) only after all its descendants have been visited.  
  * **Complexity:** O(V+E).

### **Implementation Template (Kahn's Algorithm)**

C++

\#**include** \<iostream\>  
\#**include** \<vector\>  
\#**include** \<queue\>

std::vector\<int\> topologicalSort(int V, const std::vector\<std::vector\<int\>\>& adj) {  
    std::vector\<int\> in\_degree(V, 0);  
    for (int u \= 0; u \< V; u++) {  
        for (int v : adj\[u\]) {  
            in\_degree\[v\]++;  
        }  
    }

    std::queue\<int\> q;  
    for (int i \= 0; i \< V; i++) {  
        if (in\_degree\[i\] \== 0) {  
            q.push(i);  
        }  
    }

    std::vector\<int\> top\_order;  
    while (\!q.empty()) {  
        int u \= q.front();  
        q.pop();  
        top\_order.push\_back(u);

        for (int v : adj\[u\]) {  
            in\_degree\[v\]--;  
            if (in\_degree\[v\] \== 0) {  
                q.push(v);  
            }  
        }  
    }

    if (top\_order.size() \< V) {  
        return {}; // Graph has a cycle  
    }  
    return top\_order;  
}

### **Real-World Applications**

* **Task Scheduling:** Ordering a sequence of jobs or tasks based on their dependencies (e.g., course prerequisites).  
* **Build Systems:** Tools like make use topological sorting to determine the order in which to compile source files.  
* **Spreadsheet Evaluation:** Determining the order to recalculate cell formulas when values change.  
* **Symbol Dependency Resolution:** Used by linkers to resolve dependencies in code modules.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Course Schedule | LeetCode | [Link](https://leetcode.com/problems/course-schedule/) | Cycle Detection in Directed Graph |
| Course Schedule II | LeetCode | [Link](https://leetcode.com/problems/course-schedule-ii/) | Topological Sort |
| Alien Dictionary | LeetCode | [Link](https://leetcode.com/problems/alien-dictionary/) | Graph Construction, Topological Sort |
| Longest Path in a DAG | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/find-longest-path-in-a-dag/) | Topological Sort, DP |
| Game Routes | CSES | [Link](https://cses.fi/problemset/task/1681) | Topological Sort, DP |
| Longest Flight Route | CSES | [Link](https://cses.fi/problemset/task/1680) | Topological Sort, DP |
| Course Schedule IV | LeetCode | [Link](https://leetcode.com/problems/course-schedule-iv/) | Transitive Closure, Floyd-Warshall/BFS |
| Minimum Height Trees | LeetCode | [Link](https://leetcode.com/problems/minimum-height-trees/) | Topological Sort idea on a tree |
| Build a Matrix With Conditions | LeetCode | [Link](https://leetcode.com/problems/build-a-matrix-with-conditions/) | Topological Sort |
| All Ancestors of a Node in a DAG | LeetCode | [Link](https://leetcode.com/problems/all-ancestors-of-a-node-in-a-directed-acyclic-graph/) | Transitive Closure, BFS/DFS |
