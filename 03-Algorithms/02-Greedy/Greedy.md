
## **Algorithm: Greedy Algorithms**

### **Conceptual Overview**

A greedy algorithm is an algorithmic paradigm that builds up a solution piece by piece, always choosing the option that looks best at the moment. The hope is that by making a sequence of locally optimal choices, a globally optimal solution will be found. This approach does not always yield a globally optimal solution, but for many problems, it does.

The main challenge with greedy algorithms is not the implementation, which is often straightforward, but proving that the greedy choice will lead to the global optimum.

### **Key Properties for a Greedy Approach**

For a greedy algorithm to work correctly, the problem must typically exhibit two properties:

1. **Greedy Choice Property:** A globally optimal solution can be arrived at by making a locally optimal choice. In other words, the choice made at each step does not prevent us from reaching the overall optimal solution.  
2. **Optimal Substructure:** An optimal solution to the problem contains within it optimal solutions to subproblems.

### **Greedy vs. Dynamic Programming (DP)**

* **Choice:** A greedy algorithm makes one choice at each step and commits to it. DP explores multiple choices and picks the best one by comparing the results of subproblems.  
* **Information:** Greedy algorithms are "short-sighted"; they make decisions based on current information without regard for future consequences. DP is "long-sighted"; it makes decisions based on the solutions to all relevant subproblems.

### **Implementation Template (Activity Selection Problem)**

Given a set of activities with start and finish times, select the maximum number of non-overlapping activities. The greedy choice is to always pick the next activity that finishes earliest.

C++

\#**include** \<iostream\>  
\#**include** \<vector\>  
\#**include** \<algorithm\>

struct Activity {  
    int start, finish;  
};

// Sorts activities based on finish time  
bool compareActivities(Activity s1, Activity s2) {  
    return (s1.finish \< s2.finish);  
}

void printMaxActivities(std::vector\<Activity\>& arr) {  
    // Sort activities based on finish time  
    std::sort(arr.begin(), arr.end(), compareActivities);

    std::cout \<\< "Following activities are selected:\\n";

    // The first activity always gets selected  
    int i \= 0;  
    std::cout \<\< "(" \<\< arr\[i\].start \<\< ", " \<\< arr\[i\].finish \<\< "), ";

    // Consider rest of the activities  
    for (int j \= 1; j \< arr.size(); j++) {  
        // If this activity has start time greater than or  
        // equal to the finish time of previously selected  
        // activity, then select it  
        if (arr\[j\].start \>= arr\[i\].finish) {  
            std::cout \<\< "(" \<\< arr\[j\].start \<\< ", " \<\< arr\[j\].finish \<\< "), ";  
            i \= j;  
        }  
    }  
}

### **Real-World Applications**

* **Dijkstra's Algorithm:** Finds the shortest path in a graph by greedily selecting the nearest unvisited vertex.  
* **Kruskal's and Prim's Algorithms:** Find a Minimum Spanning Tree by greedily selecting the cheapest edges.  
* **Huffman Coding:** Used in data compression, it greedily builds an optimal prefix code tree.  
* **Activity Selection Problem:** Scheduling the maximum number of non-overlapping activities by always picking the activity that finishes earliest.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Assign Cookies | LeetCode | [Link](https://leetcode.com/problems/assign-cookies/) | Sorting, Greedy Choice |
| Jump Game | LeetCode | [Link](https://leetcode.com/problems/jump-game/) | Greedy Reach |
| Gas Station | LeetCode | [Link](https://leetcode.com/problems/gas-station/) | Greedy Choice |
| Task Scheduler | LeetCode | [Link](https://leetcode.com/problems/task-scheduler/) | Greedy, Frequency Count |
| Activity Selection | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/) | Sorting by Finish Time |
| Minimum Platforms | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/) | Sorting, Event Scheduling |
| N meetings in one room | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/n-meetings-in-one-room/) | Sorting by Finish Time |
| Fractional Knapsack | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/fractional-knapsack-problem/) | Sorting by Value/Weight Ratio |
| Jump Game II | LeetCode | [Link](https://leetcode.com/problems/jump-game-ii/) | Greedy Reach |
| Merge Intervals | LeetCode | [Link](https://leetcode.com/problems/merge-intervals/) | Sorting by Start Time |
| Non-overlapping Intervals | LeetCode | [Link](https://leetcode.com/problems/non-overlapping-intervals/) | Sorting by End Time |
| Partition Labels | LeetCode | [Link](https://leetcode.com/problems/partition-labels/) | Greedy, Last Occurrence |
