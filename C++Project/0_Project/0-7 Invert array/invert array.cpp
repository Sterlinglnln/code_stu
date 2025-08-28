// Invert arrays
#include <iostream>

using namespace std;

int main() {
    int arr[5];
    cout << "Please input 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "The inverted array is: ";
    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}