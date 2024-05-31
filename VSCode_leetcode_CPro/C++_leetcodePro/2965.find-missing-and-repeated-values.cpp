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
        int n = grid.size();
        bool sta[2510];
        memset(sta, 0, sizeof sta);
        vector<int> v;
        for(int i = 0; i <n; i++){
            for(int j = 0; j < n; j++){
                if(!sta[grid[i][j]]){
                    sta[grid[i][j]] =  1;
                }else{
                    v.push_back(grid[i][j]);
                }
            }
        }

        for(int i = 1; i <= n*n ; i++){
            if(!sta[i]){
                v.push_back(i);
                break;
            }
        }
        return v;

        
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

