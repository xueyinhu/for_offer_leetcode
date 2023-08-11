/** x 的平方根
 * 给你一个非负整数 x ，计算并返回 x 的 算术平方根 。
 * 由于返回类型是整数，结果只保留 整数部分 ，小数部分将被 舍去 。
 * 
 * 0 <= x <= 231 - 1
 */

#include<math.h>

// class Solution {
// public:
//     int mySqrt(int x) {
//         return func(0, int(pow(2, 16)), x);
//     }

//     // 二分查找 会 超时
//     int func(int min, int max, int x) {
//         if (min >= max - 1) return min;
//         int mid = (min >> 2) + (max >> 2);
//         int v = int(pow(mid, 2));
//         if(v == x) return mid;
//         else if (v > x) return func(min, mid, x);
//         else return func(mid, max, x);
//     }
// };

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }

        double C = x, x0 = x;
        while (true) {
            double xi = 0.5 * (x0 + C / x0);
            if (fabs(x0 - xi) < 1e-7) {
                break;
            }
            x0 = xi;
        }
        return int(x0);
    }
};
