#include <iostream>

using namespace std;

class Cube {
public:
    double cubeLength;
    double cubeWidth;
    double cubeHeight;    
    double getSurArea() {
        return 2 * (cubeHeight * cubeLength + cubeHeight * cubeWidth + cubeLength * cubeWidth);
    }
    double getVolume() {
        return cubeHeight * cubeLength * cubeWidth;
    }
};

int main() {
    Cube c1Arr[2];
    for (int i = 0; i < 2; i++) {
        cout << "Please enter cube" << i + 1 << "'s length: ";
        cin >> c1Arr[i].cubeLength;
        cout << "Please enter cube" << i + 1 << "'s width: ";
        cin >> c1Arr[i].cubeWidth;
        cout << "Please enter cube" << i + 1 << "'s height: ";
        cin >> c1Arr[i].cubeHeight;
        cout << "The surface area of the cube" << i+1 << " is " << c1Arr[i].getSurArea() << endl;
        cout << "The volume of the cube" << i+1 << " is " << c1Arr[i].getVolume() << endl;
    }

    cout << "Please judge if cube1 is equal to cube2:" << endl;
    system("pause");
    system("cls");
    if (c1Arr[0].cubeHeight == c1Arr[1].cubeHeight && c1Arr[0].cubeLength == c1Arr[1].cubeLength && c1Arr[0].cubeWidth == c1Arr[1].cubeWidth) {
        cout << "Cube1 is equal to cube2!" << endl;
    }
    else {
        cout << "cube1 is not equal to cube2!" << endl; 
    }   
}