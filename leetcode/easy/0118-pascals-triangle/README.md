# Pascal's Triangle

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `numRows`, return the first numRows of  **Pascal's triangle**.

In  **Pascal's triangle**, each number is the sum of the two numbers directly above it as shown:

 

 **Example 1:** 

```
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

```

 **Example 2:** 

```
Input: numRows = 1
Output: [[1]]

```

 

 **Constraints:** 

- 1 <= numRows <= 30

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.6 MB (beats 89.99%)  
**Submitted:** 2026-08-03T16:05:52.540Z  

```cpp
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        for (int i = 0; i < numRows; i++) {
            // Row 'i' has (i + 1) elements, initialized to 1
            vector<int> row(i + 1, 1);

            // Fill in the middle values using the previous row
            for (int j = 1; j < i; j++) {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }

            triangle.push_back(row);
        }

        return triangle;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/pascals-triangle/)