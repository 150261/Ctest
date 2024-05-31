/*
 * @lc app=leetcode.cn id=2938 lang=cpp
 * @lcpr version=30203
 *
 * [2938] 区分黑球与白球
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
    long long minimumSteps(string s) {
        int black = 0;
        long long steps = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '0')
                steps += black;
            else
                black++;
        }
        return steps;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "101"\n
// @lcpr case=end

// @lcpr case=start
// "100"\n
// @lcpr case=end

// @lcpr case=start
// "0111"\n
// @lcpr case=end

 */

