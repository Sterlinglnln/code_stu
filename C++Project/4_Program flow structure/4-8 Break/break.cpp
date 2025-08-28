// Using break in switch, loop, and nested loop
#include <iostream>

using namespace std;

int main() {
    // // Example 1: Using berak in a switch statment
    cout << "Please select your game mode:\n";
    cout << "1. Easy Mode\n";
    cout << "2. Normal Mode\n";
    cout << "3. Hard Mode\n";
    cout << "4. Insane Mode\n";
    int mode;
    cin >> mode;
    switch (mode) {
        case 1:
            cout << "You selected Easy Mode.\n";
            break;
        case 2:
            cout << "You selected Normal Mode.\n";
            break;
        case 3:
            cout << "You selected Hard Mode.\n";
            break;
        case 4:
            cout << "You selected Insane Mode.\n";
            break;
        default:
            cout << "Invalid selection. Please try again.\n";
            break;
    }
    
    // // Example 2: Using break in a loop
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            cout << "Breaking the loop at i = " << i << endl;
            break;
        }
    }

    // Example 3: Using break in a nested loop
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << "*   ";
            if (j == 8) {
                cout << "#" << endl; // Print a hash symbol at the end of the row
                break;
            }
        }
        cout << endl; // Print a new line after each row of stars
    }
}