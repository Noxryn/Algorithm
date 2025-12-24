/*
 * @lc app=leetcode.cn id=867 lang=cpp
 *
 * [867] 转置矩阵
 */

// @lc code=start
class Solution {
 public:
  vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    vector<vector<int>> ans(n, vector<int>(m));
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        ans[j][i] = matrix[i][j];
      }
    }
    return ans;
  }
};
// @lc code=end
