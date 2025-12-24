/*
 * @lc app=leetcode.cn id=1281 lang=cpp
 *
 * [1281] 整数的各位积和之差
 */

// @lc code=start
class Solution {
 public:
  int subtractProductAndSum(int n) {
    int sum = 0, mul = 1;
    while (n > 0) {
      sum += n % 10;
      mul *= n % 10;
      n /= 10;
    }

    return mul - sum;
  }
};
// @lc code=end
