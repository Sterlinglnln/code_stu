#include <iostream>
#include <windows.h>
using namespace std;

class base {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son : public base {
public:
    int m_D;
};

// 利用开发人员命令提示工具查看对象模型
// 跳转盘符
// 跳转文件路径
// 查看命名 dir
// cl /d1 reportSingleClassLayout类名 文件名

void test01() {
    cout << "Size of Son = " << sizeof(Son) << endl;
}

int main() {
    test01();
}