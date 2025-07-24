
## **String Algorithms: Hashing**

### **Conceptual Overview**

String hashing is a technique used to convert a string into a numerical representation (a hash value) that can be used for efficient comparison. The primary goal is to have a function where if two strings are identical, their hash values are also identical. While collisions (different strings having the same hash) are possible, they can be made extremely rare by choosing good hashing parameters. \[5\]

### **Core Theory: Polynomial Rolling Hash**

The most common method for string hashing is the **polynomial rolling hash**. A string S of length L is treated as a number in a base-p system, where p is a prime number larger than the size of the character set. The hash is computed modulo a large prime M.

The hash of a string S=s0​s1​...sL−1​ is calculated as:  
H(S)=(∑i=0L−1​si​⋅pi)(modM)

* **Efficiency:** After an O(L) preprocessing step to compute powers of p and prefix hashes, the hash of any substring can be calculated in O(1) time.  
* **Collision Avoidance:** To minimize the risk of collisions, it's a common practice to use two different pairs of (p,M) and check if the hashes match for both.

### **Implementation Template (C++)**

C++

\#**include** \<string\>  
\#**include** \<vector\>

struct StringHash {  
    std::string s;  
    int n;  
    long long p1 \= 31, m1 \= 1e9 \+ 7;  
    long long p2 \= 37, m2 \= 1e9 \+ 9;  
    std::vector\<long long\> p\_pow1, p\_pow2;  
    std::vector\<long long\> h1, h2;

    StringHash(const std::string& \_s) : s(\_s) {  
        n \= s.length();  
        p\_pow1.resize(n);  
        p\_pow2.resize(n);  
        h1.resize(n \+ 1, 0);  
        h2.resize(n \+ 1, 0);

        p\_pow1 \= 1;  
        p\_pow2 \= 1;  
        for (int i \= 1; i \< n; i++) {  
            p\_pow1\[i\] \= (p\_pow1\[i \- 1\] \* p1) % m1;  
            p\_pow2\[i\] \= (p\_pow2\[i \- 1\] \* p2) % m2;  
        }

        for (int i \= 0; i \< n; i++) {  
            h1\[i \+ 1\] \= (h1\[i\] \+ (s\[i\] \- 'a' \+ 1) \* p\_pow1\[i\]) % m1;  
            h2\[i \+ 1\] \= (h2\[i\] \+ (s\[i\] \- 'a' \+ 1) \* p\_pow2\[i\]) % m2;  
        }  
    }

    // Get hash of substring s\[i...j\]  
    std::pair\<long long, long long\> get\_hash(int i, int j) {  
        long long res1 \= (h1\[j \+ 1\] \- h1\[i\] \+ m1) % m1;  
        long long res2 \= (h2\[j \+ 1\] \- h2\[i\] \+ m2) % m2;  
        res1 \= (res1 \* modInverse(p\_pow1\[i\], m1)) % m1; // Assuming modInverse is available  
        res2 \= (res2 \* modInverse(p\_pow2\[i\], m2)) % m2;  
        return {res1, res2};  
    }  
    // Helper for modular inverse (needed for get\_hash)  
    long long power(long long base, long long exp, long long mod) { /\*... \*/ }  
    long long modInverse(long long n, long long mod) { /\*... \*/ }  
};

### **Real-World Applications**

* **Plagiarism Detection:** Finding common substrings between documents.  
* **Database Systems:** Used in some indexing schemes for fast string lookups.  
* **Bioinformatics:** Searching for specific gene sequences within a larger DNA strand.  
* **Rabin-Karp Algorithm:** String hashing is the core component of the Rabin-Karp algorithm for pattern searching.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Repeated DNA Sequences | LeetCode | [Link](https://leetcode.com/problems/repeated-dna-sequences/) | Substring Hashing |
| Longest Duplicate Substring | LeetCode | [Link](https://leetcode.com/problems/longest-duplicate-substring/) | Binary Search \+ Hashing |
| Palindromic Substrings | LeetCode | [Link](https://leetcode.com/problems/palindromic-substrings/) | Hashing for Palindrome Check |
| Good Substrings | Codeforces | [Link](https://codeforces.com/problemset/problem/271/D) | Hashing unique substrings |
| String Matching | CSES | [Link](https://cses.fi/problemset/task/1753) | Hashing for Pattern Matching |
| Longest Palindromic Substring | LeetCode | [Link](https://leetcode.com/problems/longest-palindromic-substring/) | Hashing for Palindrome Check |
| Password | Codeforces | [Link](https://codeforces.com/problemset/problem/126/B) | Hashing, Prefixes/Suffixes |
| Finding Borders | CSES | [Link](https://cses.fi/problemset/task/1732) | Hashing, Prefixes/Suffixes |
| Substring Distribution | CSES | [Link](https://cses.fi/problemset/task/2109) | Hashing unique substrings |
| Rabin-Karp | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/rabin-karp-algorithm-for-pattern-searching/) | Rabin-Karp Algorithm |
