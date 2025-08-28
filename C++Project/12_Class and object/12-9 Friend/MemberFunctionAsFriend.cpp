#include <iostream>
using namespace std;

class Car;

class Engine {
public:
    void start(Car& car);
};

class Car {
private:
    int speed;
public:
    Car() : speed(0) {}
    friend void Engine::start(Car& car);
    int getSpeed() const { return speed; }
};

void Engine::start(Car& car) {
    car.speed = 10;
}

int main() {
    Car c1;
    Engine e1;
    e1.start(c1);
    cout << "Car speed: " << c1.getSpeed() << endl;
    return 0;
}