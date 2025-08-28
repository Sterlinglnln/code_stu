#include <iostream>
#include <string>

using namespace std;

struct student {
    string name;
    int ID;
    string grade;
};

void printStudent(const student  *p) {
    // p ->name = "JBL";const作常量指针时指针所指对象只可读
    cout << "Student's name: " << p->name << endl;
    cout << "Student's ID: " << p->ID << endl;
    cout << "Student's grade: " << p->grade << endl;
}

int main() {
    student s1;
    s1.name = "Larry Lin";
    s1.ID = 202801209;
    s1.grade = "A+";
    printStudent(&s1);
    return 0;
}