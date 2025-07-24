
## **Data Structures: Set & Map**

### **Conceptual Overview**

Sets and Maps are powerful associative containers that store elements efficiently, enabling fast lookups, insertions, and deletions.

* **Set (std::set):** A container that stores a collection of **unique** elements in a sorted order.  
* **Map (std::map):** Stores key-value pairs, where each key is **unique** and kept in sorted order. It's essentially a dictionary.

Both are typically implemented using self-balancing binary search trees (like Red-Black Trees), guaranteeing logarithmic time complexity for most operations.

### **Key Operations & Complexity**

For a set or map with N elements:

| Operation | C++ Syntax | Big-O | Description |
| :---- | :---- | :---- | :---- |
| Insertion | s.insert(val) / m\[key\] \= val | O(logN) | Adds an element/key-value pair. |
| Deletion | s.erase(val) / m.erase(key) | O(logN) | Removes an element/key. |
| Search | s.find(val) / m.find(key) | O(logN) | Checks for the existence of an element/key. |
| Lower Bound | s.lower\_bound(val) | O(logN) | Finds the first element ≥ val. |
| Upper Bound | s.upper\_bound(val) | O(logN) | Finds the first element \> val. |

**Unordered Variants:** C++ also offers std::unordered\_set and std::unordered\_map, which use hash tables. They provide average-case O(1) complexity but do not keep elements sorted.

### **Real-World Applications**

* **Frequency Counting:** A map is perfect for counting occurrences of items.  
* **Maintaining Uniqueness:** A set is ideal for storing items without duplicates.  
* **Database Indexing:** The principles of maps are used to build database indexes for fast lookups.  
* **Dictionaries:** Maps are used to implement dictionaries for translation.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Data Structure |
| :---- | :---- | :---- | :---- |
| Contains Duplicate | LeetCode | [Link](https://leetcode.com/problems/contains-duplicate/) | Set |
| Two Sum | LeetCode | [Link](https://leetcode.com/problems/two-sum/) | Map |
| Group Anagrams | LeetCode | [Link](https://leetcode.com/problems/group-anagrams/) | Map |
| Top K Frequent Elements | LeetCode | [Link](https://leetcode.com/problems/top-k-frequent-elements/) | Map & Priority Queue |
| Odd Man Out | Kattis | [Link](https://open.kattis.com/problems/oddmanout) | Set |
| Babelfish | Kattis | [Link](https://open.kattis.com/problems/babelfish) | Map |
| Longest Consecutive Sequence | LeetCode | [Link](https://leetcode.com/problems/longest-consecutive-sequence/) | Set |
| Insert Delete GetRandom O(1) | LeetCode | [Link](https://leetcode.com/problems/insert-delete-getrandom-o1/) | Map & Vector |
| Subarray Sums II | CSES | [Link](https://cses.fi/problemset/task/1661) | Map |
| Distinct Numbers | CSES | [Link](https://cses.fi/problemset/task/1621) | Set |
| Missing Coin Sum | CSES | [Link](https://cses.fi/problemset/task/2183) | Set/Sorting |
| Concert Tickets | CSES | [Link](https://cses.fi/problemset/task/1091) | Multiset |
