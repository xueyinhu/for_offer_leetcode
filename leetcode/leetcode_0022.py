""" 
数字 n 代表生成括号的对数，请你设计一个函数，用于能够生成所有可能的并且有效的 括号组合。
"""

class Solution:
    def generateParenthesis(self, n: int) -> list[str]:
        self.r = []
        self.solve(n, n, "")
        return self.r

    def solve(self, n_l, n_r, s):
        if n_l > 0: self.solve(n_l - 1, n_r, s + "(")
        if n_l < n_r and n_r > 0: self.solve(n_l, n_r - 1, s + ")")
        if n_l + n_r == 0: self.r.append(s)

n = 3

s = Solution()
r = s.generateParenthesis(n)

print(r)
