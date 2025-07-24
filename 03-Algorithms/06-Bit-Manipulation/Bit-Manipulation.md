
## **Algorithm: Bit Manipulation**

### **Conceptual Overview**

Bit manipulation involves using bitwise operators to perform operations on integers at the level of their binary representation. Since these operations map directly to processor instructions, they are extremely fast. In competitive programming, bit manipulation is used for optimization, representing sets (bitmasking), and solving problems related to binary numbers.

### **Core Theory & Operators**

* **Binary Representation:** Integers are stored as a sequence of bits (0s and 1s).  
* **Bitwise Operators:**  
  * & (AND): Sets a bit to 1 if both corresponding bits are 1\.  
  * | (OR): Sets a bit to 1 if at least one of the corresponding bits is 1\.  
  * ^ (XOR): Sets a bit to 1 if the corresponding bits are different.  
  * \~ (NOT): Inverts all the bits.  
  * \<\< (Left Shift): Shifts bits to the left, equivalent to multiplying by a power of 2\.  
  * \>\> (Right Shift): Shifts bits to the right, equivalent to dividing by a power of 2\.

### **Common Tricks & Techniques**

| Operation | C++ Code | Notes |
| :---- | :---- | :---- |
| Check if i-th bit is set | (mask \>\> i) & 1 | Shifts the i-th bit to the least significant position and checks if it's 1\. |
| Set i-th bit | mask |= (1 \<\< i) | Creates a mask with only the i-th bit set and ORs it with the number. |
| Clear i-th bit | mask &= \~(1 \<\< i) | Creates a mask with all bits set except the i-th and ANDs it. |
| Flip i-th bit | mask ^= (1 \<\< i) | XORing with a bit set to 1 flips the original bit. |
| Get lowest set bit | mask & \-mask | Isolates the rightmost '1' bit. |
| Clear lowest set bit | mask &= (mask \- 1\) | Flips the rightmost '1' and all bits to its right. |
| Check if power of 2 | n \> 0 && (n & (n \- 1)) \== 0 | A power of 2 has exactly one bit set. |
| Count set bits | \_\_builtin\_popcount(n) | A fast, built-in GCC/Clang function. |

### **Real-World Applications**

* **Data Compression & Encryption:** Bitwise operations are fundamental in algorithms for compressing and encrypting data.  
* **Graphics:** Used for color manipulation, masking, and other low-level graphics operations.  
* **Low-level Device Control:** Interacting directly with hardware registers.  
* **Hashing Algorithms:** Many hashing functions use bitwise operations to mix data.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Raising Bacteria | Codeforces | [Link](https://codeforces.com/problemset/problem/579/A) | Counting set bits |
| Fedor and New Game | Codeforces | [Link](https://codeforces.com/problemset/problem/467/B) | XOR, Counting set bits |
| Number of 1 Bits | LeetCode | [Link](https://leetcode.com/problems/number-of-1-bits/) | Counting set bits |
| Single Number | LeetCode | [Link](https://leetcode.com/problems/single-number/) | XOR properties |
| Subsets | LeetCode | [Link](https://leetcode.com/problems/subsets/) | Generating subsets with bitmasks |
| Power of Two | LeetCode | [Link](https://leetcode.com/problems/power-of-two/) | Power of 2 check |
| Counting Bits | LeetCode | [Link](https://leetcode.com/problems/counting-bits/) | Counting set bits, DP |
| Reverse Bits | LeetCode | [Link](https://leetcode.com/problems/reverse-bits/) | Bit manipulation |
| Sum of Two Integers | LeetCode | [Link](https://leetcode.com/problems/sum-of-two-integers/) | Bitwise addition |
| Missing Number | LeetCode | [Link](https://leetcode.com/problems/missing-number/) | XOR properties |
| Single Number II | LeetCode | [Link](https://leetcode.com/problems/single-number-ii/) | Bit manipulation |
| Maximum XOR of Two Numbers in an Array | LeetCode | [Link](https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/) | Trie, Bit manipulation |
