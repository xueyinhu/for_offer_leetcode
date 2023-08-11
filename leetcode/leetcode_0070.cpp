/** 爬楼梯
 * 假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
 * 每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
 * 
 * 1 <= n <= 45
 */

class Solution {
public:

    int climbStairs(int n) {
        return func(n);
    }

    int func(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        if (n == 3) return 3;
        if (n == 4) return 5;
        if (n == 5) return 8;
        if (n == 6) return 13;
        if (n == 7) return 21;
        if (n == 8) return 34;
        if (n == 9) return 55;
        if (n == 10) return 89;
        if (n == 11) return 144;
        if (n == 12) return 233;
        return func(n - 1) + func(n - 2);
    }
};


#include <math.h>
class Solution {
public:
    int climbStairs(int n) {
        double sqrt5 = sqrt(5);
        double fibn = pow((1 + sqrt5) / 2, n + 1) - pow((1 - sqrt5) / 2, n + 1);
        return (int)round(fibn / sqrt5);
    }
};
