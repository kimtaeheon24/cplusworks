#include<iostream>
#include<vector>
using namespace std;
/*
	매출 전표 프로그램을 다형성으로 구현
	1. virtual 추상 함수 사용 -> 상속받는 클래스에서 구현
	2. new ~ delete 부모형으로 인스턴스 생성
*/
class Drink {
protected:
	string name;   //상품명
	int price;     //가격
	int quantity;  //수량
public:
	Drink(string name, int price, int quantity) :name(name), price(price),
		quantity(quantity) {
	}
	//소멸자 명시
	virtual ~Drink(){}

	//금액 = 가격 x 수량
	int clacPrice() {
		return price * quantity;
	}

	//제목(title) 행
	static void printTitle() {
		cout << "상품명\t가격\t수량\t금액\n";
	}
	//데이터 출력 - 가상 함수
	virtual void printData() = 0;
};

class NonAlcohol : public Drink {
public:
	//생성자 상속 받음
	NonAlcohol(string name, int price, int quantity): 
		Drink(name,price,quantity){ }
	
	//printData() - 반드시 구현
	void printData() {
		cout << name <<"\t" << price << "\t" <<
			quantity << "\t" << clacPrice() << endl;
	}
};

//Drink를 상속한 Alcohol 클래스 정의
class Alcohol : public Drink {
private:
	float alcper;   //주류 도수

public:
	Alcohol(string name, int price, int quantity, float alcper) :
		Drink(name, price, quantity), alcper(alcper) {
	}   //부모 생성자 상속

//함수 오버라이딩
	static void printTitle() {
		cout << "상품명(도수[%])\t 가격\t 수량\t 금액\n";
	}

	void printData() {
		cout << name << "(" << alcper << ")" << price << "\t" <<
			quantity << "\t" << clacPrice() << endl;
	}
};
int main() {
	//다형성으로 인스턴스 생성
	//상위(부모) 클래스로 인스턴스 생성
	Drink* coffee = new NonAlcohol("커피", 2500, 4);
	Drink* tea = new NonAlcohol("녹차", 3000, 3);
	Drink* soju = new Alcohol("소주", 4000, 2, 15.1);

	Drink* drinks[3] = { coffee,tea,soju };
	

	cout << "========== 매출 전표 =========\n";
	Drink::printTitle();
	for (auto drink : drinks) {
		drink->printData();
	}
	
	//금액 계산
	int total = 0;
	for (auto drink : drinks) {
		total += drink->clacPrice();
	}
	
	cout << "*********** 합계 금액 " << total << "원 *********\n";

	delete coffee;
	delete tea;
	delete soju;


	return 0;
}