/*
 * @lc app=leetcode.cn id=135 lang=cpp
 *
 * [135] 分发糖果
 */

// @lc code=start
class Solution {
 public:
  int candy(vector<int>& ratings) {
    int len = ratings.size();
    if (len < 2) return len;
    vector<int> nums(len, 1);
    for (int i = 1; i < len; ++i) {
      if (ratings[i] > ratings[i - 1]) {
        nums[i] = nums[i - 1] + 1;
      }
    }
    for (int i = len - 2; i >= 0; --i) {
      if (ratings[i] > ratings[i + 1]) {
        nums[i] = max(nums[i + 1] + 1, nums[i]);
      }
    }
    return accumulate(nums.begin(), nums.end(), 0);
  }
};
// @lc code=end
