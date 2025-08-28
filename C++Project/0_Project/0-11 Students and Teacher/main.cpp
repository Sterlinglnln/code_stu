#include <iostream>
#include <string>
#include <ctime>

using namespace std;

struct student {
    string stuName;
    float stuScore;
};

struct teacher {
    string tName;
    struct student stuArr[5];
};

void allocateSpace(struct teacher tArr[], int len) {
    string Namespeed = "ABCDE";
    for(int i = 0; i < len; i++) {
        tArr[i].tName = "Teacher_";
        tArr[i].tName += Namespeed[i];
        for(int j = 0; j < 5; j++) {
            tArr[i].stuArr[j].stuName = "Student_";
            tArr[i].stuArr[j].stuName += Namespeed[j];
            int random = rand() % 41 + 60;
            tArr[i].stuArr[j].stuScore = random;
        }
    }
}

void printInfo(struct teacher tArr[], int len) {
    for(int i = 0; i < len; i++) {
        cout << "Teacher's name: " << tArr[i].tName << endl;

        for(int j = 0; j < 5; j++) {
            cout << "Student's name: " << tArr[i].stuArr[j].stuName << "\t"
                 << "Student's score: " << tArr[i].stuArr[j].stuScore << endl;
        }
    }
}

int main() {
    srand((unsigned int)time(NULL));

    struct teacher tArr[3];
    int len = sizeof(tArr)/sizeof(tArr[0]);
    allocateSpace(tArr, len);
    printInfo(tArr, len);
    return 0;
}