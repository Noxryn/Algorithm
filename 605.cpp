/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution {
 public:
  bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    flowerbed.insert(flowerbed.begin(), 0);
    flowerbed.push_back(0);
    int len = flowerbed.size();
    int count = 0;
    int flag = -1;
    for (int i = 1; i < len - 1; ++i) {
      if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
        flowerbed[i] = 1;
        count++;
      }
    }
    return count >= n;
  }
};
// @lc code=end
