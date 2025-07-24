
## **Fast Input/Output (I/O)**

### **Conceptual Overview**

In competitive programming, problems often involve large amounts of input and output. Standard I/O operations in languages like C++ (cin/cout) and Java (Scanner) can be surprisingly slow and may lead to a "Time Limit Exceeded" (TLE) verdict, even if your algorithm is efficient. Fast I/O techniques are simple code additions that significantly speed up these operations. \[3\]

### **Fast I/O in C++**

The standard cin and cout streams in C++ are synchronized with C's stdio streams (scanf, printf) by default, which causes a major slowdown. \[3\]

**Key Recommendations:**

1. **Disable Synchronization:** Add std::ios\_base::sync\_with\_stdio(false); at the beginning of your main function. \[3\]  
2. **Untie cin from cout:** Add std::cin.tie(NULL); right after. This prevents cout from being flushed before every cin operation. \[3\]  
3. **Use \\n instead of endl:** endl forces a flush of the output buffer. Using '\\n' is much faster for large outputs. \[3\]

A standard C++ template should always start with these lines:

C++

\#**include** \<iostream\>  
// Other necessary headers or \<bits/stdc++.h\>

int main() {  
    // Fast I/O  
    std::ios\_base::sync\_with\_stdio(false);  
    std::cin.tie(NULL);

    // Your code here  
      
    return 0;  
}

### **Fast I/O in Java**

Java's default Scanner class is notoriously slow for large inputs. The preferred method is to use BufferedReader for reading and PrintWriter for writing.

**Key Recommendations:**

1. **Use BufferedReader for Input:** It reads text from a character-input stream, buffering characters for efficient reading. You will need to parse strings into appropriate types (e.g., Integer.parseInt()).  
2. **Use PrintWriter for Output:** It is generally faster than System.out.println().  
3. **Create a FastReader Class:** For convenience, most competitive programmers in Java use a custom FastReader class that encapsulates BufferedReader and StringTokenizer.

Here is a common FastReader class template:

Java

import java.io.BufferedReader;  
import java.io.IOException;  
import java.io.InputStreamReader;  
import java.util.StringTokenizer;

public class Main {  
    static class FastReader {  
        BufferedReader br;  
        StringTokenizer st;

        public FastReader() {  
            br \= new BufferedReader(new InputStreamReader(System.in));  
        }

        String next() {  
            while (st \== null ||\!st.hasMoreElements()) {  
                try {  
                    st \= new StringTokenizer(br.readLine());  
                } catch (IOException e) {  
                    e.printStackTrace();  
                }  
            }  
            return st.nextToken();  
        }

        int nextInt() {  
            return Integer.parseInt(next());  
        }

        long nextLong() {  
            return Long.parseLong(next());  
        }

        double nextDouble() {  
            return Double.parseDouble(next());  
        }

        String nextLine() {  
            String str \= "";  
            try {  
                str \= br.readLine();  
            } catch (IOException e) {  
                e.printStackTrace();  
            }  
            return str;  
        }  
    }

    public static void main(String args) {  
        FastReader s \= new FastReader();  
        // Use s.nextInt(), s.next(), etc.  
    }  
}

### **Practice Platforms**

To test the effectiveness of your fast I/O implementation, solve problems specifically designed with large datasets.

| Problem Name | Platform | Link |
| :---- | :---- | :---- |
| Enormous Input Test | SPOJ | [Link](https://www.spoj.com/problems/INTEST/) \[3\] |
| Life, the Universe, and Everything | SPOJ | [Link](https://www.spoj.com/problems/TEST/) |
