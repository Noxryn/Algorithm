/*
 * @lc app=leetcode.cn id=2586 lang=cpp
 *
 * [2586] 统计范围内的元音字符串数
 */

// @lc code=start
class Solution {
 public:
  int vowelStrings(vector<string>& words, int left, int right) {
    // int ans = 0;
    // for (int i = left; i <= right; i++) {
    //   string s = words[i];
    //   int n = s.size();
    //   switch (s[0]) {
    //     case 'a':
    //     case 'e':
    //     case 'i':
    //     case 'o':
    //     case 'u':
    //       break;
    //     default:
    //       continue;
    //   }

    //   switch (s[n - 1]) {
    //     case 'a':
    //     case 'e':
    //     case 'i':
    //     case 'o':
    //     case 'u':
    //       ans++;
    //       break;
    //   }
    // }
    // return ans;
    const string vowel = "aeiou";
    int ans = 0;
    for (int i = left; i <= right; i++) {
      string& s = words[i];
      ans += vowel.find(s[0]) != string::npos &&
             vowel.find(s.back()) != string::npos;
    }
    return ans;
  }
};
// @lc code=end
