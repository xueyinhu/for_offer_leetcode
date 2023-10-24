class Solution:
    def trap(self, height: list[int]) -> int:
        self.arr = height
        self.sum = 0
        left = 0
        right = len(height) - 1
        for i in range(1, len(height)):
            if (height[i] >= height[left]): 
                self.compute(left, i, height[left])
                left = i
        print(self.sum)
        for j in range(2, len(height) + 1):
            i = len(height) - j
            if (height[i] > height[right]):
                self.compute(i, right, height[right])
                right = i
        return self.sum

    def compute(self, left, right, value):
        print(left, right, value)
        if value == 0: return
        for i in range(left + 1, right):
            self.sum = self.sum + (value - self.arr[i])


s = Solution()
t = [4,2,3]
print(s.trap(t))

class Solution_LC:
    def trap(self, height: list[int]) -> int:
        if not height:
            return 0
        
        n = len(height)
        leftMax = [height[0]] + [0] * (n - 1)
        for i in range(1, n):
            leftMax[i] = max(leftMax[i - 1], height[i])

        rightMax = [0] * (n - 1) + [height[n - 1]]
        for i in range(n - 2, -1, -1):
            rightMax[i] = max(rightMax[i + 1], height[i])

        ans = sum(min(leftMax[i], rightMax[i]) - height[i] for i in range(n))
        return ans

