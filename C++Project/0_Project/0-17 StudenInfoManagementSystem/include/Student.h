#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

// 学生类
class Student {
private:
    string id;       // 学号
    string name;     // 姓名
    int age;         // 年龄
    string major;    // 专业

public:
    // 构造函数
    Student(string studentId, string studentName, int studentAge, string studentMajor);

    // 获取学生信息
    string getId() const;
    string getName() const;
    int getAge() const;
    string getMajor() const;

    // 修改学生信息
    void setName(string newName);
    void setAge(int newAge);
    void setMajor(string newMajor);

    // 显示学生信息
    void display() const;
};

#endif