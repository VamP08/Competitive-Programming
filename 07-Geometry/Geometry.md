
## **Mathematics: Computational Geometry**

### **Conceptual Overview**

Computational geometry is a branch of computer science dedicated to studying algorithms that can be stated in terms of geometry. In competitive programming, this involves problems on points, lines, and polygons in 2D space. These problems often require careful implementation and handling of floating-point precision errors. \[3\]

### **Key Concepts**

* **Points and Vectors:** Representing points using coordinates (x, y) and performing vector operations like addition, subtraction, dot product, and cross product.  
* **Dot Product:** Used to find the angle between two vectors. a · b \= |a||b|cos(θ).  
* **Cross Product:** Used to determine the orientation of three points (clockwise, counter-clockwise, or collinear) and to calculate the signed area of a triangle or polygon. a x b \= |a||b|sin(θ).  
* **Line Segment Intersection:** Determining if two line segments intersect, often using orientation tests based on the cross product. \[3\]  
* **Convex Hull:** The smallest convex polygon that contains a given set of points. Common algorithms include:  
  * **Graham Scan:** O(NlogN) complexity, dominated by sorting points by angle.  
  * **Monotone Chain (Andrew's Algorithm):** O(NlogN) complexity, sorts points by coordinates and builds the upper and lower hulls separately. \[3\]  
* **Sweep Line Algorithm:** An algorithmic paradigm where a vertical line is "swept" across the plane, processing geometric objects at event points. Used for problems like finding the closest pair of points or line segment intersections.

### **Implementation Template (Point/Vector Operations)**

C++

\#**include** \<iostream\>  
\#**include** \<vector\>  
\#**include** \<cmath\>  
\#**include** \<algorithm\>

struct Point {  
    long long x, y;  
};

// Cross product of vectors OA and OB  
long long cross\_product(Point O, Point A, Point B) {  
    return (A.x \- O.x) \* (B.y \- O.y) \- (A.y \- O.y) \* (B.x \- O.x);  
}

// Monotone Chain Convex Hull Algorithm  
std::vector\<Point\> convex\_hull(std::vector\<Point\>& points) {  
    int n \= points.size();  
    if (n \<= 2) return points;  
    sort(points.begin(), points.end(),(Point a, Point b) {  
        return a.x \< b.x |

| (a.x \== b.x && a.y \< b.y);  
    });  
    std::vector\<Point\> hull;  
    for (int i \= 0; i \< n; \++i) {  
        while (hull.size() \>= 2 && cross\_product(hull\[hull.size()\-2\], hull.back(), points\[i\]) \<= 0) {  
            hull.pop\_back();  
        }  
        hull.push\_back(points\[i\]);  
    }  
    for (int i \= n \- 2, t \= hull.size() \+ 1; i \>= 0; i--) {  
        while (hull.size() \>= t && cross\_product(hull\[hull.size()\-2\], hull.back(), points\[i\]) \<= 0) {  
            hull.pop\_back();  
        }  
        hull.push\_back(points\[i\]);  
    }  
    hull.pop\_back(); // Remove duplicate start point  
    return hull;  
}

### **Real-World Applications**

* **Computer Graphics:** Rendering 2D and 3D scenes, collision detection.  
* **Geographic Information Systems (GIS):** Analyzing spatial data, such as finding all locations within a certain radius.  
* **Robotics:** Path planning and obstacle avoidance.  
* **Computer-Aided Design (CAD):** Designing and modeling objects.

### **Curated Practice Problems**

| Problem Name | Platform | Link | Key Concepts |
| :---- | :---- | :---- | :---- |
| Erect the Fence | LeetCode | [Link](https://leetcode.com/problems/erect-the-fence/) | Convex Hull |
| Closest Pair of Points | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/closest-pair-of-points-using-divide-and-conquer-algorithm/) | Sweep Line / Divide and Conquer |
| Line Segment Intersection | GeeksforGeeks | [Link](https://www.geeksforgeeks.org/check-if-two-given-line-segments-intersect/) | Cross Product, Orientation |
| Polygon Area | CSES | [Link](https://cses.fi/problemset/task/2191) | Shoelace Formula |
| Point Location Test | CSES | [Link](https://cses.fi/problemset/task/2190) | Cross Product, Orientation |
| Convex Hull | CSES | [Link](https://cses.fi/problemset/task/2195) | Convex Hull |
| Polygon Lattice Points | CSES | [Link](https://cses.fi/problemset/task/2192) | Pick's Theorem, Shoelace Formula |
| Minimum Euclidean Distance | CSES | [Link](https://cses.fi/problemset/task/2194) | Closest Pair of Points |
| Ancient Berland Circus | Codeforces | [Link](https://codeforces.com/problemset/problem/1/C) | Geometry, Math \[7\] |
| Commentator problem | Codeforces | [Link](https://codeforces.com/problemset/problem/2/C) | Geometry \[7\] |
