/*
请你来实现一个 myAtoi(string s) 函数，使其能将字符串转换成一个 32 位有符号整数。

函数 myAtoi(string s) 的算法如下：

空格：读入字符串并丢弃无用的前导空格（" "）
符号：检查下一个字符（假设还未到字符末尾）为 '-' 还是 '+'。如果两者都不存在，则假定结果为正。
转换：通过跳过前置零来读取该整数，直到遇到非数字字符或到达字符串的结尾。如果没有读取数字，则结果为0。
舍入：如果整数数超过 32 位有符号整数范围 [−231,  231 − 1] ，需要截断这个整数，使其保持在这个范围内。具体来说，小于 −231 的整数应该被舍入为 −231 ，大于 231 − 1 的整数应该被舍入为 231 − 1 。
返回整数作为最终结果。
*/

#include <iostream>
#include <climits>
#include <cctype>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        size_t i = 0;
        while (i < s.size() && isspace(s[i])) ++i; // 跳过前导空格
        if (i == s.size()) return 0; // 全是空格

        int sign = 1; // 符号，默认为正
        if (s[i] == '+' || s[i] == '-') {
            sign = (s[i] == '-') ? -1 : 1;
            ++i;
        }

        long long result = 0; // 使用 long long 防止溢出
        while (i < s.size() && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            if (sign == 1 && result > INT_MAX) return INT_MAX; // 正溢出
            if (sign == -1 && -result < INT_MIN) return INT_MIN; // 负溢出
            ++i;
        }

        return static_cast<int>(sign * result);
    } 
};

int main() {
    Solution solution;
    // 示例测试1
    string s1 = "42";
    cout << s1 << " -> " << solution.myAtoi(s1) << endl; // 输出: 42

    // 示例测试2
    string s2 = "   -042";
    cout << s2 << " -> " << solution.myAtoi(s2) << endl; // 输出: -42

    // 示例测试3
    string s3 = "1337c0d3";
    cout << s3 << " -> " << solution.myAtoi(s3) << endl; // 输出: 1337

    // 示例测试4
    string s4 = "0-1";
    cout << s4 << " -> " << solution.myAtoi(s4) << endl; // 输出: 0

    // 示例测试5
    string s5 = "words and 987";
    cout << s5 << " -> " << solution.myAtoi(s5) << endl; // 输出: 0    

    return 0;
}
