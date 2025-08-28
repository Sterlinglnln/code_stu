#include <iostream>
#include <windows.h>
using namespace std;

// 继承方式

// 公共继承
class Base1 {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son1 : public Base1 {
public:
    void func() {
        m_A = 10;
        m_B = 10;
        // m_C = 10; //私有权限成员子类不可访问
    }
};

// 保护继承
class Base2 {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son2 : protected Base2 {
public:
    void func() {
        m_A = 100;
        m_B = 100;
        // m_C = 100; // 私有权限成员子类不可访问
    }
};

// 私有继承
class Base3 {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son3 : private Base3 {
public:
    void func() {
        m_A = 100;
        m_B = 100;
        // m_C = 100; // 私有权限成员子类不可访问
    }
};

void test() {
    Son1 s1;
    s1.m_A = 100;
    // s1.m_B = 100; // 类外保护权限成员不可访问
    Son2 s2;
    // s2.m_A = 100; // 类外保护权限成员不可访问
    // s2.m_B = 100; // 类外保护权限成员不可访问
    Son3 s3;
    // s3.m_A = 100; // 类外私有权限成员不可访问
    // s3.m_A = 100; // 类外私有权限成员不可访问
    // s3.m_B = 100; // 类外私有权限成员不可访问
    cout << s1.m_A << endl;
}

int main() {
    test();
}