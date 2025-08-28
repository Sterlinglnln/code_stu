#include <iostream>
#include <windows.h>
#include "../include/menu.h"
#include "../include/AddressBook.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8); // 防止出现乱码

    struct AddressBook book; 
    initAddressBook(book);
    int select;
    string name, phone, email, address; // 初始化

    while (true) {
        showMenu(); // 菜单调用

        cin >> select;
        
        cin.ignore();

        switch (select) {
            // 添加联系人
            case 1: {
                Person contact;
                cout << "请输入姓名：";
                getline(cin, contact.name);
                cout << "请输入电话：";
                getline(cin, contact.phone);
                cout << "请输入邮箱：";
                getline(cin, contact.email);
                cout << "请输入地址：";
                getline(cin, contact.address);  //存储个人信息
                    
                addPerson(book, contact);   //将个人信息添加到通讯录
                break;
            };
            // 显示联系人
            case 2:
                displayPerson(book);
                break;
            // 删除联系人
            case 3:
                cout << "请输入要删除的联系人姓名：";
                getline(cin, name);
                deletePerson(book, name);
                break;
            // 查询联系人
            case 4:
                cout << "请输入要查找的联系人姓名：";
                getline(cin, name);
                searchPerson(book, name);
                break;
            // 修改联系人
            case 5: {
                string oldName;
                cout << "请输入要修改的联系人姓名：";
                getline(cin, oldName);
                    
                Person newContact;
                cout << "请输入新姓名（不修改则直接回车）：";
                getline(cin, name);
                if (!name.empty()) newContact.name = name;
                else newContact.name = oldName;
                    
                cout << "请输入新电话：";
                getline(cin, newContact.phone);
                cout << "请输入新邮箱：";
                getline(cin, newContact.email);
                cout << "请输入新地址：";
                getline(cin, newContact.address);  
                updatePerson(book, oldName, newContact);
                system("pause");
                system("cls");
                break;
            }
            // 清除联系人
            case 6:
                clearPerson(book);
                break;
            // 退出通讯录
            case 0:
                cout << "欢迎下次使用！" << endl;
                system("pause");
                return 0;
            // 输入0 ~ 6以外的数字 
            default:
                cout << "无效的选择，请重新输入！" << endl;
        }
    }
    return 0;
}