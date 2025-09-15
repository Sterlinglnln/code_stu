/* 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。
你可以按任意顺序返回答案。*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    // 输入验证
    if (nums.empty()) {
        throw invalid_argument("输入数组不能为空");
    }
    
    unordered_map<int, int> numMap; // 存储数值及其索引
    
    for (size_t i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        // 使用迭代器一次查找操作，避免二次哈希查找
        auto it = numMap.find(complement);
        if (it != numMap.end()) {
            return {it->second, static_cast<int>(i)};
        }
        // 仅在未找到时插入，减少不必要的操作
        numMap.emplace(nums[i], i);
    }
    
    // 如果没有找到符合条件的两个数，抛出异常
    throw invalid_argument("没有找到符合条件的两个数");
}

int main() {
    try {
        // 测试用例1：基础功能
        vector<int> nums1 = {2, 7, 11, 15};
        int target1 = 22;
        vector<int> result1 = twoSum(nums1, target1);
        cout << "测试用例1: 第一个元素下标为 " << result1[0] << "，值为 " << nums1[result1[0]] << endl;
        cout << "测试用例1: 第二个元素下标为 " << result1[1] << "，值为 " << nums1[result1[1]] << endl;
        
        // 测试用例2：包含重复元素
        vector<int> nums2 = {3, 3};
        int target2 = 6;
        vector<int> result2 = twoSum(nums2, target2);
        cout << "测试用例2: 第一个元素下标为 " << result2[0] << "，值为 " << nums2[result2[0]] << endl;
        cout << "测试用例2: 第二个元素下标为 " << result2[1] << "，值为 " << nums2[result2[1]] << endl;
        
        // 测试用例3：负数情况
        vector<int> nums3 = {-1, 5, 3};
        int target3 = 2;
        vector<int> result3 = twoSum(nums3, target3);
        cout << "测试用例3: 第一个元素下标为 " << result3[0] << "，值为 " << nums3[result3[0]] << endl;
        cout << "测试用例3: 第二个元素下标为 " << result3[1] << "，值为 " << nums3[result3[1]] << endl;
        
    } catch (const invalid_argument& e) {
        cerr << "错误: " << e.what() << endl;
        return 1;
    }
    
    return 0;
}
