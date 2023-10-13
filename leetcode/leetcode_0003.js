/** 无重复字符的最长子串
 * 给定一个字符串 s ，请你找出其中不含有重复字符的 最长子串 的长度。
 * 
 * 0 <= s.length <= 5 * 104
 * s 由英文字母、数字、符号和空格组成
 */

/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    const ms = new Set()
    for (let i of s) {
        if (ms.has(i)) {
            let result = ""
            for (let j of ms) {
                result += j
            }
            return j
        } else {
            ms.add(i)
        }
    }
    return s
};