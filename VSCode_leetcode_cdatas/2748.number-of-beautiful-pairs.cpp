/*
 * @lc app=leetcode.cn id=2748 lang=cpp
 * @lcpr version=30204
 *
 * [2748] 美丽下标对的数目
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
    int countBeautifulPairs(vector<int>& nums) {
        const int n = nums.size();
        int c[10];
        memset(c, 0, sizeof(c));

        bool v[10][10];
        memset(v, 0, sizeof(v));
        for(int i = 1; i < 10; i++)
            for(int j = i; j <  10; j++)
                if(gcd(i,j) == 1)
                    v[i][j] = v[j][i] = true;
        

        int ans = 0;
        for(int x: nums) {
            int r = x %10;
            for(int i = 1; i < 10; i++)
                if(v[i][r])
                    ans += c[i];


            while(x >= 10)
                x /= 10;
            ++c[x];
        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [2,5,1,4]\n
// @lcpr case=end

// @lcpr case=start
// [11,21,12]\n
// @lcpr case=end

 */

