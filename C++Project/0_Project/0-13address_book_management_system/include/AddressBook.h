#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include <iostream>
#include <string>
using namespace std;

#define MAX 1000

// 联系人结构体
struct Person {
    string name;     // 姓名
    string phone;   // 电话
    string email;    // 邮箱
    string address;  // 地址
};

// 通讯录结构体
struct AddressBook {
    Person contacts[MAX];    // 最大可创建联系人数量
    int size;                // 当前联系人数量
};

// 初始化通讯录
void initAddressBook(AddressBook& book);

// 添加联系人
bool addPerson(AddressBook& book, const Person& contact);

// 显示所有联系人
void displayPerson(const AddressBook& book);

// 删除联系人（按姓名）
bool deletePerson(AddressBook& book, const string& name);

// 查找联系人（按姓名）
void searchPerson(const AddressBook& book, const string& name);

// 修改联系人信息
bool updatePerson(AddressBook& book, const string& oldName, const Person& newContact);

// 清空通讯录
void clearPerson(AddressBook& book);

#endif
   