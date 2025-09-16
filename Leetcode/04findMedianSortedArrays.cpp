#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(const vector<int>& nums1, const vector<int>& nums2) {
        // 确保nums1是较短的数组
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        
        size_t m = nums1.size();
        size_t n = nums2.size();
        size_t left = 0, right = m;
        
        while (left <= right) {
            // 在nums1中选择分割点
            size_t partition1 = (left + right) / 2;
            // 根据nums1的分割点计算nums2的分割点
            size_t partition2 = (m + n + 1) / 2 - partition1;
            
            // 获取分割点左右的值，处理边界情况
            int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
            int minRight1 = (partition1 == m) ? INT_MAX : nums1[partition1];
            
            int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
            int minRight2 = (partition2 == n) ? INT_MAX : nums2[partition2];
            
            // 检查是否找到了正确的分割点
            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                // 总长度为偶数
                if ((m + n) % 2 == 0) {
                    return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
                }
                // 总长度为奇数
                else {
                    return max(maxLeft1, maxLeft2);
                }
            }
            // 调整分割点
            else if (maxLeft1 > minRight2) {
                right = partition1 - 1;
            } else {
                left = partition1 + 1;
            }
        }
        
        return 0.0; // 理论上不会到达这里
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << "中位数是: " << solution.findMedianSortedArrays(nums1, nums2) << endl;

    nums1 = {1, 2};
    nums2 = {3, 4};
    cout << "中位数是: " << solution.findMedianSortedArrays(nums1, nums2) << endl;

    nums1 = {};
    nums2 = {1};
    cout << "中位数是: " << solution.findMedianSortedArrays(nums1, nums2) << endl;

    nums1 = {2};
    nums2 = {};
    cout << "中位数是: " << solution.findMedianSortedArrays(nums1, nums2) << endl;

    return 0;
}
