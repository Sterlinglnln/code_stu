#include <iostream>

using namespace std;

class MessageFromCpp {
private:
    string message;

public:
    MessageFromCpp(string& msg) : message(msg) {
        cout << "Message from C++: " << message << endl;
    }
};

int main() {
    string myMessage, cppMessage;
    cout << "Enter my message: ";
    getline(cin, myMessage);

    cout << "Enter C++ message: ";
    getline(cin, cppMessage);
    MessageFromCpp msgObj(cppMessage);

    return 0;
}
