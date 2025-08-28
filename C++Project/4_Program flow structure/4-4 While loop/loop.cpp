// while loop example: 九九乘法表
#include <iostream>
using namespace std;

int main() {
    int i = 1, j = 1;
    while (i <= 9) {
        j = 1; // Reset j for each new row
        while (j <= i) {
            cout << j << " * " << i << " = " << j * i << "\t";
            j++;
        }
        cout << endl; // Move to the next line after finishing one row
        i++;
    }
}