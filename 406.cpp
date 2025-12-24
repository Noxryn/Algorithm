/*
 * @lc app=leetcode.cn id=406 lang=cpp
 *
 * [406] 根据身高重建队列
 */

// @lc code=start
class Solution {
 public:
  vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
    int len = people.size();
    sort(people.begin(), people.end(), [](vector<int> a, vector<int> b) {
      return a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]);
    });
    vector<vector<int>> tmp;
    for (auto val : people) {
      tmp.insert(tmp.begin() + val[1], val);
    }
    return tmp;
  }
};
// @lc code=end
