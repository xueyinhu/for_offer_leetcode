class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        self.num = 0
        self.m = m
        self.n = n
        self.findPath(0, 0)
        return self.num

    def findPath(self, h, w):
        if h == self.m - 1 or w == self.n - 1:
            self.num = self.num + 1
            return
        self.findPath(h + 1, w)
        self.findPath(h, w + 1)

m = 3
n = 2

s = Solution()
print(s.uniquePaths(m, n))



