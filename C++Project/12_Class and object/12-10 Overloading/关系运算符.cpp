#include <iostream>
using namespace std;

// 关系运算符
class Person {
private:
    string mName;
    int mAge;

public:
    Person(string name, int age) : mName(name), mAge(age) {}

    bool operator==(const Person &p) {
        if (this->mName == p.mName && this->mAge == p.mAge) {
            return true;
        }
        return false;
    }
};

void test01() {
    Person p1("Tom", 19);
    Person p2("Alice", 18);

    if (p1 == p2) {
        cout << "p1 is equal to p2" << endl;
    }
    else {
        cout << "p1 is not equal to p2" << endl;
    }

}

int main() {
    test01();

    return 0;
}