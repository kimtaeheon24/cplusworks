#include<iostream>
using namespace std;

/*
	template 키워드를 사용한 템플릿 함수 생성
	모든 자료형을 대입 가능함
*/


class Math {
public:
	//T는 일반 자료형 - 사용할 때 적당한 자료형 사용
	template <typename T>
	static T myAbs(T x) {  //절대값 계산 함수
		return (x < 0) ? -x : x;
	}

	template <typename T>
	static T min(T x, T y) {
		return (x < y) ? x : y;
	}

};

int main() {
	//Math 클래스의 myAbs() 호출
	//정수형 값 대입
	cout << "절대값: " << Math::myAbs(-8) << endl;
	//실수형 값 대입 - double 타입 지원
	cout << "절대값: " << Math::myAbs(-8.8) << endl;
	
	//Math 클래스의 min() 호출
	cout << "최소값: " << Math::min(10, 20) << endl;
	cout << "최소값: " << Math::min(10.1, 20.1) << endl;


	return 0;
}