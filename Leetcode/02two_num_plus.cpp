/*
给你两个非空的链表，表示两个非负的整数。
它们每位数字都是按照逆序的方式存储的，并且每个节点只能存储一位数字。
请你将两个数相加，并以相同形式返回一个表示和的链表。
你可以假设除了数字 0 之外，这两个数都不会以 0 开头。
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <stdexcept>

using namespace std;

// 定义链表节点结构体
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNum(ListNode* l1, ListNode* l2) {
        // 创建哑节点简化头节点处理
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        int carry = 0;  // 进位

        // 遍历两个链表，直到两个链表都为空且没有进位
        while (l1 != nullptr || l2 != nullptr || carry > 0) {
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;

            int sum = val1 +val2 + carry;
            int currentVal = sum % 10;
            carry = sum / 10;

            current->next = new ListNode(currentVal);
            current = current->next;

            // 移动输入链表的指针
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        // 保存结果链表的头节点并释放哑节点
        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }
};

// 辅助函数：创建链表
ListNode* createList(int arr[], int n) {
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < n; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

// 辅助函数：打印链表
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val;
        if (current->next != nullptr) cout << " -> ";
        current = current->next;
    }
    cout << endl;
}

// 辅助函数：释放链表内存
void freeList(ListNode* head) {
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Solution solution;

    // 测试用例{2, 4, 3} + {5, 6, 4} = {7, 0, 8}
    int arr1[] = {2, 4, 3};
    int arr2[] = {5, 6, 4};

    ListNode* l1 = createList(arr1, 3);
    ListNode* l2 = createList(arr2, 3);

    cout << "链表1: ";
    printList(l1);
    cout << "链表2: ";
    printList(l2);

    ListNode* result = solution.addTwoNum(l1, l2);

    cout << "结果链表: ";
    printList(result);

    // 释放内存
    freeList(l1);
    freeList(l2);
    freeList(result);

    return 0;
}
