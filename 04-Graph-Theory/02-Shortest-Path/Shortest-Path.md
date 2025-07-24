
## **Graph Theory: Shortest Path Algorithms**

### **Conceptual Overview**

The shortest path problem is a classic graph theory problem that involves finding a path between two vertices in a graph such that the sum of the weights of the edges in the path is minimized. The choice of algorithm depends on the graph's properties, such as edge weights and the number of source/destination pairs.

### **Key Algorithms**

* **Breadth-First Search (BFS):**  
  * **Use Case:** Finds the shortest path in **unweighted** graphs.  
  * **Complexity:** O(V+E).  
* **Dijkstra's Algorithm:**  
  * **Use Case:** Finds the shortest path from a single source to all other vertices in a graph with **non-negative edge weights**.  
  * **Implementation:** A greedy algorithm using a priority queue to explore the closest unvisited vertex.  
  * **Complexity:** O(ElogV) with a binary heap.  
* **Bellman-Ford Algorithm:**  
  * **Use Case:** Finds the shortest path from a single source in a graph that may have **negative edge weights**.  
  * **Feature:** It can also detect negative weight cycles.  
  * **Complexity:** O(V⋅E).  
* **Floyd-Warshall Algorithm:**  
  * **Use Case:** Finds the shortest paths between **all pairs** of vertices.  
  * **Feature:** It can handle negative edge weights but not negative cycles. It is a dynamic programming algorithm.  
  * **Complexity:** O(V3).

### **Real-World Applications**

* **GPS and Mapping Services:** Finding the fastest route between two locations.  
* **Network Routing:** Determining the most efficient path for data packets to travel through a network.  
* **Social Network Analysis:** Finding the "degrees of separation" between people.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Recommended Algorithm |
| :---- | :---- | :---- | :---- |
| Shortest Path in Binary Matrix | LeetCode | [Link](https://leetcode.com/problems/shortest-path-in-binary-matrix/) | BFS |
| Network Delay Time | LeetCode | [Link](https://leetcode.com/problems/network-delay-time/) | Dijkstra |
| Path with Minimum Effort | LeetCode | [Link](https://leetcode.com/problems/path-with-minimum-effort/) | Dijkstra |
| Find the City With the Smallest Number of Neighbors | LeetCode | [Link](https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/) | Floyd-Warshall |
| Cheapest Flights Within K Stops | LeetCode | [Link](https://leetcode.com/problems/cheapest-flights-within-k-stops/) | Bellman-Ford / Modified Dijkstra |
| Path With Maximum Probability | LeetCode | [Link](https://leetcode.com/problems/path-with-maximum-probability/) | Dijkstra |
| The Shortest Path | SPOJ | [Link](https://www.spoj.com/problems/SHPATH/) | Dijkstra |
| High Score | CSES | [Link](https://cses.fi/problemset/task/1673) | Bellman-Ford (Negative Cycles) |
| Shortest Routes I | CSES | [Link](https://cses.fi/problemset/task/1671) | Dijkstra |
| Shortest Routes II | CSES | [Link](https://cses.fi/problemset/task/1672) | Floyd-Warshall |
| Word Ladder | LeetCode | [Link](https://leetcode.com/problems/word-ladder/) | BFS |
| 0-1 BFS | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/0-1-bfs-shortest-path-binary-graph/) | 0-1 BFS (Deque) |
