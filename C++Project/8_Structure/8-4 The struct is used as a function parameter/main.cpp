#include <iostream>
#include <string>

using namespace std;

struct student {
    string name;
    int ID;
    string grade;
};

// void printStudent1(struct student s1) {
//     cout << "Student's name: " << s1.name << endl;
//     cout << "Student's ID: "  << s1.ID << endl;
//     cout << "Student's grade: " << s1.grade << endl;
// }

void printStudent2(struct student * p) {
    cout << "Student's name: " << p->name << endl;
    cout << "Student's ID: " << p->ID << endl;
    cout << "Student's grade: " << p->grade << endl;
}

int main() {
    student s1;
    s1.name = "John";
    s1.ID = 202801209;
    s1.grade = "A";

    // printStudent1(s1);
    printStudent2(&s1);
}