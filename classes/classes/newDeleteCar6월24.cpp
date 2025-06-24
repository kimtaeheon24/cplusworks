#include<iostream>
using namespace std;

class Car {
private:
	string model;   //모델명
	int year;       //연식

public:
	Car(){}
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
	cout << this->model << "가(이)차가 달립니다.\n";
}
void Car::showInfo() {
	cout << "모델명: " << this->model << endl;
	cout << "연식: " << this->year << endl;
}
int main() {
	//Car car1("소나타", 2020);  //스택 메모리 영역, 점 연산자 
	//동적 객체 생성 - 힙 메모리 영역, 포인터 사용, 화살표 연산자
	//Car* car1 = new Car("소나타", 2020);
	//car1->showInfo();
	//car1->drive();

	//delete car1;  //메모리 해제(반납)

	//동적 개체 배열
	//매개변수가 있는 생성자
	Car* cars = new Car[3]{
		Car("소나타", 2020),
		Car("아이오닉",2024),
		Car("BMW",2022)
	};
	for (int i = 0; i < 3; i++) {
		cars[i].showInfo();   //(cars+i)->showInfo();
	}

	delete[] cars;  //메모리 해제


	return 0;
}