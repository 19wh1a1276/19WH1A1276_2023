class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        n = len(nums)
        cnt = 0
        for i in nums:
            if i != val :
                nums[cnt] = i
                cnt += 1
        nums = nums[:cnt] + ['_']*(n-cnt)
        return cnt