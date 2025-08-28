#include <iostream>

using namespace std;

int main() {
    int arr[10];
    cout << "Please enter ten elements: " << " ";
    for(int i = 0; i< 10; i++) {
        cin >> arr[i];
    }
    int * p = arr;
    for (int i = 0; i < 10; i++) {
        cout << *p << "\t";
        p++;
    }
    return 0;
}