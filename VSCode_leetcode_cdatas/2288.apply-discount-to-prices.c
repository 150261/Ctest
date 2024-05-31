/*
 * @lc app=leetcode.cn id=2288 lang=c
 * @lcpr version=30203
 *
 * [2288] 价格减免
 */


// @lcpr-template-start
#include <stdbool.h>
// @lcpr-template-end
// @lc code=start
char* discountPrices(char* sentence, int discount) {
    char *output;
    char *word;
    char nums[10];
    int i =0, j = 0;
    bool flag = false;
    float disc = 0;

    word = strtok(sentence, " ");
    while(word != NULL){
        if(word[0] == '$'){
            for(i = 1; i < strlen(word); ++i){
                if(word[i] >= '0' && word[i] <= '9'){
                    nums[j] = word[i];
                    j++;
                    flag = true;
                }else{
                   flag = false;
                    break;
                }
            }
            if(flag){
                memset(word, 0, sizeof(word));

                disc = atoi(nums) * (100 - discount) / 100.0;
                sprintf(word, "$%.2f", disc);
            }
        }

        strcpy  (output,word);
  //      output++;
  //      *output = ' ';
        word = strtok(NULL, " ");
    }

    return output;
 }
// @lc code=end



/*
// @lcpr case=start
// "there are $1 $2 and 5$ candies in the shop"\n50\n
// @lcpr case=end

// @lcpr case=start
// "1 2 $3 4 $5 $6 7 8$ $9 $10$"\n100\n
// @lcpr case=end

 */

