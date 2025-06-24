#include<iostream>
#include<string>
using namespace std;

//카드번호 자동 발급
class Card {
private:
	static int serialNum;  //시리얼 넘버 - 기준번호
	string name;	//고객 이름
	int cardNumber;  //카드 번호
public:
	//Card(){  //기본 생성자
	//	serialNum++;
	//	cardNumber = serialNum;
	//}  

	//생성자
	/*Card(string name) {
		serialNum++;
		cardNumber = serialNum;
		this->name = name;
	}*/

	//생성자 초기화 목록(기본 생성자 포함)
	Card(string name = " ") : name(name), cardNumber(++serialNum) {}

	//set 설정자
	void setName(string name) {
		this->name = name;
	}
	int getCardNumber() { return cardNumber; }
	string getName() { return name; }
};

//전역 공간
int Card::serialNum = 1000;

int main() {
	//객체 배열로 카드 발급
	const int SIZE = 3;
	Card cards[SIZE];  //기본 생성자 배열 생성
	
	for (int i = 0; i < SIZE; i++) {
		string name;
		cout << i + 1 << "번째 고객이름 입력: ";
		cin.ignore();
		getline(cin, name);
		cards[i].setName(name);
	}
	/*Card cards[SIZE] = {   //매개변수가 있는 생성자
		Card("신유지"),    
		Card("이정우"),
		Card("우상형")
	};*/
	for (int i = 0; i < SIZE; i++) {
		cout << "고객 이름: " << cards[i].getName() << "\n카드 번호: " <<
			cards[i].getCardNumber() << endl;
	}
	


	return 0;
}