// switch statement
#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your score (0-100): ";
    cin >> score;
    switch (score / 10) {
        case 10:
        case 9:
            cout << "grade: A" << endl;
            break;
        case 8:
            cout << "grade: B" << endl;
            break;
        case 7:
            cout << "grade: C" << endl;
            break;
        case 6:
            cout << "grade: D" << endl;
            break;
        default:
            cout << "grade: F" << endl;
            break;
    }
}