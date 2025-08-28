#include <iostream>
#include <windows.h>
#include "../include/Student.h"
#include "../include/StudentManagementSystem.h"
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    StudentManagementSystem system;
    int choice;
    string id, name, major;
    int age;

    do {
        // 显示菜单
        cout << "\n学生信息管理系统" << endl;
        cout << "1. 添加学生" << endl;
        cout << "2. 显示所有学生" << endl;
        cout << "3. 查找学生" << endl;
        cout << "4. 删除学生" << endl;
        cout << "0. 退出系统" << endl;
        cout << "请输入你的选择: ";
        cin >> choice;

        cin.ignore();

        switch (choice) {
            case 1:
                cout << "请输入学号: ";
                getline(cin, id);
                cout << "请输入姓名: ";
                getline(cin, name);
                cout << "请输入年龄: ";
                cin >> age;
                cin.ignore();
                cout << "请输入专业: ";
                getline(cin, major);
                system.addStudent(Student(id, name, age, major));
                break;

            case 2:
                system.displayAll();
                break;

            case 3:
                cout << "请输入要查找的学号: ";
                getline(cin, id);
                system.findStudentById(id);
                break;

            case 4:
                cout << "请输入要删除的学号: ";
                getline(cin, id);
                system.deleteStudent(id);
                break;

            case 0:
                cout << "感谢使用学生信息管理系统！" << endl;
                break;

            default:
                cout << "无效的选择，请重新输入！" << endl;
        }
    } while (choice != 0);

    return 0;
}    