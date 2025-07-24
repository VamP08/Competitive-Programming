
## **Mathematics: Game Theory**

### **Conceptual Overview**

In competitive programming, game theory problems typically involve two-player, deterministic, perfect-information games. The goal is to determine if the first or second player has a winning strategy, or to find an optimal move. Most of these are **impartial games**, where the available moves depend only on the state of the game, not on which player is moving. \[3\]

### **Key Concepts**

* **Winning and Losing States:**  
  * A state is **losing (L-state)** if every move from it leads to a winning state.  
  * A state is winning (W-state) if there is at least one move that leads to a losing state.  
    The player who is about to move from an L-state will lose if the other player plays optimally.  
* **Nim Game:** A classic impartial game involving several piles of stones. Two players take turns removing any number of stones from a single pile. The player who takes the last stone wins.  
  * **Winning Strategy:** The state is a losing state if and only if the **Nim-sum** (XOR sum) of the sizes of all piles is zero. \[3\]  
* **Sprague-Grundy Theorem:** This powerful theorem states that every impartial game under the normal play convention is equivalent to a Nim pile of a certain size. This size is called the **Grundy number** or **nim-value** (often denoted as g(S) for a state S). \[5\]  
  * **Grundy Number:** The Grundy number of a game state is the smallest non-negative integer that is not among the Grundy numbers of the states reachable in one move. This is known as the **mex (Minimum Excluded value)** of the set of next states' Grundy numbers.  
  * **Sum of Games:** The Grundy number of a sum of independent games is the XOR sum of their individual Grundy numbers.

### **Implementation Template (Grundy Numbers)**

C++

\#**include** \<vector\>  
\#**include** \<set\>  
\#**include** \<algorithm\>

// Function to calculate mex of a set of numbers  
int calculateMex(std::set\<int\>& s) {  
    int mex \= 0;  
    while (s.count(mex)) {  
        mex++;  
    }  
    return mex;  
}

// Recursive function to calculate Grundy number  
int calculateGrundy(int n, std::vector\<int\>& grundy, const std::vector\<int\>& moves) {  
    if (grundy\[n\]\!= \-1) {  
        return grundy\[n\];  
    }

    std::set\<int\> reachable\_grundy\_values;  
    for (int move : moves) {  
        if (n \>= move) {  
            reachable\_grundy\_values.insert(calculateGrundy(n \- move, grundy, moves));  
        }  
    }

    return grundy\[n\] \= calculateMex(reachable\_grundy\_values);  
}

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Stones | AtCoder | [Link](https://atcoder.jp/contests/dp/tasks/dp_k) | Basic Winning/Losing States \[6\] |
| Game of Nim | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/the-nim-game/) | Nim Game, XOR Sum |
| A Chess Game | HackerRank | [Link](https://www.hackerrank.com/challenges/a-chessboard-game-1/problem) | Sprague-Grundy Theorem |
| Misere Nim | HackerRank | [Link](https://www.hackerrank.com/challenges/misere-nim-1/problem) | Nim Game Variant |
| Nim Game | LeetCode | [Link](https://leetcode.com/problems/nim-game/) | Basic Game Theory |
| Stone Game | LeetCode | [Link](https://leetcode.com/problems/stone-game/) | DP, Game Theory |
| A. Game with Sticks | Codeforces | [Link](https://codeforces.com/problemset/problem/451/A) | Winning/Losing States |
| C. The Game of Stones | Codeforces | [Link](https://codeforces.com/problemset/problem/1281/C) | Sprague-Grundy Theorem |
| E. Game on Sum | Codeforces | [Link](https://codeforces.com/problemset/problem/1486/E) | Game Theory on Graphs |
| Nimble Game | HackerRank | [Link](https://www.hackerrank.com/challenges/nimble-game/problem) | Nim Game Variant |
| Tic-tac-toe | Codeforces | [Link](https://codeforces.com/problemset/problem/3/C) | Brute Force, Games \[7\] |
| Looking for Order | Codeforces | [Link](https://codeforces.com/problemset/problem/8/C) | Bitmasks, DP \[7\] |
