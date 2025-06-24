#include<iostream>
using namespace std;
class Bus {
private:
	int busNumber;	//버스 번호
	int passenger;	//승객 수
	int money;		//수입
	const int FEE;	//버스 요금(상수)
public:
	//생성자 초기화 목록
	Bus(int busNumber, int FEE = 1500) : busNumber(busNumber),
		passenger(0),money(0),FEE(FEE){}
	void take();   //승객을 태운다
	int getFEE();  //요금 가져오기
	void busInfo();   //버스의 정보 출력

};
void Bus::take() {
	money += FEE;  //money = money + FEE;
	passenger++;
}
int Bus::getFEE() {
	return FEE;
}
void Bus::busInfo() {
	cout << busNumber << "번 버스, " << "수입: " << money << "원, "
		<< "승객: " << passenger << "명\n";
}
class Person {
private:
	string name;  //이름
	int money;    //가진 돈
public:
	Person(string name, int money) : name(name), money(money){}
	void takeBus(Bus& bus);	//사람이 버스에 탄다(Bus 클래스 참조), &-참조연산자(복사가능)
	void personInfo();
};
void Person::takeBus(Bus& bus) {
	if (money >= bus.getFEE()) {
		bus.take();
		money -= bus.getFEE();    //가진돈에서 요금만큼 차감됨
	}
	else {
		cout << name <<" 잔액 부족!" << endl;
	}
}
void Person::personInfo() {
	cout << name << ": 잔액 " << money << "원" << endl;
}


int main() {
	Bus bus330(330, 1500);

	/*bus330.busInfo();*/
	Person lee("이정우", 10000);
	Person shin("신유진", 2000);

	//버스에 탑승
	lee.takeBus(bus330);
	shin.takeBus(bus330);
	shin.takeBus(bus330);

	//정보 출력
	lee.personInfo();
	shin.personInfo();
	bus330.busInfo();
	



	return 0;
}