// 判断这三只猪中哪个是最重的
#include <iostream>
using namespace std;

int main() {
    float pigmalbsMd, pigHeavyGod, pigSnax;
    cout << "Enter the weight of Pigs in pounds. " << endl;
    cout << "1.pigmalbsMd: ";
    cin >> pigmalbsMd;
    cout << "2.pigHeavyGod: ";
    cin >> pigHeavyGod;
    cout << "3.pigSnax: ";
    cin >> pigSnax;
    if (pigmalbsMd > pigHeavyGod && pigmalbsMd > pigSnax) {
        cout << "PigmalbsMd is the heaviest." << endl;
    } else if (pigHeavyGod > pigmalbsMd && pigHeavyGod > pigSnax) {
        cout << "PigHeavyGod is the heaviest." << endl;
    } else if (pigSnax > pigmalbsMd && pigSnax > pigHeavyGod) {
        cout << "PigSnax is the heaviest." << endl;
    } else {
        cout << "There is a tie between two or more pigs." << endl;
    }
    return 0;
}