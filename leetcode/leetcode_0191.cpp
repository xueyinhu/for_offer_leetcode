/** 191. 位1的个数
 * 编写一个函数，输入是一个无符号整数（以二进制串的形式），返回其二进制表达式中数字位数为 '1' 的个数（也被称为汉明重量）。
 * 
 * 输入必须是长度为 32 的 二进制串 。
 */

#include <stdint.h>

// class Solution {
// public:
//     int hammingWeight(uint32_t n) {
//         uint32_t h = 1;
//         int s = n | h == n ? 1 : 0;
//         for (int i = 1; i < 32; i++) {
//             h = h << 1;
//             s += n | h == n ? 1 : 0;
//         }
//         return s;
//     }
// };

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ret = 0;
        while (n) {
            n &= n - 1;
            ret++;
        }
        return ret;
    }
};
