/*
 * @lc app=leetcode.cn id=1103 lang=c
 * @lcpr version=30203
 *
 * [1103] 分糖果 II
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* distributeCandies(int candies, int num_people, int* returnSize) {
    *returnSize = num_people;
    int *ans = (int *)malloc(num_people  * sizeof(int));
    memset(ans, 0, num_people*sizeof(int));
    int size = 1;

    while(candies){
        for(int i = 0; i < num_people; i++){
            if(candies - size > 0){
                ans[i] += size;
                candies -= size;
                size++;
            }else{
                ans[i] += candies;
                candies = 0;
                break;
            }       
        }
    }


    return ans;
}
// @lc code=end



/*
// @lcpr case=start
// 7\n4\n
// @lcpr case=end

// @lcpr case=start
// 10\n3\n
// @lcpr case=end

 */

