#include <iostream>
#include "AddressBook.h"
using namespace std;

#define MAX 1000

// 初始化通讯录
void initAddressBook(AddressBook& book) {
    book.size = 0;
    cout << "通讯录已初始化" << endl;
}

// 添加联系人
bool addPerson(AddressBook& book, const Person& contact) {
    // 检查通讯录人员个数是否超过最大值
    if (book.size >= MAX) {
        cout << "通讯录已满，无法添加新联系人！" << endl;
        system("pause");
        system("cls");
        return false;
    }

    // 检查联系人是否已存在（按姓名）
    for (int i = 0; i < book.size; i++) {
        if (book.contacts[i].name == contact.name) {
            cout << "联系人已存在，添加失败！" << endl;
            system("pause");
            system("cls");
            return false;
        }
    }
    
    book.contacts[book.size] = contact;
    book.size++;
    cout << "联系人 " << contact.name << " 添加成功！" << endl;
    system("pause");
    system("cls");  //清屏
    return true;
}

// 显示所有联系人
void displayPerson(const AddressBook& book) {
    if (book.size == 0) {
        cout << "通讯录为空！" << endl;
        system("pause");
        system("cls");
        return;
    }
       
    for (int i = 0; i < book.size; i++) {
        cout << "姓名：" << book.contacts[i].name << "\t";
        cout << "电话：" << book.contacts[i].phone << "\t";
        cout << "邮箱：" << book.contacts[i].email << "\t";
        cout << "地址：" << book.contacts[i].address << endl;
    }
    system("pause");
    system("cls");
}

// 删除联系人
bool deletePerson(AddressBook& book, const string& name) {
    for (int i = 0; i < book.size; i++) {
        if (book.contacts[i].name == name) {
            for (int j = i; j < book.size - 1; j++) {
                book.contacts[j] = book.contacts[j + 1];    // 后面的联系人前移
            }
            book.size--;
            cout << "联系人 " << name << " 已删除！" << endl;
            system("pause");
            system("cls");
            return true;
        }
    }
    
    cout << "未找到联系人 " << name << "!" << endl;
    system("pause");
    system("cls");
    return false;
}

// 查找联系人
void searchPerson(const AddressBook& book, const string& name) {
    bool found = false;
    for (int i = 0; i < book.size; i++) {
        if (book.contacts[i].name == name) {
            cout << "姓名：" << book.contacts[i].name << "\t"
                 << "电话：" << book.contacts[i].phone << "\t"
                 << "邮箱：" << book.contacts[i].email << "\t"
                 << "地址：" << book.contacts[i].address << endl;
            found = true;
            break;
        }
    }
    
    if (!found) {
        cout << "未找到联系人 " << name << "!" << endl;
    }
    system("pause");
    system("cls");
}

// 修改联系人信息
bool updatePerson(AddressBook& book, const string& oldName, const Person& newContact) {
    for (int i = 0; i < book.size; i++) {
        if (book.contacts[i].name == oldName) {
            book.contacts[i] = newContact;
            cout << "联系人 " << oldName << " 已更新为 " << newContact.name << "!" << endl;
            return true;
        }
    }
    
    cout << "未找到联系人 " << oldName << "!" << endl;
    return false;
}

// 清空通讯录
void clearPerson(AddressBook& book) {
    book.size = 0;
    cout << "通讯录已清空！" << endl;
    system("pause");
    system("cls");
}
    