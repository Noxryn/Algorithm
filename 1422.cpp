/*
 * @lc app=leetcode.cn id=1422 lang=cpp
 *
 * [1422] 分割字符串的最大得分
 */

// @lc code=start
class Solution {
 public:
  int maxScore(string s) {
    // int ans = 0;
    // int n = s.size();
    // for (int i = 1; i < n; i++) {
    //   int score = 0;
    //   for (int j = 0; j < i; j++) {
    //     if (s[j] == '0') {
    //       score++;
    //     }
    //   }
    //   for (int j = i; j < n; j++) {
    //     if (s[j] == '1') {
    //       score++;
    //     }
    //   }
    //   ans = max(ans, score);
    // }
    // return ans;
    int score = ranges::count(s, '1');
    int ans = 0;
    for (int i = 0; i + 1 < s.length(); i++) {
      score += s[i] == '0' ? 1 : -1;
      ans = max(ans, score);
    }
    return ans;
  }
};
// @lc code=end
