// using two-dimensional arrays
#include <iostream>

using namespace std;

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    // checking the size of the array
    cout << "Size of the array: " << sizeof(arr) << " bytes" << endl;
    // checking the size of the first row
    cout << "Size of the first row: " << sizeof(arr[0]) << " bytes" << endl;
    // checking the size of each element in the array
    cout << "Size of each element: " << sizeof(arr[0][0]) << " bytes" << endl;
    // checking the first address of the array
    cout << "Address of the first element: " << &arr[0][0] << endl;
    // checking the address of the second element
    cout << "Address of the second element: " << &arr[0][1] << endl;
    // find out the number of rows and columns
    cout << "Number of rows: " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "Number of columns: " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
    // find out the exact address of the element
    cout << "Address of the element at (1, 2): " << &arr[1][2] << endl;
}