"""
给你一个只包含 '(' 和 ')' 的字符串，找出最长有效（格式正确且连续）括号子串的长度。
"""

class Solution:
    def longestValidParentheses(self, s: str) -> int:
        if len(s) < 2: return 0
        h = []
        h.append(s[0])
        for i in s[1:]:
            if len(h) > 0 and (i == ")" and h[-1] == "("):
                h.pop(-1)
            else:
                h.append(i)
        return len(s) - len(h)

s = Solution()
print(s.longestValidParentheses(")()())"))


