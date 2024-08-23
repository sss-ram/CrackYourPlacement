class Solution:
    def productExceptSelf(self, nums):
        #code here
        c = 0
        p = 1
        for i in nums:
            if i == 0:
                c += 1
            else:
                p *= i
        if c >= 2:
            ans = [0] * len(nums)
            return ans
        ans = []
        if c > 0:
            for i in nums:
                if i != 0:
                    ans.append(0)
                else:
                    ans.append(p)
        else:
            for i in nums:
                ans.append(int(p/i))
        return ans
