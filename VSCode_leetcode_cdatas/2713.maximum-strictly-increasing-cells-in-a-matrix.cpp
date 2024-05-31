/*
 * @lc app=leetcode.cn id=2713 lang=cpp
 * @lcpr version=30204
 *
 * [2713] 矩阵中严格递增的单元格数
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

#define PII pair<int, int>
#define X first 
#define Y second 

class Solution {
public:
    int maxIncreasingCells(vector<vector<int>>& mat) {
        const int m = mat.size(), n = mat[0].size();

        vector<PII> p(m * n);
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                p[i * n + j] = make_pair(i, j);


        sort(p.begin(), p.end(), [&](const PII &a, const PII &b){
            return mat[a.X][a.Y] > mat[b.X][b.Y];
        }};
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[3,1],[3,4]]\n
// @lcpr case=end

// @lcpr case=start
// [[1,1],[1,1]]\n
// @lcpr case=end

// @lcpr case=start
// [[3,1,6],[-9,5,7]]\n
// @lcpr case=end

 */

