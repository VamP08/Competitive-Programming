
## **Dynamic Programming: DP on Grids**

### **Conceptual Overview**

DP on Grids is a common pattern of Dynamic Programming applied to problems involving a 2D matrix or grid. These problems often ask for the number of ways to travel from a starting cell to an ending cell, or to find the minimum/maximum cost path, with certain movement constraints (e.g., only being able to move right or down).

### **Core Theory**

* **State:** The state in grid DP is typically represented by the cell coordinates, dp\[i\]\[j\]. This cell stores the answer to the subproblem ending at that cell. For example, dp\[i\]\[j\] could be the number of ways to reach cell (i, j) or the minimum cost to reach it. \[14\]  
* Recurrence Relation: The value of dp\[i\]\[j\] is calculated based on the values of the cells from which we can move to (i, j). If we can only move right and down, the recurrence is often:  
  dp\[i\]\[j\] \= dp\[i-1\]\[j\] \+ dp\[i\]\[j-1\] (for counting paths)  
  dp\[i\]\[j\] \= cost\[i\]\[j\] \+ min(dp\[i-1\]\[j\], dp\[i\]\[j-1\]) (for min cost path)  
* **Base Cases:** The base cases are usually the starting cell (e.g., dp) and the first row and column, which can only be reached from one direction.

### **Implementation Template (Minimum Path Sum)**

C++

\#**include** \<iostream\>  
\#**include** \<vector\>  
\#**include** \<algorithm\>

int minPathSum(const std::vector\<std::vector\<int\>\>& grid) {  
    if (grid.empty() || grid.empty()) {  
        return 0;  
    }  
    int m \= grid.size();  
    int n \= grid.size();  
    std::vector\<std::vector\<int\>\> dp(m, std::vector\<int\>(n, 0));

    dp \= grid;

    // Fill first row  
    for (int j \= 1; j \< n; \++j) {  
        dp\[j\] \+= dp\[j \- 1\];  
    }

    // Fill first column  
    for (int i \= 1; i \< m; \++i) {  
        dp\[i\] \+= dp\[i \- 1\];  
    }

    // Fill the rest of the table  
    for (int i \= 1; i \< m; \++i) {  
        for (int j \= 1; j \< n; \++j) {  
            dp\[i\]\[j\] \+= std::min(dp\[i \- 1\]\[j\], dp\[i\]\[j \- 1\]);  
        }  
    }

    return dp\[m \- 1\]\[n \- 1\];  
}

### **Real-World Applications**

* **Robotics and Navigation:** Finding the optimal path for a robot to navigate a warehouse or a grid-based environment.  
* **Image Processing:** Algorithms for image seam carving (resizing images by removing "unimportant" paths of pixels) use DP on grids.  
* **Bioinformatics:** Used in sequence alignment algorithms where the alignment scores are filled into a grid.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Unique Paths | LeetCode | [Link](https://leetcode.com/problems/unique-paths/) | Counting Paths |
| Unique Paths II | LeetCode | [Link](https://leetcode.com/problems/unique-paths-ii/) | Counting Paths with Obstacles |
| Minimum Path Sum | LeetCode | [Link](https://leetcode.com/problems/minimum-path-sum/) | Minimum Cost Path |
| Maximal Square | LeetCode | [Link](https://leetcode.com/problems/maximal-square/) | Finding largest square of 1s |
| Dungeon Game | LeetCode | [Link](https://leetcode.com/problems/dungeon-game/) | Working backwards from destination |
| Grid 1 | AtCoder | [Link](https://atcoder.jp/contests/dp/tasks/dp_h) | Counting Paths with Obstacles |
| Longest Common Subsequence | LeetCode | [Link](https://leetcode.com/problems/longest-common-subsequence/) | Can be modeled as grid DP |
| Edit Distance | LeetCode | [Link](https://leetcode.com/problems/edit-distance/) | Can be modeled as grid DP |
| Cherry Pickup II | LeetCode | [Link](https://leetcode.com/problems/cherry-pickup-ii/) | 3D DP on Grid |
| Maximal Rectangle | LeetCode | [Link](https://leetcode.com/problems/maximal-rectangle/) | DP on Histogram |
| Longest Increasing Path in a Matrix | LeetCode | [Link](https://leetcode.com/problems/longest-increasing-path-in-a-matrix/) | DP with Memoization |
| Triangle | LeetCode | [Link](https://leetcode.com/problems/triangle/) | DP on Triangular Grid |
