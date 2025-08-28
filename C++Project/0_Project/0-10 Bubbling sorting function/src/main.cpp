#include <iostream>
#include "../include/Bubling.h"

using namespace std;

int main() {
    int arr[5] = {4, 2, 1, 3, 0};
    Bubling(arr, 5);
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << "\t";
    }
    return 0;
}