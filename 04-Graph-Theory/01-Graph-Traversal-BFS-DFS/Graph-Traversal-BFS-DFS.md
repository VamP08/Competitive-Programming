
## **Graph Theory: Graph Traversal (BFS & DFS)**

### **Conceptual Overview**

Graph traversal is the process of visiting every vertex and edge in a graph in a systematic way. The two most fundamental traversal algorithms are Breadth-First Search (BFS) and Depth-First Search (DFS).

### **Core Theory**

* **Depth-First Search (DFS):** Explores as far as possible along each branch before backtracking. It uses a stack (often the implicit call stack in a recursive implementation) to keep track of vertices to visit.  
  * **Complexity:** O(V+E), where V is the number of vertices and E is the number of edges.  
  * **Use When:** You need to explore a path to its end, check for cycles, find connected components, or perform topological sorting.  
* **Breadth-First Search (BFS):** Explores all neighbor nodes at the present depth level before moving on to the nodes at the next level. It uses a queue to manage the order of visitation.  
  * **Complexity:** O(V+E).  
  * **Use When:** You need to find the shortest path in an unweighted graph, perform a level-order traversal, or when the solution is likely close to the source node.

### **Implementation Templates**

C++

\#**include** \<iostream\>  
\#**include** \<vector\>  
\#**include** \<queue\>

const int MAXN \= 100001;  
std::vector\<int\> adj\[MAXN\];  
bool visited\[MAXN\];

// Recursive DFS  
void dfs\_recursive(int u) {  
    visited\[u\] \= true;  
    std::cout \<\< u \<\< " ";  
    for (int v : adj\[u\]) {  
        if (\!visited\[v\]) {  
            dfs\_recursive(v);  
        }  
    }  
}

// BFS  
void bfs(int start\_node) {  
    std::queue\<int\> q;  
    q.push(start\_node);  
    visited\[start\_node\] \= true;

    while (\!q.empty()) {  
        int u \= q.front();  
        q.pop();  
        std::cout \<\< u \<\< " ";

        for (int v : adj\[u\]) {  
            if (\!visited\[v\]) {  
                visited\[v\] \= true;  
                q.push(v);  
            }  
        }  
    }  
}

### **Real-World Applications**

| Algorithm | Application |
| :---- | :---- |
| **DFS** | Solving mazes and puzzles, detecting cycles in a graph, topological sorting for task scheduling. |
| **BFS** | Web crawlers, finding shortest paths in navigation systems (unweighted), social network analysis (friends of friends). |

### **Curated Practice Problems**

| Problem Name | Platform | Link | Algorithm |
| :---- | :---- | :---- | :---- |
| Number of Islands | LeetCode | [Link](https://leetcode.com/problems/number-of-islands/) | DFS or BFS |
| Word Ladder | LeetCode | [Link](https://leetcode.com/problems/word-ladder/) | BFS (Shortest Path) |
| Course Schedule | LeetCode | [Link](https://leetcode.com/problems/course-schedule/) | DFS (Cycle Detection) |
| Keys and Rooms | LeetCode | [Link](https://leetcode.com/problems/keys-and-rooms/) | DFS or BFS |
| Shortest Path in a Grid with Obstacles Elimination | LeetCode | [Link](https://leetcode.com/problems/shortest-path-in-a-grid-with-obstacles-elimination/) | Advanced BFS |
| Rotting Oranges | LeetCode | [Link](https://leetcode.com/problems/rotting-oranges/) | BFS |
| 01 Matrix | LeetCode | [Link](https://leetcode.com/problems/01-matrix/) | Multi-source BFS |
| Surrounded Regions | LeetCode | [Link](https://leetcode.com/problems/surrounded-regions/) | DFS or BFS from borders |
| Clone Graph | LeetCode | [Link](https://leetcode.com/problems/clone-graph/) | DFS or BFS |
| Number of Connected Components | LeetCode | [Link](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/) | DFS or BFS |
| All Paths From Source to Target | LeetCode | [Link](https://leetcode.com/problems/all-paths-from-source-to-target/) | DFS |
| Pacific Atlantic Water Flow | LeetCode | [Link](https://leetcode.com/problems/pacific-atlantic-water-flow/) | Multi-source DFS/BFS |
