/*
 * @lc app=leetcode.cn id=2965 lang=cpp
 * @lcpr version=30203
 *
 * [2965] 找出缺失和重复的数字
 */


// @lcpr-template-start
using namespace std;
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
// @lcpr-template-end
// @lc code=start
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> arr;
        vector<int> ans;
        int n= grid.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
            arr.push_back(grid[i][j]);
        }
        sort(arr.begin(), arr.end());

        for(int i = 0; i + 1 < arr.size(); i++)
        {
            if(arr[i] == arr[i+1])
            ans.push_back(arr[i]);
        }

        for(int i = 1; i <= n*n; i++){
            if(find(arr.begin(), arr.end(), i) == arr.end())
                ans.push_back(i);

        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[1,3],[2,2]]\n
// @lcpr case=end

// @lcpr case=start
// [[9,1,7],[8,9,2],[3,4,6]]\n
// @lcpr case=end

 */

