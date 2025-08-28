#include <iostream>
using namespace std;

class myHouse;
class goodGuy {
public:
    goodGuy();
    void visiting();
    myHouse * h1;
};

class myHouse {
    friend class goodGuy;

public:    
    string mySettingroom;
    myHouse();
private:
    string myBedroom;
};

goodGuy::goodGuy() {
    h1 = new myHouse;
}

void goodGuy::visiting() {
    cout << "Your guy is visiting " << h1->mySettingroom << endl;
    cout << "Your guy is visiting " << h1->myBedroom << endl;
}

myHouse::myHouse() : mySettingroom("public room!"), myBedroom("private room!") {}

int main() {
    goodGuy g1;
    g1.visiting();
}