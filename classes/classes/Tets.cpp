#include<iostream>
using namespace std;
/*
	C++은 모두 사용
	배열 - 같은(한가지) 유형의 여러개의 자료를 저장하는 자료형
	구조체(struct) - 여러개의 자료형을 묶은 복합 자료형
	클래스(class) - 여러개의 자료형과 변수(속성), 여러개의 함수(기능)를 포함한 자료형
*/
//Dog 클래스 정의
class Dog {
	//멤버 변수

public: //외부에서 접근 가능
	string type;   //종류
	int age;       //나이

	//멤버 함수
	void bark() {
		cout << "왈~ 왈~";
	}
	void dogInfo() {
		cout << "강아지 종류: " << type << endl;
		cout << "강아지 나이: " << age << endl;
	}
};
int main() {
	Dog dog1;  //클래스 사용 - 인스턴스(객체) 생성
	dog1.type = "푸들";
	dog1.age = 3;


	cout << "강아지 종류: " << dog1.type << endl;
	cout << "강아지 나이: " << dog1.age << endl;
	dog1.bark();

	return 0;
}