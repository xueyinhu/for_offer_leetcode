/** 搜索插入位置
 * 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
 * 请必须使用时间复杂度为 O(log n) 的算法。
 * 
 * 1 <= nums.length <= 104
 * -104 <= nums[i] <= 104
 * nums 为 无重复元素 的 升序 排列数组
 * -104 <= target <= 104
 */

#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return func(nums, target, 0, nums.size() - 1);
    }

    int func(vector<int>& nums, int target, int start, int end) {
        if (start >= end - 1) return nums[start] >= target ? start : nums[end] < target ? end + 1: start + 1;
        int mid = (start + end) >> 1;
        if (nums[mid] == target) return mid;
        else if (nums[mid] > target) return func(nums, target, start, mid);
        else return func(nums, target, mid, end);
    }
};