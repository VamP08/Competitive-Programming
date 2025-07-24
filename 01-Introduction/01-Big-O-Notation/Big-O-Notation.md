
## **Big-O Notation and Complexity Analysis**

### **Conceptual Overview**

Time complexity is a fundamental concept that describes how an algorithm's runtime scales with the input size. It's expressed using **Big-O notation**, which provides a high-level, worst-case upper bound on an algorithm's growth rate, ignoring constants and lower-order terms. Understanding Big-O allows you to quickly assess if a solution is efficient enough to pass within the typical 1-2 second time limits of online judges.

### **Core Theory & Properties**

* **Definition:** A function f(n) is O(g(n)) if there exist positive constants c and n0​ such that f(n)≤c⋅g(n) for all n≥n0​. Essentially, g(n) is an upper bound for f(n) for large inputs.  
* **Worst-Case Analysis:** Big-O typically describes the worst-case scenario, the most important consideration in competitive programming to ensure a solution passes all test cases.  
* **Key Rules for Calculation:**  
  * **Sum Rule:** When combining complexities, the largest term dominates. For example, O(N2+N)=O(N2).  
  * **Product Rule:** For nested loops, complexities are multiplied. A loop running N times inside another loop running M times results in O(N⋅M).  
  * **Ignoring Constants:** Constant factors are ignored as they don't affect the growth rate. O(2N) is the same as O(N).

### **Common Time Complexities**

This table provides a practical guide for estimating the feasibility of an algorithm based on input size (N).

| Complexity | Name | Example Operations | Typical Max N |
| :---- | :---- | :---- | :---- |
| **O(1)** | Constant | Array access, basic arithmetic | Any |
| **O(logN)** | Logarithmic | Binary search, balanced BST operations | 1018 |
| **O(N​)** | Square Root | Trial division for primality testing \[1\] | 1012 |
| **O(N)** | Linear | Iterating through an array, linear search | 107 \- 108 |
| **O(NlogN)** | Log-Linear | Efficient sorting (Merge Sort, Quick Sort) | 105 \- 106 |
| **O(N2)** | Quadratic | Nested loops, simple sorting (Bubble, Insertion) | 103 \- 104 |
| **O(N3)** | Cubic | Three nested loops, Floyd-Warshall algorithm \[1\] |  400 |
| **O(2N)** | Exponential | Generating all subsets of a set |  20−22 |
| **O(N\!)** | Factorial | Generating all permutations of a set |  10−12 |

### **Curated Practice Problems**

These problems require you to think about the most efficient algorithm to fit within the time limits.

| Problem Name | Platform | Link | Required Complexity |
| :---- | :---- | :---- | :---- |
| Watermelon | Codeforces | [Link](https://codeforces.com/problemset/problem/4/A) | O(1) |
| Theatre Square | Codeforces | [Link](https://codeforces.com/problemset/problem/1/A) | O(1) |
| Sum of Two Numbers | LeetCode | [Link](https://leetcode.com/problems/two-sum/) | O(N) |
| Missing Number | CSES | [Link](https://cses.fi/problemset/task/1083) | O(N) |
| Books | Codeforces | [Link](https://codeforces.com/problemset/problem/279/B) | O(N) or O(NlogN) |
| Ferris Wheel | CSES | [Link](https://cses.fi/problemset/task/1090) | O(NlogN) |
| Apartments | CSES | [Link](https://cses.fi/problemset/task/1084) | O(NlogN) |
| Subarray Sums I | CSES | [Link](https://cses.fi/problemset/task/1660) | O(N) |
| Subarray Sums II | CSES | [Link](https://cses.fi/problemset/task/1661) | O(N) or O(NlogN) |
| Maximum Subarray Sum | CSES | [Link](https://cses.fi/problemset/task/1643) | O(N) |
