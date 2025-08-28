#include <iostream>

using namespace std;

//访问权限三种：公共权限public、保护权限protected、私有权限private

// class Person {
// public:
//     string name;

// protected:
//     string car;

// private:
//     int password;

// public:
//     void func() {
//         cout << "Please enter your name:" << " ";
//         getline(cin, name);
//         cout << "Please enter your passwaord:" << " ";
//         cin >> password;
//         cout << "Please select your car:" << " ";
//         cin >> car;
//         cout << car << " has been sended to your location!" << endl;
//     }
// };

// struct和class的区别：struct默认公有，class默认私有
// struct Person {
//     string name;
//     int password;
//     string car;
// };

//成员属性为私有
class Person {
public:
    void setName(string setName) {
        name = setName;
    }
    string getName() {
        return name;
    }


    void setAge(int mAge) {
        if (mAge < 0 || mAge > 150) {
        cout << "You enter a wrong age!" << endl;
        return;
        }
        age = mAge;
    }
    int getAge() {
        return age;
    }
    
    void setIdol(string idolName) {
        idol = idolName;
    }

private:
    string name;
    int age = 18;
    string idol;
};

int main() {
    Person p1;
    p1.setName("John");
    cout << "Your name is " <<  p1.getName() << endl;
    p1.setAge(180);
    cout << p1.getAge() << endl;
    p1.setIdol("Alice");
    // Person p1;
    // p1.func();
}