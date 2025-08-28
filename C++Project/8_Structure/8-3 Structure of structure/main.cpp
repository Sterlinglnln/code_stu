// Structure of structure
#include <iostream>
#include <string>

using namespace std;

struct scores {
    float Math;
    float Physics;
    float Chemistry;
};

struct  student {
    string Name;
    int StudentID;
    struct scores subjects;
};

int main() {
    struct student s1;

    cout << "Please enter the student's name: ";
    getline(cin, s1.Name);
    cout << "Please enter the student's ID: ";  
    cin >> s1.StudentID;
    cout << "Please enter the student's Math score: ";
    cin >> s1.subjects.Math;
    cout << "Please enter the student's Physics score: ";
    cin >> s1.subjects.Physics;
    cout << "Please enter the student's Chemistry score: ";
    cin >> s1.subjects.Chemistry;
    float averageScore = (s1.subjects.Math + s1.subjects.Physics + s1.subjects.Chemistry) / 3;
    cout << "The average score of " << s1.Name << " (ID: " << s1.StudentID << ") is: " << averageScore << endl;
    return 0;
}