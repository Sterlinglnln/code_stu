#include <iostream>
#include <windows.h>
using namespace std;

class myHouse {
    friend void goodGuy(const myHouse& guy); //全局函数作友元，可访问私有对象

private:
    string myBedroom;

public:
    string mySettingroom;
    myHouse() : myBedroom("private room!"), mySettingroom("public room!") {};
};

void goodGuy(const myHouse& guy) {
    cout << "Your guy is visitting your " << guy.mySettingroom << endl;
    cout << "Your guy is visitting your " << guy.myBedroom << endl;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    myHouse h1;
    goodGuy(h1);

}