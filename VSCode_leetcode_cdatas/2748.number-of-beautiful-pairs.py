#
# @lc app=leetcode.cn id=2748 lang=python3
# @lcpr version=30204
#
# [2748] 美丽下标对的数目
#


# @lcpr-template-start

# @lcpr-template-end
# @lc code=start
class Solution:
    def countBeautifulPairs(self, nums: List[int]) -> int:
        def gcd(a, b):
            if b == 0:
                return a
            return gcd(b, a % b)


        count = 0
        for i in range(len(nums) -1 ):
            for j in range(i + 1, len(nums)):
                first_digit = int(str(nums[i])[0])
                last_digit = int(str(nums[j])[-1])
                if gcd(first_digit, last_digit) == 1:
                    count += 1

        return count

# @lc code=end



#
# @lcpr case=start
# [2,5,1,4]\n
# @lcpr case=end

# @lcpr case=start
# [11,21,12]\n
# @lcpr case=end

#

