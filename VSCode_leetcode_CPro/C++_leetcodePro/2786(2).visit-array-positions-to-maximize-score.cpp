/*
 * @lc app=leetcode.cn id=2786 lang=cpp
 * @lcpr version=30203
 *
 * [2786] 访问数组中的位置使分数最大
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
    long long maxScore(vector<int>& nums, int x) {
        const long long INF = 1000000000000ll;
        const int n = nums.size();

        long long f = -INF, g = -INF;

        if(nums[0] % 2 == 0) 
            f = nums[0];
        else
            g = nums[0];

        for(int i = 1; i < n; i++){
            if(nums[i] % 2 == 0)
                f = max(f, g - x) + nums[i];
            else 
                g = max(g, f - x)  + nums[i];
        }

        return max(f,g);
    }
};
// @lc code=end



/*
// @lcpr case=start
// [2,3,6,1,9,2]\n5\n
// @lcpr case=end

// @lcpr case=start
// [2,4,6,8]\n3\n
// @lcpr case=end

 */

