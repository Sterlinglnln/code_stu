#include <iostream>
#include <windows.h>
using namespace std;

class animal {
public:
    virtual void speak() {
        cout << "动物在说话！" << endl;
    }
};

class cat : public animal {
    void speak() {
        cout << "小猫在说话！" << endl;
    }
};

class dog : public animal {
public:
    void speak() {
        cout << "小狗在说话！" << endl;
    }
};

void doSpeak(animal &a1) {
    a1.speak();
}

void test01() {
    cat c1;
    doSpeak(c1);

    dog d1;
    doSpeak(d1);
}

void test02() {
    cout << "Size of animal = " << sizeof(animal) << endl;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    test01();
    test02();

    return 0;
}
