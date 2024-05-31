/*
 * @lc app=leetcode.cn id=2982 lang=cpp
 * @lcpr version=30202
 *
 * [2982] 找出出现至少三次的最长特殊子字符串 II
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
/*
https://doocs.github.io/leetcode/lc/2982/#_3  
二分查找+滑动窗口
*/
class Solution {
public:
    int maximumLength(string s) {
        int n = s.size();
        int l = 0, r = n;
        auto check = [&](int x){
            int cnt[26]{};
            for(int i = 0; i < n;){
                int j = i + 1;
                while(j < n && s[j] == s[i]){
                    ++j;
                }
                int k = s[i] - 'a';
                cnt[k] += max(0, j - i - x + 1);
                if(cnt[k] >= 3){
                    return true;
                }
                i = j;
            }
            return false;

        };

        while(l < r){
            int mid = (l + r + 1) >> 1;
            if(check(mid)){
                l = mid;
            }else{
                r = mid - 1;
            }
        }
        return l == 0? -1 : l;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "aaaa"\n
// @lcpr case=end

// @lcpr case=start
// "abcdef"\n
// @lcpr case=end

// @lcpr case=start
// "abcaba"\n
// @lcpr case=end

 */

