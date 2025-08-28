// One-dimensional array
#include <iostream>

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << sizeof(arr) << endl; // Output the size of the array in bytes
    cout << sizeof(arr[0]) << endl; // Output the size of one element in
    cout << sizeof(arr) / sizeof(arr[0]) << endl; // Output the number of elements in the array
    cout << arr << endl; // Output the address of the first element in the array
    cout << &arr[0] << endl; // Output the address of the first element in the array
    cout << &arr[1] << endl; // Output the address of the second element in the array
}