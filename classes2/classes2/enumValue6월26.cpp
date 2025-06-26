#include<iostream>
#include<string>
using namespace std;

//열거형 상수 자료형 - 대문자(관례)
//기본 인덱스 0부터 시작함
enum VALUE {
	VALUE_A = 1, //1로 명시하면 1부터 시작함
	VALUE_B,
	VALUE_C

};
enum SEASON {
	봄,
	여름,
	가을,
	겨울
};

int main() {
	//enum 자료형 사용
	enum VALUE val;
	val = VALUE_A;

	cout << val << endl;

	//SEASON 사용
	enum SEASON season;
	
	if (season == 2) {
		cout<<"현재 계졀은 여름 입니다.\n";
	}
	else {
		cout << "현재 계절은 여름이 아닙니다.\n";
	}
	

	//상수 생성
	/*const int VALUE_A = 1;
	const int VALUE_B = 2;

	cout << VALUE_A << endl;
	cout << VALUE_B << endl;*/

	return 0;
}