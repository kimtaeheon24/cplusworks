#include<iostream>
using namespace std;
class Car {
private:
	string model;   //모델명
	int year;       //연식
public:
	//Car(){} - 기본 생성자
	
	//setter
	void setModel(string model) {
		this->model = model;
	}
	void setYear(int year) {
		this->year = year;
	}
	//getter
	string getModel() {return model;}
	int getYear() {	return year;}

	void info() {
		cout << "모델명: " << getModel() << endl;
		cout << "연식: " << getYear() << endl;
	}

};

int main() {

	//동적 객체 배열 생성
	const int SIZE = 3;
	Car* cars = new Car[SIZE];

	//모델명, 연식 저장
	cars[0].setModel("소나타");
	cars[0].setYear(2017);
	cars[1].setModel("아이오닉6");
	cars[1].setYear(2023);
	cars[2].setModel("BMW");
	cars[2].setYear(2025);

	//정보 출력
	for (int i = 0; i < SIZE; i++) {
		cars[i].info();
	}


	delete[] cars;  //메모리 해제
	return 0;
}