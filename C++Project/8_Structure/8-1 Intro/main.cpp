#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct Student {
    string name;
    int StudentID;
    float GPA;
    string major;
    string university;
};

void printStudentInfo(const Student& student) {
    cout << "Student Name: " << student.name << endl;
    cout << "Student ID: " << student.StudentID << endl;
    cout << "GPA: " << student.GPA << endl;
    cout << "Major: " << student.major << endl;
    cout << "University: " << student.university << endl;
}

int main() {
    Student student1;

    cout << "Enter student name: ";
    getline(cin, student1.name);

    cout << "Enter student ID: ";
    cin >> student1.StudentID;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 清除缓冲区

    cout << "Enter GPA: ";
    cin >> student1.GPA;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 清除缓冲区

    cout << "Enter major: ";
    getline(cin, student1.major);

    cout << "Enter university: ";
    getline(cin, student1.university);

    printStudentInfo(student1);

    return 0;
}