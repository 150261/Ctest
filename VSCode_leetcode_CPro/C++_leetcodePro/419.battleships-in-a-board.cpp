/*
 * @lc app=leetcode.cn id=419 lang=cpp
 * @lcpr version=30203
 *
 * [419] 甲板上的战舰
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
    int countBattleships(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        int count = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n ; j++){
                if( (board[i][j] == 'X') && (i ==0 || board[i - 1][j] == '.')
                && (j == 0 || board[i][j - 1] == '.')){
                    count++;
                }
            }

        }
        return count;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [["X",".",".","X"],[".",".",".","X"],[".",".",".","X"]]\n
// @lcpr case=end

// @lcpr case=start
// [["."]]\n
// @lcpr case=end

 */

