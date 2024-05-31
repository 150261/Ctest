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
ID982: 找出出现至少三次的最长特殊子字符串 II
C++
超出时间限制
*/
class Solution {
public:
    //判断是否是特殊字符
    bool judege(string s){
        for(int k = 1; k < s.size(); k++){
            if(s[k] != s[k - 1])
            return false;
        }

        return true;
    }

    int maximumLength(string s) {
        unordered_map<string,int> mp;
        int maxL = -1;
        //遍历子字符串
        for(int i = 0; i < s.size(); i++){
            for(int j = i; j < s.size(); j++){
                string q =  s.substr(i, j - i + 1); 
                //判断是否是特殊字符串
                if(judege(q))
                    mp[q]++;
            }

        }
        for(auto& v: mp){
            //出现次数
            if(v.second >= 3)
                maxL = max(maxL, (int)v.first.size());
        }
        return maxL;
        
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

