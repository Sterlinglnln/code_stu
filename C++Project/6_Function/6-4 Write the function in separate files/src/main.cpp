#include <iostream>
#include "../include/sum.h"

using namespace std;

int main() {
    int x = 5, y = 15;
    int num = sum(x, y);
    cout << "num = " << num << endl;
    return 0;
}