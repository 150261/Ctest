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
        if(grid.empty())
            return {};
        int n = grid.size();
        int sum = 0, a = 0, b = 0;
        unordered_map<int, int> hash;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
            {
                int num = grid[i][j];
                hash[num]++;
                sum += num;
                if(hash[num] == 2)
                    a = num;
            }
        if(sum > n * n * (n * n + 1) / 2)
            b = a - (sum - n * n * (n * n + 1) / 2);
        else
            b = a + (n * n * (n * n + 1) / 2 - sum );

            return {a, b};

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

