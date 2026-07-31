# Longest Consecutive Sequence

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an unsorted array of integers `nums`, return  *the length of the longest consecutive elements sequence.* 

You must write an algorithm that runs in `O(n)` time.

 

 **Example 1:** 

```
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

```

 **Example 2:** 

```
Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9

```

 **Example 3:** 

```
Input: nums = [1,0,1,2]
Output: 3

```

 

 **Constraints:** 

- 0 <= nums.length <= 105
- -109 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 83 ms (beats 48.22%)  
**Memory:** 89.2 MB (beats 14.47%)  
**Submitted:** 2026-07-31T20:34:18.689Z  

```cpp
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> arr;
        unordered_set<int> st;
        int n = nums.size();
        int longest=1;
        

        if (n==0) return 0;

        for (int i=0 ; i<n ; i++) {
            st.insert(nums[i]);
        }

        for ( auto it:st) {
            if (st.find(it-1) == st.end()) {
                int cnt = 1;
                int x = it;

                while(st.find(x+1) != st.end()){
                    x=x+1;
                    cnt = cnt+1;

                }

                longest = max(longest , cnt);


            }
        }

        return longest;
    }
};
        

```

---

[View on LeetCode](https://leetcode.com/problems/longest-consecutive-sequence/)