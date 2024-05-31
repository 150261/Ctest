/*
 * @lc app=leetcode.cn id=2288 lang=cpp
 * @lcpr version=30203
 *
 * [2288] 价格减免
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
    string discountPrices(string sentence, int discount) {
        //流操作
        stringstream input(sentence);
        stringstream output;//使用stringstream构建最终字符串便于管理空格

        string  word;
        bool firstWord = true;

        //如果是空格 分割直接>> 即可， 其他情况要考虑结合geLine使用
        while(input >> word){
            if(firstWord)
                firstWord = false;
            else
                output << " "; //在单词之间添加空格

            if(word[0] == '$' && word.size() > 1 &&
                all_of(word.begin() + 1, word.end(), ::isdigit)){
                    string num = word.substr(1);
                    double price = stod(num); //使用stod转换字符串到double
                    double discountPrices = price * (100 - discount) / 100.0;
                    output << fixed << setprecision(2); //设置小数点后两位
                    output << "$" << discountPrices; //添加转换后的价格到输出流
                }else{
                    output << word;
                }
        }
        return output.str();

    }
};
// @lc code=end



/*
// @lcpr case=start
// "there are $1 $2 and 5$ candies in the shop"\n50\n
// @lcpr case=end

// @lcpr case=start
// "1 2 $3 4 $5 $6 7 8$ $9 $10$"\n100\n
// @lcpr case=end

 */

