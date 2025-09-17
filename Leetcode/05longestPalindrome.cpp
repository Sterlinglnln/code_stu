/*
给你一个字符串s，找到s中最长的回文子串
*/

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string longestPalindrome(const string& s) {
        if (s.empty()) return "";

        int start = 0, end = 0;
        for (int i = 0; i < s.size(); ++i) {
            // 处理奇数长度的回文串
            int len1 = expandAroundCenter(s, i, i);
            // 处理偶数长度的回文串
            int len2 = expandAroundCenter(s, i, i + 1);
            // 取较长的长度
            int len = max(len1, len2);

            // 如果找到更长的回文串，更新起始和结束位置
            if (len > end - start) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }
        return s.substr(start, end - start + 1);
    }

private:
    // 从中心向两边扩展，返回回文串的长度
    int expandAroundCenter(const string& s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            --left;
            ++right;
        }
        // 返回回文串的长度
        return right - left - 1;
    }
};

int main() {
    Solution solution;

    string s1 = "babad";
    string result1 = solution.longestPalindrome(s1);
    cout << "s1最长的回文子串是："  << result1 << endl;

    string s2 = "cbbd";
    string result2 = solution.longestPalindrome(s2);
    cout << "s2最长的回文子串是："  << result2 << endl;

    string s3 = "abcdcba";
    string result3 = solution.longestPalindrome(s3);
    cout << "s3最长的回文子串是："  << result3 << endl;

    return 0;
}
