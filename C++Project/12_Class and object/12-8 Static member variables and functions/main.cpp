#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
using namespace std;

class Contact {
private:
    string name;
    string phone;
    string email;

public:
    Contact(string name, string phone, string email)
        : name(name), phone(phone), email(email) {}

    string getName() const { return name; }
    string getPhone() const { return phone; }
    string getEmail() const { return email; }

    void display() const {
        cout << "姓名: " << name << endl;
        cout << "电话: " << phone << endl;
        cout << "邮箱: " << email << endl;
        cout << "------------------------" << endl;
    }
};

class AddressBook {
private:
    vector<Contact> contacts;
    static int totalContacts;  // 静态成员变量：记录总联系人数量

public:
    // 添加联系人
    void addContact(const Contact& contact) {
        contacts.push_back(contact);
        totalContacts++;
        cout << "添加成功！当前共有 " << totalContacts << " 个联系人。\n";
    }

    // 显示所有联系人
    void displayAll() const {
        if (contacts.empty()) {
            cout << "通讯录为空！\n";
            return;
        }
        cout << "共有 " << contacts.size() << " 个联系人：\n";
        for (const auto& contact : contacts) {
            contact.display();
        }
    }

    // 按姓名查找联系人
    void findByName(const string& name) const {
        bool found = false;
        for (const auto& contact : contacts) {
            if (contact.getName() == name) {
                contact.display();
                found = true;
            }
        }
        if (!found) {
            cout << "未找到联系人: " << name << endl;
        }
    }

    // 静态成员函数：获取总联系人数量
    static int getTotalContacts() {
        return totalContacts;
    }
};

// 初始化静态成员变量
int AddressBook::totalContacts = 0;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    AddressBook book;
    int choice;
    string name, phone, email;

    do {
        cout << "\n===== 通讯录系统 =====" << endl;
        cout << "1. 添加联系人" << endl;
        cout << "2. 显示所有联系人" << endl;
        cout << "3. 按姓名查找" << endl;
        cout << "4. 查看总人数" << endl;
        cout << "0. 退出" << endl;
        cout << "请选择: ";
        cin >> choice;
        cin.ignore(); // 清除输入缓冲区

        switch (choice) {
            case 1:
                cout << "请输入姓名: ";
                getline(cin, name);
                cout << "请输入电话: ";
                getline(cin, phone);
                cout << "请输入邮箱: ";
                getline(cin, email);
                book.addContact(Contact(name, phone, email));
                break;
            case 2:
                book.displayAll();
                break;
            case 3:
                cout << "请输入要查找的姓名: ";
                getline(cin, name);
                book.findByName(name);
                break;
            case 4:
                cout << "通讯录共有 " << AddressBook::getTotalContacts() 
                     << " 个联系人。" << endl;
                break;
            case 0:
                cout << "感谢使用通讯录系统！" << endl;
                break;
            default:
                cout << "无效选择，请重新输入！" << endl;
        }
    } while (choice != 0);

    return 0;
}