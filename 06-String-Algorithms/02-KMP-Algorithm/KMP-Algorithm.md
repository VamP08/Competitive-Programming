
## **String Algorithms: Knuth-Morris-Pratt (KMP) Algorithm**

### **Conceptual Overview**

The Knuth-Morris-Pratt (KMP) algorithm is a highly efficient string searching algorithm that finds all occurrences of a "pattern" string within a "text" string. Its key innovation is that it avoids re-comparing characters that have already been matched. When a mismatch occurs, it uses a precomputed table to determine the best shift for the pattern, leveraging information about the pattern's internal structure. \[3\]

### **Core Theory: The LPS Array**

The heart of the KMP algorithm is the **Longest Proper Prefix Suffix (LPS) array**, also known as the "failure function" or "pi table". For a pattern of length M, the LPS array is of size M.

* lps\[i\] is defined as the length of the longest proper prefix of pattern\[0...i\] which is also a suffix of pattern\[0...i\].  
* A **proper prefix** is a prefix that is not equal to the entire string.  
* When a mismatch occurs at text\[i\] and pattern\[j\], the LPS array tells us that the first lps\[j-1\] characters of the pattern have already matched the text preceding text\[i\]. We can then resume comparison from pattern\[lps\[j-1\]\] without moving the text pointer i.

### **Implementation Template (C++)**

C++

\#**include** \<iostream\>  
\#**include** \<vector\>  
\#**include** \<string\>

// Computes the Longest Proper Prefix Suffix (LPS) array  
std::vector\<int\> computeLPS(const std::string& pattern) {  
    int m \= pattern.length();  
    std::vector\<int\> lps(m, 0);  
    int length \= 0; // Length of the previous longest prefix suffix  
    int i \= 1;  
    while (i \< m) {  
        if (pattern\[i\] \== pattern\[length\]) {  
            length++;  
            lps\[i\] \= length;  
            i++;  
        } else {  
            if (length\!= 0) {  
                length \= lps\[length \- 1\];  
            } else {  
                lps\[i\] \= 0;  
                i++;  
            }  
        }  
    }  
    return lps;  
}

// KMP search algorithm  
void KMPSearch(const std::string& text, const std::string& pattern) {  
    int n \= text.length();  
    int m \= pattern.length();  
    std::vector\<int\> lps \= computeLPS(pattern);  
    int i \= 0; // index for text  
    int j \= 0; // index for pattern  
    while (i \< n) {  
        if (pattern\[j\] \== text\[i\]) {  
            i++;  
            j++;  
        }  
        if (j \== m) {  
            std::cout \<\< "Found pattern at index " \<\< i \- j \<\< std::endl;  
            j \= lps\[j \- 1\];  
        } else if (i \< n && pattern\[j\]\!= text\[i\]) {  
            if (j\!= 0) {  
                j \= lps\[j \- 1\];  
            } else {  
                i++;  
            }  
        }  
    }  
}

### **Complexity Analysis**

* **Preprocessing (LPS array construction):** O(M), where M is the length of the pattern.  
* **Searching:** O(N), where N is the length of the text.  
* **Total Time Complexity:** O(N+M).  
* **Space Complexity:** O(M) for the LPS array.

### **Real-World Applications**

* **Text Editors:** The "Find" functionality (Ctrl+F) in many text editors uses KMP or similar algorithms.  
* **Intrusion Detection Systems:** Scanning network packets for malicious signatures (patterns).  
* **Bioinformatics:** Searching for specific patterns in DNA sequences.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Implement strStr() | LeetCode | [Link](https://leetcode.com/problems/implement-strstr/) | Basic KMP |
| Shortest Palindrome | LeetCode | [Link](https://leetcode.com/problems/shortest-palindrome/) | KMP for palindrome properties |
| Repeated Substring Pattern | LeetCode | [Link](https://leetcode.com/problems/repeated-substring-pattern/) | KMP LPS array properties |
| Find the Index of the First Occurrence | LeetCode | [Link](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/) | Basic KMP |
| String Matching | CSES | [Link](https://cses.fi/problemset/task/1753) | KMP |
| Finding Borders | CSES | [Link](https://cses.fi/problemset/task/1732) | KMP LPS array |
| Minimal string rotation | SPOJ | [Link](https://www.spoj.com/problems/MINMOVE/) | KMP application |
| Find the Period | SPOJ | [Link](https://www.spoj.com/problems/PERIOD/) | KMP LPS array properties |
| Prefixes and Suffixes | Codeforces | [Link](https://codeforces.com/problemset/problem/432/D) | KMP LPS array properties |
| Password | Codeforces | [Link](https://codeforces.com/problemset/problem/126/B) | KMP LPS array properties |
