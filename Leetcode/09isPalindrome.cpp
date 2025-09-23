/*
给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。

回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; // 舍去负数

        // 将整数转换为字符串
        string s = to_string(x);
        string rev_s = s; // 复制字符串
        reverse(rev_s.begin(), rev_s.end()); // 反转字符串
        return s == rev_s; // 比较原字符串和反转后的字符串
    }
};

int main() {
    Solution solution;

    // 示例测试1
    int x1 = 121;
    cout << x1 << " 是回文数吗？ " << (solution.isPalindrome(x1) ? "是" : "否") << endl;

    // 示例测试2
    int x2 = -121;
    cout << x2 << " 是回文数吗？ " << (solution.isPalindrome(x2) ? "是" : "否") << endl;

    // 示例测试3
    int x3 = 10;
    cout << x3 << " 是回文数吗？ " << (solution.isPalindrome(x3) ? "是" : "否") << endl;

    return 0;
}
