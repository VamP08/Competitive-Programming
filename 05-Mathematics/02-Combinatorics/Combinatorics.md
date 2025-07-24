
## **Mathematics: Combinatorics**

### **Conceptual Overview**

Combinatorics is the field of mathematics concerned with counting, combination, and arrangement of objects. In competitive programming, combinatorial problems often ask "In how many ways can...?" and frequently involve very large numbers, requiring calculations under a modulus.

### **Key Concepts**

* **Rule of Sum and Rule of Product:** Fundamental principles for counting. If you have A choices for one decision and B choices for another, you have A+B choices if they are mutually exclusive (Rule of Sum) and A×B choices if they are independent (Rule of Product).  
* **Permutations:** The number of ways to arrange k items from a set of n distinct items, where order matters. Formula: P(n,k)=(n−k)\!n\!​.  
* **Combinations:** The number of ways to choose k items from a set of n distinct items, where order does not matter. Formula: C(n,k)=(kn​)=k\!(n−k)\!n\!​.  
* **Binomial Coefficients:** The coefficients C(n,k). They can be precomputed using Pascal's Triangle or calculated with factorials and modular inverses. \[3\]  
* **Inclusion-Exclusion Principle:** A counting technique for finding the number of elements in the union of multiple sets. For two sets, ∣A∪B∣=∣A∣+∣B∣−∣A∩B∣.  
* **Pigeonhole Principle:** If n items are put into m containers, with n\>m, then at least one container must contain more than one item. \[3\]  
* **Catalan Numbers:** A sequence of natural numbers that occur in various counting problems, often involving recursively defined objects. \[3\]

### **Implementation Template (nCr % p)**

Calculating binomial coefficients under a prime modulus p is a common requirement. This involves precomputing factorials and their modular inverses.

C++

\#**include** \<vector\>

long long power(long long base, long long exp, long long mod) {  
    long long res \= 1;  
    base %= mod;  
    while (exp \> 0) {  
        if (exp % 2 \== 1) res \= (res \* base) % mod;  
        base \= (base \* base) % mod;  
        exp /= 2;  
    }  
    return res;  
}

long long modInverse(long long n, long long mod) {  
    return power(n, mod \- 2, mod);  
}

long long nCr\_mod\_p(int n, int r, const std::vector\<long long\>& fact, const std::vector\<long long\>& invFact, long long p) {  
    if (r \< 0 |

| r \> n) return 0;  
    return (((fact\[n\] \* invFact\[r\]) % p) \* invFact\[n \- r\]) % p;  
}

// Precomputation in main  
// const int MAXN \= 200001;  
// const int MOD \= 1e9 \+ 7;  
// std::vector\<long long\> fact(MAXN);  
// std::vector\<long long\> invFact(MAXN);  
// fact \= 1;  
// invFact \= 1;  
// for (int i \= 1; i \< MAXN; i++) {  
//     fact\[i\] \= (fact\[i \- 1\] \* i) % MOD;  
//     invFact\[i\] \= modInverse(fact\[i\], MOD);  
// }

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Unique Paths | LeetCode | [Link](https://leetcode.com/problems/unique-paths/) | Combinations |
| Combinations | LeetCode | [Link](https://leetcode.com/problems/combinations/) | Combinations, Backtracking |
| Lattice Paths | Project Euler | [Link](https://projecteuler.net/problem=15) | Binomial Coefficients \[4\] |
| Creating Strings | CSES | [Link](https://cses.fi/problemset/task/1622) | Permutations |
| Binomial Coefficients | CSES | [Link](https://cses.fi/problemset/task/1079) | Combinations, Modular Arithmetic |
| Counting Tilings | CSES | [Link](https://cses.fi/problemset/task/2181) | DP, Combinatorics |
| Distributing Apples | CSES | [Link](https://cses.fi/problemset/task/1716) | Stars and Bars |
| Christmas Party | CSES | [Link](https://cses.fi/problemset/task/1717) | Derangements |
| Bracket Sequences I | CSES | [Link](https://cses.fi/problemset/task/2064) | Catalan Numbers |
| Permutation Subsequence | CodeChef | [Link](https://www.codechef.com/learn/course/combinatorics/LCOM101/problems/LCOM102A) | Permutations |
| Robot Movings | CodeChef | [Link](https://www.codechef.com/learn/course/combinatorics/LCOM101/problems/LCOM104A) | Path Counting |
| Fruit Basket | CodeChef | [Link](https://www.codechef.com/learn/course/combinatorics/LCOM101/problems/LCOM103A) | Rule of Product |
