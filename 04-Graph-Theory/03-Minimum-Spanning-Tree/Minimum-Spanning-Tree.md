
## **Graph Theory: Minimum Spanning Tree (MST)**

### **Conceptual Overview**

A Minimum Spanning Tree (MST) of a connected, undirected, and weighted graph is a subgraph that connects all the vertices together with the minimum possible total edge weight, without forming any cycles. An MST will always have exactly V−1 edges, where V is the number of vertices.

### **Key Algorithms**

Both main algorithms for finding an MST are greedy algorithms.

* **Kruskal's Algorithm:**  
  * **Approach:** Sorts all edges by weight. It then iterates through the sorted edges, adding an edge to the MST if it does not form a cycle.  
  * **Data Structure:** Uses a Disjoint Set Union (DSU) to efficiently detect cycles.  
  * **Complexity:** O(ElogE) or O(ElogV), dominated by edge sorting.  
  * **Best For:** Sparse graphs (where E is close to V).  
* **Prim's Algorithm:**  
  * **Approach:** Grows the MST from an arbitrary start vertex. At each step, it adds the cheapest edge connecting a vertex in the MST to one outside it.  
  * **Data Structure:** Uses a priority queue to efficiently find the minimum weight edge.  
  * **Complexity:** O(ElogV) with a binary heap.  
  * **Best For:** Dense graphs (where E is close to V2).

### **Real-World Applications**

* **Network Design:** Designing least-cost networks for telecommunications, water supply, or electrical grids.  
* **Circuit Design:** Minimizing the wire length needed to connect components.  
* **Cluster Analysis:** Finding clusters of points in a dataset.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Min Cost to Connect All Points | LeetCode | [Link](https://leetcode.com/problems/min-cost-to-connect-all-points/) | MST (Prim's or Kruskal's) |
| Connecting Cities With Minimum Cost | LeetCode | [Link](https://leetcode.com/problems/connecting-cities-with-minimum-cost/) | MST (Kruskal's is natural here) |
| Kruskal (MST): Really Special Subtree | HackerRank | [Link](https://www.hackerrank.com/challenges/kruskalmstrsub/problem) | Kruskal's Algorithm |
| Road Reparation | CSES | [Link](https://cses.fi/problemset/task/1675) | MST |
| Prim's (MST) : Special Subtree | HackerRank | [Link](https://www.hackerrank.com/challenges/primsmstsub/problem) | Prim's Algorithm |
| Optimize Water Distribution in a Village | LeetCode | [Link](https://leetcode.com/problems/optimize-water-distribution-in-a-village/) | MST with a virtual node |
| Connecting Graph | SPOJ | [Link](https://www.spoj.com/problems/CSTREET/) | MST |
| Cobbled streets | SPOJ | [Link](https://www.spoj.com/problems/COBBLED/) | MST |
| Building Roads | CSES | [Link](https://cses.fi/problemset/task/1666) | MST / DSU |
| Find Critical and Pseudo-Critical Edges in MST | LeetCode | [Link](https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/) | Advanced MST properties |
