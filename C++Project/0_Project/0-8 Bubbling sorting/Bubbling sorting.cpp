// Bubbling sort algorithm
#include <iostream>

using namespace std;

int main() {
    int arr[10];
    cout << "Please input 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "The sorted array is: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}