/*
 * @lc app=leetcode.cn id=2813 lang=cpp
 * @lcpr version=30203
 *
 * [2813] 子序列最大优雅度
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
算法
反悔贪心
这个题看数据范围可以比较容易想到是个带反悔的贪心，我们分析一下目标函数total_profit+distinct_categories22
。可以这样来考虑：先选择profit最大的topk，然后再考虑怎么进行替换，让后面的平方项更大。

分析
按照profit优先的原则先构建一个长度为k的子序列，计算一个初始的优雅度。很显然，如果往初始长度为k
的子序列中加入一个重复的category，那么由于序列中所有的profit都不会小于新加入item
的profit，而distinct_categories也没有增大，没有任何收益。因此只能用一个从未出现的category
来进行一换一，看看目标函数能不能增大。

贪心
所有items按照profit降序排列，先计算一个初始的优雅度ans
，将这个序列的category都存入哈希集合visited中，重复出现的category
对应的profit压入到一个栈stk中。此时由于是按照profit
降序来遍历的，栈顶的profit一定是此时序列中对目标函数最没有价值的item
对应的profit。当stk不为空时，说明当前序列中有重复的类别，在当前item
的category没有出现在visited中的情况下进行一换一。stk弹出最没有价值的profit
，visited加入此时item的category，看看新得到的优雅度能不能比ans大。
重复进行上述的一换一操作，维护优雅度的最大值即可。

复杂度分析
排序的时间复杂度是瓶颈，后面的一换一替换操作是线性的，因此时间复杂度为O(nlog2n)(2)
。开辟了栈stk以及哈希集合visited，最多可以存储n个元素，额外空间复杂度为O(n)()。

*/
class Solution {
public:
    long long findMaximumElegance(vector<vector<int>>& items, int k) {
        //先按利润从大到小排序
        sort(items.begin(), items.end(), [](const auto &a, const auto &b){
            return a[0] > b[0];
        });

        long long total_profit = 0, ans = 0;
        int length = items.size();
        unordered_set<int> vis;
        stack<int> same_element; //重复类别的利润
        for(int i = 0; i < length; i++){
            if(i < k){ //先贪心选中前k个
                total_profit+= items[i][0]; //计算总利润
                if(!vis.insert(items[i][1]).second) 
                {
                    same_element.push(items[i][0]); //非第一个的重复类别利润，后面用作替换
                }
            }else if(!same_element.empty() && vis.insert(items[i][1]).second){//对于候选替换数，如果存在可替换的重复类别，且当前类别没出现过
                total_profit += (items[i][0] - same_element.top()); //进行替换
                same_element.pop();
            }
            //动态规划，记录最大值
            ans = max(ans, total_profit + (long long)pow(vis.size(), 2));
        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[3,2],[5,1],[10,1]]\n2\n
// @lcpr case=end

// @lcpr case=start
// [[3,1],[3,1],[2,2],[5,3]]\n3\n
// @lcpr case=end

// @lcpr case=start
// [[1,1],[2,1],[3,1]]\n3\n
// @lcpr case=end

 */

