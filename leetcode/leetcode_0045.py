"""
给定一个长度为 n 的 0 索引整数数组 nums。初始位置为 nums[0]。
每个元素 nums[i] 表示从索引 i 向前跳转的最大长度。换句话说，如果你在 nums[i] 处，你可以跳转到任意 nums[i + j] 处:
    0 <= j <= nums[i] 
    i + j < n
返回到达 nums[n - 1] 的最小跳跃次数。生成的测试用例可以到达 nums[n - 1]。
"""

class Solution:
    def jump(self, nums: list[int]) -> int:
        self.nums = nums
        self.len = len(nums)
        self.min = len(nums)
        self.solve(0, 0)
        return self.min

    def solve(self, p, n):
        if p > self.len - 1: return
        elif p == self.len - 1: self.min = min(self.min, n)
        for i in range(self.nums[p]): self.solve(p + i + 1, n + 1)

s = Solution()
m = s.jump([5,6,4,4,6,9,4,4,7,4,4,8,2,6,8,1,5,9,6,5,2,7,9,7,9,6,9,4,1,6,8,8,4,4,2,0,3,8,5])
print(m)
