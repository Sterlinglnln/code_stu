#ifndef STUDENTMANAGEMENTSYSTEM_H
#define STUDENTMANAGEMENTSYSTEM_H

#include "../include/Student.h"

// 学生管理系统类
class StudentManagementSystem {
private:
    Student** students;  // 动态数组存储学生指针
    int capacity;        // 当前数组容量
    int count;           // 当前学生数量

    // 扩展数组容量（私有方法）
    void expandCapacity();

public:
    // 构造函数
    StudentManagementSystem();

    // 析构函数
    ~StudentManagementSystem();

    // 添加学生
    void addStudent(const Student& student);

    // 显示所有学生
    void displayAll() const;

    // 根据学号查找学生
    void findStudentById(string id) const;

    // 根据学号删除学生
    void deleteStudent(string id);
};

#endif    