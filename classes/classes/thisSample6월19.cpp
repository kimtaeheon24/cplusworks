#include<iostream>
using namespace std;
/*
	this의 사용 이유 - 외부 입력변수와 멤버 변수의 이름을 같게해서
	                  유지 보수시에 효율성을 갖도록 함
					  (java - this, python - self)
*/
class BirthDay {
private:
	int day;
	int month;
	int year;

public:
	void setYear(int year) {
		//객체 자신의 메모리상의 주소를 나타내는 포인터
		this->year = year;
	}
	void printThis() {
		cout << this << endl;
	}
};
int main() {
	BirthDay bDay;
	bDay.setYear(2025);

	//객체의 주소 출력
	cout << &bDay << endl;

	//this 주소
	bDay.printThis();

	return 0;
}