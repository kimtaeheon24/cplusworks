#include<iostream>
using namespace std;

class Car {
	string model;
	int year;

public:
	Car(string model, int year);
	void drive();
	void showInfo();

};
Car::Car(string model, int year) {
	//this에 화살표 연산자 사용
	this->model = model;
	this->year = year;
}
void Car::drive() {
	cout <<this->model<<"가(이)차가 달립니다.\n";
}
void Car::showInfo() {
	cout << "모델명: " << this->model << endl;
	cout << "연식: " << this->year << endl;
}
int main() {
	/*Car car1("Ionic6", 2023);
	car1.showInfo();
	car1.drive();

	Car car2("아반떼", 2016);
	car2.showInfo();
	car2.drive();*/

	Car cars[3] = {
		Car("Ionic6", 2023),
		Car("아반떼", 2016),
		Car("K7",2025)
	};
	for (int i = 0; i < 3; i++) {
		cars[i].drive();
		cars[i].showInfo();
	}


	return 0;
}