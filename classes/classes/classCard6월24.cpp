#include<iostream>
using namespace std;

//카드번호 자동 발급
class Card {
private:
	static int serialNum;  //시리얼 넘버 - 기준번호
	string name;	//고객 이름
	int cardNumber;  //카드 번호
public:
	//생성자
	/*Card(string name) {
		serialNum++;
		cardNumber = serialNum;
		this->name = name;
	}*/
	Card(string name): name(name), cardNumber(++serialNum){}
	int getCardNumber() { return cardNumber; }
	string getName() { return name; }
};

//전역 공간
int Card::serialNum = 1000;

int main() {
	//카드 발급
	Card c1("우상형");
	cout << "고객 이름: " << c1.getName() << "\n카드 번호: " << c1.getCardNumber()
		<< endl;

	Card c2("임서연");
	cout << "고객 이름: " << c2.getName() << "\n카드 번호: " << c2.getCardNumber()
		<< endl;

	Card c3("고담덕");
	cout << "고객 이름: " << c3.getName() << "\n카드 번호: " << c3.getCardNumber()
		<< endl;

	return 0;
}