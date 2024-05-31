/*
 * @lc app=leetcode.cn id=419 lang=c
 * @lcpr version=30203
 *
 * [419] 甲板上的战舰
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start


int countBattleships(char** board, int boardSize, int* boardColSize){
    int m = boardSize;
    int n = boardColSize[0];
    int count = 0;
    int i = 0, j = 0;

    for( i = 0; i < m; i++)
    {
        for( j = 0; j < n; j++)
        {
            if((board[i][j] == 'X') && (i ==0 || board[i - 1][j] == '.') &&
            (j == 0 || board[i][j - 1] == '.')){
                count++;
            }
        }
    }
    return count;
}
// @lc code=end



/*
// @lcpr case=start
// [["X",".",".","X"],[".",".",".","X"],[".",".",".","X"]]\n
// @lcpr case=end

// @lcpr case=start
// [["."]]\n
// @lcpr case=end

 */

