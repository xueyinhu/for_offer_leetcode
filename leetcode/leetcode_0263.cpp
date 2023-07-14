/** 263. 丑数
 * 丑数 就是只包含质因数 2、3 和 5 的正整数。
 * 给你一个整数 n ，请你判断 n 是否为 丑数 。如果是，返回 true ；否则，返回 false 。
 * 
 * -231 <= n <= 231 - 1
 */

class Solution {
public:
    bool isUgly(int n) {
        if (n == 0) return false;
        while (n % 5 == 0) n = n / 5;
        while (n % 3 == 0) n = n / 3;
        while (n % 2 == 0) n = n / 2;
        return n == 1 ? true : false;
    }
};