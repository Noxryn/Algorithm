/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int ans = 0, min_val = prices[0];
    for (auto val : prices) {
      ans = max(ans, val - min_val);
      min_val = min(min_val, val);
    }
    return ans;
  }
};
// @lc code=end
