/*

================================================================================================================

| Problem:        [Problem Name]

| Platform:       [e.g., Codeforces]

| Problem ID:     [e.g., 1337A]

| URL:

| Difficulty:     [e.g., 800]

| Tags:           [e.g., math, constructive algorithms]

================================================================================================================

Problem Summary
Solution Logic
Complexity Analysis
Time Complexity: O(1) per test case, as the solution involves a constant number of arithmetic operations and output statements.

Space Complexity: O(1), as only a few variables are stored to hold the input and output values.

Learnings & Pitfalls
This problem highlights a key strategy for constructive algorithm problems: finding any valid solution is sufficient. It is often unnecessary to search for an optimal or complex solution.

The simplest choice, often at the boundaries of the given constraints, can be the most effective. My initial thought was to explore complex ranges, but this was an over-complication.

================================================================================================================
*/

#include <iostream>

void solve() {
    long long a, b, c, d;
    std::cin >> a >> b >> c >> d;
    // As per the logic above, x=b, y=c, z=c is a guaranteed valid triangle.
    std::cout << b << " " << c << " " << c << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}