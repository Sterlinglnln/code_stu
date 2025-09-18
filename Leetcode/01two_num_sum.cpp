/* 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。
你可以按任意顺序返回答案。*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (size_t i = 0; i < nums.size(); i++) {
            for (size_t j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                result.push_back(i);
                result.push_back(j);
                return result;
                }
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
        // 测试用例1：基础功能
        vector<int> nums1 = {2, 7, 11, 15};
        int target1 = 22;
        vector<int> result1 = solution.twoSum(nums1, target1);
        cout << "测试用例1: 第一个元素下标为 " << result1[0] << "，值为 " << nums1[result1[0]] << endl;
        cout << "测试用例1: 第二个元素下标为 " << result1[1] << "，值为 " << nums1[result1[1]] << endl;
        
        // 测试用例2：包含重复元素
        vector<int> nums2 = {3, 2, 4, 3};
        int target2 = 6;
        vector<int> result2 = solution.twoSum(nums2, target2);
        cout << "测试用例2: 第一个元素下标为 " << result2[0] << "，值为 " << nums2[result2[0]] << endl;
        cout << "测试用例2: 第二个元素下标为 " << result2[1] << "，值为 " << nums2[result2[1]] << endl;
        
        // 测试用例3：负数情况
        vector<int> nums3 = {-1, -2, -3, -4, -5};
        int target3 = -8;
        vector<int> result3 = solution.twoSum(nums3, target3);
        cout << "测试用例3: 第一个元素下标为 " << result3[0] << "，值为 " << nums3[result3[0]] << endl;
        cout << "测试用例3: 第二个元素下标为 " << result3[1] << "，值为 " << nums3[result3[1]] << endl;
    
    return 0;
}
