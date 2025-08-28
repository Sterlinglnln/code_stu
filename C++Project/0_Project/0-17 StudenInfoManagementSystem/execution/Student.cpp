#include "../include/Student.h"
#include <iostream>
using namespace std;

// 构造函数
Student::Student(string studentId, string studentName, int studentAge, string studentMajor)
    : id(studentId), name(studentName), age(studentAge), major(studentMajor) {}

// 获取学生信息
string Student::getId() const { return id; }
string Student::getName() const { return name; }
int Student::getAge() const { return age; }
string Student::getMajor() const { return major; }

// 修改学生信息
void Student::setName(string newName) { name = newName; }
void Student::setAge(int newAge) { age = newAge; }
void Student::setMajor(string newMajor) { major = newMajor; }

// 显示学生信息
void Student::display() const {
    cout << "学号: " << id << endl;
    cout << "姓名: " << name << endl;
    cout << "年龄: " << age << endl;
    cout << "专业: " << major << endl;
    cout << "------------------------" << endl;
}    