#include <iostream>
using namespace std;

//기본 매개변수(Default Parameter)
void take(int busNumber, int fee = 1500) {
	cout << busNumber << "번 버스" << " 요금: " << fee << "원 " << endl;
}


//정적 변수(static variable)
void click() {
	int x = 10;  //지역변수 - 호출후에 소멸함
	static int y = 10;  //호출 후에도 계속 값을 유지(프로그램이 종료되면 소멸)

	x++;
	y++;
	cout << "x=" << x << "y=" << y << endl;
}

int main() {
	//take(100);   //인자값을 생략하면 기본값이 출력
	//take(100, 2000);
	click();
	click();


	return 0;
}