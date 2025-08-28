#include <iostream>
using namespace std;

class myPrint {
public:
    void operator()(string test) {
        cout << test << endl;
    }
};

void test01() {
    myPrint p1;
    // p1("Hello, world!");
    p1.operator()("Hello, world!");
}

int main() {
    test01();

    return 0;
}