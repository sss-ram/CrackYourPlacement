class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        l = []
        for i in range(len(nums)):
            if nums[abs(nums[i])-1]<0:
                l.append(abs(nums[i]))
            else:
                nums[abs(nums[i])-1] *= -1
        return l
