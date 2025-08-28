#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    string major;
    int studentID;
    float GPA;
};

int main() {

    // Student s1 = {"John", 23, "Math", 1208, 3.2};
    // Student * p = &s1;
    // cout << "Name: " << p->name << "\t"
    //      << "Age: " << p->age << "\t"
    //      << "Major: " << p->major << "\t"
    //      << "studentID: " << p->studentID << "\t"
    //      << "GPA: " << p->GPA << endl;
    Student array[3] = {
        {"Alice", 20, "Computer Science", 1001, 3.8},
        {"Bob", 22, "Mathematics", 1002, 3.5},
        {"Charlie", 21, "Physics", 1003, 3.9}
    };
    for (int i = 0; i < 3; i++) {
        cout << "Name: " << array[i].name << "\t"
             << "Age: " << array[i].age << "\t"
             << "Major: " << array[i].major << "\t"
             << "Student ID: " << array[i].studentID << "\t"
             << "GPA: " << array[i].GPA << endl;
    }
    return 0;
}