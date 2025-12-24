/*
 * @lc app=leetcode.cn id=852 lang=cpp
 *
 * [852] 山脉数组的峰顶索引
 */

// @lc code=start
class Solution {
 public:
  int peakIndexInMountainArray(vector<int>& arr) {
    // int n = arr.size();
    // int ans = -1;
    // for (int i = 1; i < n - 1; i++) {
    //   if (arr[i] > arr[i + 1]) {
    //     ans = i;
    //     break;
    //   }
    // }
    // return ans;
    int left = 0, right = arr.size() - 2;
    while (left + 1 < right) {
      int mid = left + (right - left) / 2;
      if (arr[mid] > arr[mid + 1]) {
        right = mid;
      } else {
        left = mid;
      }
    }
    return right;
  }
};
// @lc code=end
