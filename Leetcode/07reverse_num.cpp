/*
给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。
如果反转后整数超过 32 位的有符号整数的范围 [−231,  231 − 1] ，就返回 0。
假设环境不允许存储 64 位整数（有符号或无符号）。
*/

#include <iostream>
#include <limits>
#include <vector>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int reversed = 0;
        while (x != 0) {
            int digit = x % 10;
            x /= 10;

        // 检查是否会溢出
        if (reversed > numeric_limits<int>::max() / 10 || 
           (reversed == numeric_limits<int>::max() / 10 && digit > 7)) {
            return 0;
        }
        if (reversed < numeric_limits<int>::min() / 10 || 
           (reversed == numeric_limits<int>::min() / 10 && digit < -8)) {
            return 0;
        }

            // 更新反转后的数字
            reversed = reversed * 10 + digit;
        }
        return reversed;
    }
};

int main() {
    Solution solution;

    int x1 = 123;
    int result1 = solution.reverse(x1);
    cout << "反转后的数字1: " << result1 << endl; // 输出: 321

    int x2 = -123;
    int result2 = solution.reverse(x2);
    cout << "反转后的数字2: " << result2 << endl; // 输出: -321

    int x3 = 120;
    int result3 = solution.reverse(x3);
    cout << "反转后的数字3: " << result3 << endl; // 输出: 21

    int x4 = 1534236469; // 反转后会溢出
    int result4 = solution.reverse(x4);
    cout << "反转后的数字4: " << result4 << endl; // 输出: 0

    return 0;
}
