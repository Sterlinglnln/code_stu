#include <iostream>
#include <windows.h>
using namespace std;

// 继承实现页面
class BasePage {
public:
    void header() {
        cout << "首页、公开课、登录..." << endl;
    }
    void footer() {
        cout << "帮助中心..." << endl;
    }
    void left() {
        cout << "Java, Pathon, C++..." << endl;
    }
};

class Java : public BasePage {
public:
    void content() {
        cout << "Java学科视频" << endl;
    }
};

class Python : public BasePage {
public:
    void content() {
        cout << "Python学科视频" << endl;
    }
};

class Cpp : public BasePage {
public:
    void content() {
        cout << "C++视频如下" << endl;
    }
};

void test01() {
    cout << "Java下载视频如下：" << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    cout << "——————————————————————————" << endl;

    cout << "Pathon下载视频如下：" << endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();
    cout << "——————————————————————————" << endl;

    cout << "C++下载视频如下：" << endl;
    Cpp cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.content();
    cout << "——————————————————————————" << endl;

}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    test01();
}