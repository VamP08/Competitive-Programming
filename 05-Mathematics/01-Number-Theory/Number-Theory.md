
## **Mathematics: Number Theory**

### **Conceptual Overview**

Number theory is a branch of mathematics that deals with the properties and relationships of integers. In competitive programming, a solid understanding of number theory is essential for solving a wide range of problems that involve mathematical calculations, often with large numbers and modular arithmetic constraints.

### **Key Concepts**

* **Primality Test:** Algorithms to determine if a number is prime. A simple approach is trial division up to N​, which runs in O(N​). \[3\]  
* **Sieve of Eratosthenes:** An efficient algorithm to find all prime numbers up to a specified integer N. It has a time complexity of O(NloglogN).  
* **Prime Factorization:** Decomposing a number into a product of its prime factors.  
* **GCD and LCM:**  
  * **Greatest Common Divisor (GCD):** The largest positive integer that divides two or more integers. The Euclidean algorithm computes this in O(log(min(a,b))).  
  * **Least Common Multiple (LCM):** The smallest positive integer that is a multiple of two or more integers. It can be calculated using the formula: lcm(a, b) \= (a \* b) / gcd(a, b).  
* **Modular Arithmetic:** A system of arithmetic for integers where numbers "wrap around" upon reaching a certain value—the modulus.  
  * **Modular Exponentiation (Binary Exponentiation):** An algorithm to compute ab(modm) in O(logb) time.  
  * **Modular Multiplicative Inverse:** Finding an integer x such that (a⋅x)≡1(modm). It can be found using the Extended Euclidean Algorithm if a and m are coprime.  
* **Chinese Remainder Theorem:** A theorem that provides a unique solution to a system of simultaneous congruences with coprime moduli. \[3\]

### **Implementation Templates (C++)**

C++

\#**include** \<vector\>  
\#**include** \<numeric\>

// Sieve of Eratosthenes to find all primes up to N  
std::vector\<bool\> sieve(int n) {  
    std::vector\<bool\> is\_prime(n \+ 1, true);  
    is\_prime \= is\_prime\[1\] \= false;  
    for (int p \= 2; p \* p \<= n; p++) {  
        if (is\_prime\[p\]) {  
            for (int i \= p \* p; i \<= n; i \+= p)  
                is\_prime\[i\] \= false;  
        }  
    }  
    return is\_prime;  
}

// Euclidean Algorithm for GCD  
long long gcd(long long a, long long b) {  
    while (b) {  
        a %= b;  
        std::swap(a, b);  
    }  
    return a;  
}

// Modular Exponentiation (a^b % m)  
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

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| T-primes | Codeforces | [Link](https://codeforces.com/problemset/problem/230/B) | Sieve, Primality Test |
| Almost Prime | Codeforces | [Link](https://codeforces.com/problemset/problem/26/A) | Sieve, Prime Factorization |
| Summation of Primes | Project Euler | [Link](https://projecteuler.net/problem=10) | Sieve of Eratosthenes \[4\] |
| Common Divisors | CSES | [Link](https://cses.fi/problemset/task/1081) | Divisors, Sieve |
| Exponentiation | CSES | [Link](https://cses.fi/problemset/task/1095) | Modular Exponentiation |
| Exponentiation II | CSES | [Link](https://cses.fi/problemset/task/1712) | Modular Exponentiation, Euler's Totient |
| Divisor Analysis | CSES | [Link](https://cses.fi/problemset/task/2182) | Prime Factorization, Modular Arithmetic |
| Counting Divisors | CSES | [Link](https://cses.fi/problemset/task/1713) | Sieve, Prime Factorization |
| Prime Multiples | CSES | [Link](https://cses.fi/problemset/task/2185) | Inclusion-Exclusion |
| Josephus Problem I | CSES | [Link](https://cses.fi/problemset/task/2162) | Number Theory, Simulation |
| Largest Prime Factor | Project Euler | [Link](https://projecteuler.net/problem=3) | Prime Factorization \[4\] |
| Smallest Multiple | Project Euler | [Link](https://projecteuler.net/problem=5) | LCM, Prime Factorization \[4\] |
