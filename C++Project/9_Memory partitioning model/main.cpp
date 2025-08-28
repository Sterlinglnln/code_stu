#include <iostream>

using namespace std;

/*
    全局 / 静态 / 常量存储区:
    1.用途: 存储全局变量、静态变量和常量
    2.特点: 内存是在程序启动时分配的，在整个程序运行期间都存在,未初始化的全局变量和静态变量会被自动初始化为 0。
    存储的数据是只读的，尝试修改会导致未定义行为。有些实现可能会将常量数据合并，以节省空间。
*/
int globalVar = 10; // 全局变量，存储在全局区

void staticDemo() {
    static int staticVar = 0; // 静态变量，存储在全局区
    const int PI = 3.14; // 存储在常量区
    const char* msg = "Hello"; // "Hello"存储在常量区，msg存储在栈上
}

/*
    栈内存（Stack）：
    1.用途：用来存储局部变量、函数参数以及函数调用的上下文信息。
    2.特点：内存的分配和释放是自动进行的。当进入一个函数时，会为函数内的局部变量分配栈空间；函数执行结束后，这些空间会被自动释放。
    内存的分配和释放速度很快，这是因为它遵循后进先出（LIFO）的原则，由操作系统直接管理。
    存储的数据大小在编译时就需要确定，并且栈的空间是有限的，如果超出限制，会引发栈溢出错误。
*/
void func() {
    int a = 10;         // 存储在栈上
    string s = "hello"; // 栈上存储对象，对象内部数据可能在堆上
} // 函数结束后，a和s的内存被自动释放

/*
    堆内存（Heap）
    1.用途：用于动态分配内存，在程序运行时根据需要分配和释放内存。
    2.特点：内存的分配和释放需要程序员手动控制，通过new和delete（或malloc和free）操作符来实现。
    空间较大，但分配和释放的速度相对较慢，而且容易出现内存泄漏（忘记释放内存）和悬空指针（释放后仍然使用指针）的问题。
    数据的生命周期可以跨越函数调用，灵活性高。
*/
int* dynamicAllocation() {
    int* ptr = new int(42); // 在堆上分配一个整数
    return ptr;
}

// new和delete
int* fuction() {
    int* p = new int(42);
    return p;
}

void test01() {
    int* p = fuction();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    delete p;
    cout << *p << endl;
}

void test02() {
    int* arr = new int[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 100;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    test01();
    test02();
}