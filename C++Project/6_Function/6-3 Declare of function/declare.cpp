#include <iostream>

using namespace std;

int max(int a, int b);

int main() {
    int result = max(5, 10);
    cout << "The maximum value is: " << result << endl;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}