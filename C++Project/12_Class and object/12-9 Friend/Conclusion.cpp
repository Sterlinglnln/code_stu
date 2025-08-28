#include <iostream>
#include <windows.h>
using namespace std;

class Car;
class Engine;
class Mechanic;

class Wheel {
private:
    int pressure;
public:
    Wheel(int p) : pressure(p) {}
    friend void checkPressure(const Wheel& w);
};

void checkPressure(const Wheel& w) {
    cout << "轮胎压力: " << w.pressure << " PSI" << endl;
}

class Engine {
private:
    int power;
    bool running;
    
public:
    Engine(int p) : power(p), running(false) {}
    
    friend class Mechanic;
    
    void displayStatus() const {
        cout << "引擎状态: " << (running ? "运行中" : "已停止") << endl;
    }
};

class Car {
private:
    string model;
    int speed;
    Engine* engine;
    
public:
    Car(string m) : model(m), speed(0), engine(nullptr) {}
    
    friend class Mechanic;
    
    void setEngine(Engine* e);
};

class Mechanic {
private:
    string name;
    
public:
    Mechanic(string n) : name(n) {}
    
    void startEngine(Car& car);
    void checkCar(Car& car);
};

void Car::setEngine(Engine* e) {
    engine = e;
}

void Mechanic::startEngine(Car& car) {
    if (car.engine) {
        car.engine->running = true;
        car.speed = 10;
        cout << name << " 启动了 " << car.model << " 的引擎" << endl;
    } else {
        cout << car.model << " 没有引擎！" << endl;
    }
}

void Mechanic::checkCar(Car& car) {
    cout << "检查 " << car.model << "..." << endl;
    cout << "当前速度: " << car.speed << " km/h" << endl;
    if (car.engine) {
        cout << "引擎功率: " << car.engine->power << " HP" << endl;
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    Wheel w(32);
    Car myCar("特斯拉 Model 3");
    Engine myEngine(300);
    Mechanic mechanic("李师傅");
    
    checkPressure(w);
    myCar.setEngine(&myEngine);
    mechanic.startEngine(myCar);
    mechanic.checkCar(myCar);
    myEngine.displayStatus();
    
    return 0;
}