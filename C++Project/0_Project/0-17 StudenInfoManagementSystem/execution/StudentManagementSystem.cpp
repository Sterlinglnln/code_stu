#include "../include/StudentManagementSystem.h"
#include <iostream>
using namespace std;

// 构造函数
StudentManagementSystem::StudentManagementSystem() : capacity(2), count(0) {
    students = new Student*[capacity];
}

// 析构函数
StudentManagementSystem::~StudentManagementSystem() {
    // 删除所有学生对象
    for (int i = 0; i < count; ++i) {
        delete students[i];
    }
    delete[] students;
}

// 扩展数组容量
void StudentManagementSystem::expandCapacity() {
    int newCapacity = capacity * 2;
    Student** newStudents = new Student*[newCapacity];
    
    // 复制原有学生指针
    for (int i = 0; i < count; ++i) {
        newStudents[i] = students[i];
    }
    
    // 删除旧数组
    delete[] students;
    students = newStudents;
    capacity = newCapacity;
    cout << "系统容量已扩展至 " << capacity << " 个学生" << endl;
}

// 添加学生
void StudentManagementSystem::addStudent(const Student& student) {
    // 检查学号是否已存在
    for (int i = 0; i < count; ++i) {
        if (students[i]->getId() == student.getId()) {
            cout << "错误：学号 " << student.getId() << " 已存在！" << endl;
            return;
        }
    }

    // 检查容量是否足够
    if (count >= capacity) {
        expandCapacity();
    }

    // 添加新学生（复制构造）
    students[count++] = new Student(student);
    cout << "学生 " << student.getName() << " 添加成功！" << endl;
}

// 显示所有学生
void StudentManagementSystem::displayAll() const {
    if (count == 0) {
        cout << "暂无学生信息！" << endl;
        return;
    }
    cout << "所有学生信息：" << endl;
    for (int i = 0; i < count; ++i) {
        students[i]->display();
    }
}

// 根据学号查找学生
void StudentManagementSystem::findStudentById(string id) const {
    for (int i = 0; i < count; ++i) {
        if (students[i]->getId() == id) {
            students[i]->display();
            return;
        }
    }
    cout << "未找到学号为 " << id << " 的学生！" << endl;
}

// 根据学号删除学生
void StudentManagementSystem::deleteStudent(string id) {
    for (int i = 0; i < count; ++i) {
        if (students[i]->getId() == id) {
            cout << "学生 " << students[i]->getName() << " 已删除！" << endl;
            delete students[i];  // 删除学生对象
            
            // 移动后面的元素填补空缺
            for (int j = i; j < count - 1; ++j) {
                students[j] = students[j + 1];
            }
            --count;
            return;
        }
    }
    cout << "未找到学号为 " << id << " 的学生！" << endl;
}    