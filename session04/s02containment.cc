#include <iostream>
using namespace std;

class Wheel {
private:
	int pressure;
	static int count;
public:
	Wheel(int pressure): pressure(pressure) {}
};

//global definition of static variable
int Wheel::count = 0;


class Engine {
private:
	const int hp;
public:
	Engine(int hp) : hp(hp) { // initializer list, good
		//		this->hp = hp;  more like java syntax, not good
	}
};

// car should have 4 wheels and an engine
class Car {
private:
	Engine e;
	Wheel w1,w2,w3,w4;
public:
	Car(int hp, int p) : e(hp), w1(p), w2(p), w3(p), w4(p) {} 

};

int main() {
	cout << sizeof(Engine) << '\n';
	cout << sizeof(Wheel) << '\n';
	cout << sizeof(Car) << '\n';
	Car c(480, 30);
	cout << sizeof(c) << '\n';
}
