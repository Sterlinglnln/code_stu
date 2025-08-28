#include <iostream>
#include <cstring>

using namespace std;

// 浅拷贝
class MyString {
private:
    char* data;
    int length;

public:
    // 构造函数
    MyString(const char* str = "") {
        length = strlen(str);
        data = new char[length + 1];
        strcpy(data, str);
    }

    // 浅拷贝的拷贝构造函数
    MyString(const MyString& other) {
        this->length = other.length;
        this->data = other.data; // 浅拷贝：直接复制指针
    }

    // 析构函数
    ~MyString() {
        delete[] data;
    }

    void print() const {
        cout << data << endl;
    }
};

int main() {
    MyString str1("Hello");
    MyString str2 = str1; // 调用浅拷贝的拷贝构造函数

    str1.print(); // 输出: Hello
    str2.print(); // 输出: Hello

    // 问题：str1和str2共享同一块内存
    // 当其中一个对象析构时，另一个对象的data指针变为悬空指针
    return 0;
}




// 深拷贝
class MyString {
private:
    char* data;
    int length;

public:
    // 构造函数
    MyString(const char* str = "") {
        length = strlen(str);
        data = new char[length + 1];
        strcpy(data, str);
    }

    // 深拷贝的拷贝构造函数
    MyString(const MyString& other) {
        this->length = other.length;
        this->data = new char[length + 1]; // 分配新内存
        strcpy(this->data, other.data);    // 复制内容
    }

    // 深拷贝的赋值运算符重载
    MyString& operator=(const MyString& other) {
        if (this != &other) {
            delete[] data; // 释放原有资源
            
            this->length = other.length;
            this->data = new char[length + 1];
            strcpy(this->data, other.data);
        }
        return *this;
    }

    // 析构函数
    ~MyString() {
        delete[] data;
    }

    void print() const {
        cout << data << endl;
    }
};

int main() {
    MyString str1("Hello");
    MyString str2 = str1; // 调用深拷贝的拷贝构造函数

    str1.print(); // 输出: Hello
    str2.print(); // 输出: Hello

    // str1和str2拥有独立的内存空间
    // 一个对象析构不会影响另一个对象
    return 0;
}