
## **String Algorithms: Z-Algorithm**

### **Conceptual Overview**

The Z-algorithm is a linear-time string processing algorithm that, for a given string S of length N, constructs an array called the **Z-array**. \[3\]

* Z\[i\] is the length of the longest substring starting from S\[i\] which is also a prefix of S.  
* By definition, Z is usually set to 0 or N.

For example, for the string S \= "abacaba", the Z-array would be \`\`.

* Z\[2\] \= 3 because the substring starting at index 4 ("aba") is a prefix of S of length 3\.

### **Core Theory: The Z-Box**

The algorithm achieves its O(N) complexity by maintaining a "Z-box," which is an interval \`\` representing the substring S that matches a prefix of S and has the largest R found so far. When calculating Z\[i\], if i is within the current Z-box, the algorithm can use previously computed Z-values to initialize Z\[i\], avoiding redundant character comparisons.

### **Pattern Searching with Z-Algorithm**

The Z-algorithm can be used for efficient pattern searching. To find a pattern P in a text T:

1. Construct a new string S \= P \+ "$" \+ T, where $ is a character not present in P or T.  
2. Compute the Z-array for S.  
3. An occurrence of P is found at index i in T if the Z-value corresponding to that position in S is equal to the length of P.

### **Implementation Template (C++)**

C++

\#**include** \<iostream\>  
\#**include** \<vector\>  
\#**include** \<string\>

std::vector\<int\> z\_function(const std::string& s) {  
    int n \= s.length();  
    std::vector\<int\> z(n);  
    for (int i \= 1, l \= 0, r \= 0; i \< n; \++i) {  
        if (i \<= r)  
            z\[i\] \= std::min(r \- i \+ 1, z\[i \- l\]);  
        while (i \+ z\[i\] \< n && s\[z\[i\]\] \== s\[i \+ z\[i\]\])  
            \++z\[i\];  
        if (i \+ z\[i\] \- 1 \> r)  
            l \= i, r \= i \+ z\[i\] \- 1;  
    }  
    return z;  
}

### **Complexity Analysis**

* **Z-array construction:** O(N), where N is the length of the string.  
* **Pattern Searching:** O(N+M), where N and M are the lengths of the text and pattern.  
* **Space Complexity:** O(N) for the Z-array.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| String Matching | Codeforces | [Link](https://codeforces.com/edu/course/2/lesson/3/3/practice/contest/272263/problem/A) | Pattern Searching with Z-Algorithm |
| Password | Codeforces | [Link](https://codeforces.com/problemset/problem/126/B) | Z-Algorithm, Prefixes/Suffixes |
| Prefixes and Suffixes | Codeforces | [Link](https://codeforces.com/problemset/problem/432/D) | Z-Algorithm |
| String Matching | CSES | [Link](https://cses.fi/problemset/task/1753) | Z-Algorithm |
| Finding Borders | CSES | [Link](https://cses.fi/problemset/task/1732) | Z-Algorithm |
| A Needle in the Haystack | SPOJ | [Link](https://www.spoj.com/problems/NHAY/) | Pattern Searching |
| Find the Period | SPOJ | [Link](https://www.spoj.com/problems/PERIOD/) | Z-Algorithm properties |
| Cyclic Shifts | Codeforces | [Link](https://codeforces.com/problemset/problem/128/B) | Z-Algorithm on concatenated string |
| Prefixes and Suffixes | Codeforces | [Link](https://codeforces.com/problemset/problem/128/C) | Z-Algorithm |
| Longest Common Prefix | LeetCode | [Link](https://leetcode.com/problems/longest-common-prefix/) | Z-Algorithm application |
