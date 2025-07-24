
## **Algorithms: Recursion & Backtracking**

### **Conceptual Overview**

**Recursion** and **Backtracking** are closely related techniques that are essential for exploring all possible solutions to a problem in a systematic way.

* **Recursion:** A technique where a function solves a problem by calling itself with a smaller or simpler version of the same problem. Every recursive function must have:  
  1. **Base Case:** A condition that stops the recursion.  
  2. Recursive Step: The part of the function that calls itself.  
     Recursion is a natural fit for problems with a hierarchical or self-similar structure, like tree traversals or divide-and-conquer algorithms.  
* **Backtracking:** A refined brute-force approach that builds a solution incrementally. It explores a path, and if the path leads to a dead end or violates a constraint, it "backtracks" (reverts the last choice) and tries a different path. Backtracking is essentially a form of recursion that is used to explore a state-space tree of all possible solutions.

### **The Backtracking Template**

A general template for backtracking problems that generate all valid solutions:

C++

\#**include** \<iostream\>  
\#**include** \<vector\>

bool is\_valid(const std::vector\<int\>& current\_solution) {  
    // Logic to check if the current partial solution is valid  
    return true;  
}

void solve(std::vector\<std::vector\<int\>\>& all\_solutions, std::vector\<int\>& current\_solution, int n) {  
    // Base Case: if a complete solution is found  
    if (current\_solution.size() \== n) {  
        all\_solutions.push\_back(current\_solution);  
        return;  
    }

    // Explore choices  
    for (int choice \= 1; choice \<= n; \++choice) {  
        // Make a choice  
        current\_solution.push\_back(choice);

        // Check if the choice is valid before recursing  
        if (is\_valid(current\_solution)) {  
            // Recurse  
            solve(all\_solutions, current\_solution, n);  
        }

        // Backtrack: undo the choice  
        current\_solution.pop\_back();  
    }  
}

### **Real-World Applications**

* **Solving Puzzles:** Finding solutions to mazes, Sudoku puzzles, and the N-Queens problem.  
* **Generating Combinations/Permutations:** Finding all possible subsets or arrangements of a set of items.  
* **Parsing:** Compilers use recursion (in the form of recursive descent parsers) to analyze the structure of code.  
* **Artificial Intelligence:** Game-playing AI (like in chess) uses backtracking with optimizations (like alpha-beta pruning) to explore possible moves.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Subsets | LeetCode | [Link](https://leetcode.com/problems/subsets/) | Backtracking |
| Permutations | LeetCode | [Link](https://leetcode.com/problems/permutations/) | Backtracking |
| Combination Sum | LeetCode | [Link](https://leetcode.com/problems/combination-sum/) | Backtracking |
| N-Queens | LeetCode | [Link](https://leetcode.com/problems/n-queens/) | Backtracking with Pruning |
| Sudoku Solver | LeetCode | [Link](https://leetcode.com/problems/sudoku-solver/) | Backtracking |
| Word Search | LeetCode | [Link](https://leetcode.com/problems/word-search/) | Backtracking on a Grid |
| Letter Combinations of a Phone Number | LeetCode | [Link](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) | Backtracking |
| Generate Parentheses | LeetCode | [Link](https://leetcode.com/problems/generate-parentheses/) | Backtracking |
| Palindrome Partitioning | LeetCode | [Link](https://leetcode.com/problems/palindrome-partitioning/) | Backtracking |
| Beautiful Arrangement | LeetCode | [Link](https://leetcode.com/problems/beautiful-arrangement/) | Backtracking with Pruning |
| The Knight’s Tour | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/the-knights-tour-problem-backtracking-1/) | Backtracking on a Grid |
| Rat in a Maze | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/rat-in-a-maze-backtracking-2/) | Backtracking on a Grid |
