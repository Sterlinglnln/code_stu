// Statistical test scores, print the total score for each student
#include <iostream>

using namespace std;

int main() {
    int scores[][3] = {
        {85, 95, 84},
        {80, 84, 82},
        {90, 98, 95}
    };
    int totalScores[3] = {0, 0, 0};
    string students[] = {"John", "Alice", "Bob"};
    // Calculate total scores for each student
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            totalScores[i] += scores[i][j];
        }
    }
    // Print total scores for each student
    for (int i = 0; i < 3; i++) {
        cout << "Total score for " << students[i] << " is " << totalScores[i] << endl;
    }
    return 0;
}