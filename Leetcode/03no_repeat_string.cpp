// 给定一个字符串s，找出其中不含有重复字符的最长子串的长度
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndexMap;  // 记录字符最后出现的位置
        int maxLength = 0;                      // 记录最长子串长度
        int left = 0;                           // 滑动窗口的左边界

        for (int right = 0; right < s.length(); ++right) {
            char currentChar = s[right];

            // 如果字符已存在且索引在当前窗口内，则移动左边界到重复字符的下一位
            if (charIndexMap.find(currentChar) != charIndexMap.end() &&
                charIndexMap[currentChar] >= left) {
                left = charIndexMap[currentChar] + 1;   // 更新左边界
            }

            // 更新字符的最新索引
            charIndexMap[currentChar] = right;

            maxLength = max(maxLength, right - left + 1); // 更新最大长度
        }

        return maxLength;
    }
};

int main() {
    Solution solution;
    string s;

    cout << "请输入字符串: ";
    cin >> s;

    int result = solution.lengthOfLongestSubstring(s);
    cout << "不含有重复字符的最长子串的长度是: " << result << endl;

    return 0;
}
