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
        int n = nums.size();
        long long even,odd;
        even = nums[0] + ((nums[0] % 2 == 0)? 0 :-x);
        odd = nums[0] + ((nums[0] % 2 == 0)? -x:0);

        for(int i = 1; i < n; ++i){
            if(nums[i] % 2){
                odd = nums[i] + max(even - x, odd);
            }else{
                even = nums[i] + max(even, odd - x);
            }
        }
        return max(odd, even);
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

