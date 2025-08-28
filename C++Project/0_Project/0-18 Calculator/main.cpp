#include <iostream>
#include <windows.h>
using namespace std;

//普通写法
class calculator {
private:
    int num1;
    int num2;

public:
    calculator(int mNum1, int mNum2) : num1(mNum1), num2(mNum2) {}

    int getResult(string oper) {
        if (oper == "+") {
            return num1 + num2;
        }
        else if (oper == "-") {
            return num1 - num2;
        }
        else if (oper == "*") {
            return num1 * num2;
        }
        else if (oper == "/" ) {
            if (num2 == 0) 
                return 0;
            else 
                return num1 / num2;
        }
        else {
            return 0;
        }
    }
};

void test01() {
    calculator c1(10,0);

    int sum = c1.getResult("+");
    cout << "sum = " << sum << endl;

    int drc = c1.getResult("-");
    cout << "drc = " << drc << endl;

    int mul = c1.getResult("*");
    cout << "mul = " << mul << endl;

    int chu = c1.getResult("*");
    cout << "chu = " << chu << endl;

}

//多态
// 计算器抽象类
class abstractCalculator {
    friend void test02();
protected:
    int num1;
    int num2;

public:
    virtual int getResult() {
        return 0;
    }
};

// 计算器加法类
class addCalculator : public abstractCalculator {
public:
    int getResult() {
        return num1 + num2;
    }
};

//计算器减法类
class subCalculator : public abstractCalculator {
public:
    int getResult() {
        return num1 - num2;
    }
};

// 计算器乘法类
class mulCalculator : public abstractCalculator {
public:
    int getResult() {
        return num1 * num2;
    }
};

void test02() {
    abstractCalculator* abc = new addCalculator;
    abc->num1 = 10;
    abc->num2 = 10;
    cout << abc->num1 << " + " << abc->num2 << " = " << abc->getResult() << endl;
    delete abc;

    abc = new subCalculator;
    abc->num1 = 100;
    abc->num2 = 20;
    cout << abc->num1 << " - " << abc->num2 << " = " << abc->getResult() << endl;
    delete abc;

    abc = new mulCalculator;
    abc->num1 = 100;
    abc->num2 = 20;
    cout << abc->num1 << " * " << abc->num2 << " = " << abc->getResult() << endl;
    delete abc;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // test01();
    test02();

    return 0;
}