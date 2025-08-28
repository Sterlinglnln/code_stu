#include <iostream>
#include <windows.h>

using namespace std;

#define MAX 100

class Student {
public:
    string name;
    string studentID;
    void showInfo() {
        cout << "Student's name: " << name << "\t"
             << "Student's ID: " << studentID << endl;
    }
};

int main() {
    Student stuArr[MAX];
    for (int i = 0; i < 5; i++) {
        cout << "Please enter student's name:" << " ";
        getline(cin, stuArr[i].name);
        cout << "Please enter student's ID:" << " ";
        getline(cin, stuArr[i].studentID);
        stuArr[i].showInfo();
    }
}