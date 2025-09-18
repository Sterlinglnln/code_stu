/*
将一个给定字符串s根据给定的行数numRows，以从上往下、从左到右进行Z字形排列。
之后，你的输出需要从左往右逐行读取，产生出一个新的字符串，比如："PAHNAPLSIIGYIR"
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    // Z字形转换
    string convert(const string& s, int numRows) {
        if (numRows <= 1 || s.size() <= numRows) {
            return s;   // 特殊情况直接返回原字符串
        }

        // 创建一个字符串数组来存储每一行的字符
        vector<string> rows(min(numRows, static_cast<int>(s.size())));

        // 当前行和方向标志
        int currentRow = 0;
        bool goingDown = false;

        // 遍历字符串，按Z字形填充字符
        for (char c : s) {
            rows[currentRow] += c;
            if (currentRow == 0 || currentRow == numRows - 1) {
                goingDown = !goingDown; // 改变方向
            }
            currentRow += goingDown ? 1 : -1; // 根据方向移动行数
        }

        // 拼接所有行，形成最终字符串
        string result;
        for (const string& row : rows) {
            result += row; // 拼接所有行
        }
        return result;
    }
};

int main() {
    Solution solution;

    string s1 = "PAYPALISHIRING";
    int numRows1 = 3;
    string result1 = solution.convert(s1, numRows1);
    cout << "Z字形转换结果1: " << result1 << endl; // 输出: "PAHNAPLSIIGYIR"

    string s2 = "PAYPALISHIRING";
    int numRows2 = 4;
    string result2 = solution.convert(s2, numRows2);
    cout << "Z字形转换结果2: " << result2 << endl; // 输出: "PINALSIGYAHRPI"

    string s3 = "A";
    int numRows3 = 1;
    string result3 = solution.convert(s3, numRows3);
    cout << "Z字形转换结果3: " << result3 << endl; // 输出: "A"

    return 0;
}
