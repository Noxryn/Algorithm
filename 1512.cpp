/*
 * @lc app=leetcode.cn id=1512 lang=cpp
 *
 * [1512] 好数对的数目
 */

// @lc code=start
class Solution {
 public:
  int numIdenticalPairs(vector<int>& nums) {
    int ans = 0;
    unordered_map<int, int> cnt;
    for (int x : nums) {
      ans += cnt[x];
      cnt[x]++;
    }
    return ans;
  }
};
// @lc code=end
