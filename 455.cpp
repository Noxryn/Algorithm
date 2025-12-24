/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution {
 public:
  int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int i = 0, j = 0;
    int glen = g.size();
    int slen = s.size();
    while (i < glen && j < slen) {
      if (g[i] <= s[j]) {
        i++;
      }
      j++;
    }
    return i;
  }
};
// @lc code=end
