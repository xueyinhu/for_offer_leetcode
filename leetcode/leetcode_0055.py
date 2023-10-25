class Solution:
    def canJump(self, nums: list[int]) -> bool:
        self.cl = nums
        self.len = len(nums) - 1
        self.bl = [False] * len(nums)
        self.jump(0)
        print(self.bl)
        return self.bl[self.len]

    def jump(self, i):
        self.bl[i] = True
        for h in range(0, self.cl[i]):
            j = self.cl[i] - h
            if i + j >= self.len:
                self.bl[self.len] = True
                return
            if self.bl[i + j] == False:
                self.jump(i + j)

arr = [2,3,1,1,4]

s = Solution()
print(s.canJump(arr))

