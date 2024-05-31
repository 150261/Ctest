/*
 * @lc app=leetcode.cn id=522 lang=cpp
 * @lcpr version=30203
 *
 * [522] 最长特殊序列 II
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
    int findLUSlength(vector<string>& strs) {
        auto is_subseq = [] (const string& s, const string& t) ->bool{
            int pt_s =0, pt_t = 0;
            while(pt_s<s.size() && pt_t < t.size()){
                if(s[pt_s] == t[pt_t])
                    ++pt_s;
                    ++pt_t;
            }
            return pt_s == s.size();

        };
        int n = strs.size();
        int ans = -1;
        for(int i = 0; i < n; ++i){
            bool check = true;
            for(int j = 0; j < n; ++j){
                if(i != j && is_subseq(strs[i], strs[j])){
                    check = false;
                    break;
                }//只要找到一个strs[j],strs[i]是其子序列直接结束
            }
            if(check) ans = max(ans, static_cast<int>(strs[i].size()));
        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// ["aba","cdc","eae"]\n
// @lcpr case=end

// @lcpr case=start
// ["aaa","aaa","aa"]\n
// @lcpr case=end

 */

