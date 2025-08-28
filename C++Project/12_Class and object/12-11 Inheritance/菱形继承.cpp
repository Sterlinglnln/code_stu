#include <iostream>
using namespace  std;

class animal {
public:
    int mAge;
};

class sheep : virtual public animal {};

class tuo : virtual public animal {};

class sheeptuo : public sheep, public tuo {};

void test01() {
    sheeptuo st1;

    st1.sheep::mAge = 18;
    st1.tuo::mAge = 20;

    cout << "st1.sheep::mAge = " << st1.sheep::mAge << endl;
    cout << "st1.tuo::mAge = " << st1.tuo::mAge << endl;
    cout << "st1.mAge = " << st1.mAge << endl;
}

int main() {
    test01();
    
    return 0;
}