/*
 * @lc app=leetcode.cn id=665 lang=cpp
 *
 * [665] 非递减数列
 */

// @lc code=start
class Solution {
 public:
  bool checkPossibility(vector<int>& nums) {
    int len = nums.size();
    int count = 0;
    int idx = -1;
    for (int i = 0; i < len - 1; ++i) {
      if (nums[i] > nums[i + 1]) {
        count++;
        idx = i;
      }
      if (count > 1) return false;
    }
    if (count < 1)
      return true;
    else if (idx == 0 || idx == len - 2)
      return true;
    else
      return (nums[idx - 1] <= nums[idx + 1]) || (nums[idx] <= nums[idx + 2]);
  }
};
// @lc code=end
