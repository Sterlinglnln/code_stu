// There are 5 pigs in the farm, please judge which pig is the heaviest and print its weight.
#include <iostream>

using namespace std;

int main() {
    int pigs[5];
    cout << "Please input the weights of 5 pigs: ";
    for (int i = 0; i < 5; i++) {
        cin >> pigs[i];
    }
    int maxWeight = pigs[0];
    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (pigs[i] > maxWeight) {
            maxWeight = pigs[i];
            maxIndex = i;
        } 
    }
    cout << "The heaviest pig is pig " << maxIndex + 1 << " with a weight of " << maxWeight << " kg." << endl;
    return 0;
}