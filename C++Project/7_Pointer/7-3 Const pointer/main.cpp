#include <iostream>

using namespace std;

int main() {
    // const int * p = (int *)0x1111;
    // int a = 10;
    // int b = 20;
    // p = &a;
    // *p = a; //常量指针不可修改所指对象

    // int * const p = (int *)0x1111;
    // int a = 10;
    // int b = 20;
    // p = &a;
    // *p = a; // 指针常量不可修改指向对象地址

    const int * const p = (int *)0x1111;
    int a = 10;
    int b = 20;
    p = &a;
    *p = a; //指向常量的常量指针不可修改所指对象和地址
}