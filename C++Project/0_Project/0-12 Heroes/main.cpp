#include <iostream>
#include <string>

using namespace std;

struct hero {
    string name;
    int age;
    string gender;
};

void bubbleSort(struct hero arr[], int len) {
    for(int i = 0; i < len - 1; i++) {
        for(int j = 0; j < len - i - 1; j++) {
            if(arr[j].age > arr[j+1].age) {
                struct hero temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printHero(struct hero arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << "Name: " << arr[i].name << "\t"
             << "Age: " << arr[i].age << "\t"
             << "Gender: " << arr[i].gender << endl;
    }
}

int main() {
    hero arr[5] = {
        {"Liubei", 23, "male"},
        {"Guanyu", 22, "male"},
        {"Zhangfei", 20, "male"},
        {"Zhaoyun", 21, "male"},
        {"Diaochan", 19, "female"}
    };
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << "Before sorting:" << endl;
    for (int i = 0; i < len; i++) {
    cout << "Name: " << arr[i].name << "\t"
         << "Age: " << arr[i].age << "\t"
         << "Gender: " << arr[i].gender << endl;
    }
    cout << "After sorting:" <<endl;
    bubbleSort(arr, len);
    printHero(arr, len);
}