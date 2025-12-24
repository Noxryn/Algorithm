/*
 * @lc app=leetcode.cn id=452 lang=cpp
 *
 * [452] 用最少数量的箭引爆气球
 */

// @lc code=start
class Solution {
 public:
  int findMinArrowShots(vector<vector<int>>& points) {
    sort(points.begin(), points.end(),
         [](vector<int> a, vector<int> b) { return a[0] < b[0]; });
    int count = 1;
    int pre = points[0][1];
    for (int i = 1; i < points.size(); ++i) {
      if (points[i][0] <= pre) {
        pre = min(pre, points[i][1]);
      } else {
        pre = points[i][1];
        count++;
      }
    }
    return count;
  }
};
// @lc code=end
