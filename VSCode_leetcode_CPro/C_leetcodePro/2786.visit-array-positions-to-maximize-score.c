/*
 * @lc app=leetcode.cn id=2786 lang=c
 * @lcpr version=30203
 *
 * [2786] 访问数组中的位置使分数最大
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start

#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
//上传失败

// 函数判断是否为奇数
bool isOdd(int num){
    return num % 2 != 0;
}


long long maxScore(int* nums, int numsSize, int x){
    long long *dp = (long long *)calloc(numsSize, sizeof(long long));

    //初始化dp数组
    for(int i =0; i < numsSize; i++){
        dp[i] = LLONG_MIN;
    }

    dp[0] = nums[0];
    long long score = nums[0];

    for(int i =0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            long long potentialScore = dp[i] + nums[j];
            if(isOdd(nums[i]) != isOdd(nums[j])){
                potentialScore -= x;
            }

            if(potentialScore > dp[j]){
                dp[j] = potentialScore;
                    if(dp[j] > score){
                        score = dp[j];

                    }
            }
        }
    }
    free(dp);
    return score;
}
// @lc code=end



/*
// @lcpr case=start
// [2,3,6,1,9,2]\n5\n
// @lcpr case=end

// @lcpr case=start
// [2,4,6,8]\n3\n
// @lcpr case=end

 */

