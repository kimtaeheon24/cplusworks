#include <iostream>  //입출력 관련 헤더파일
/*
	파일명: printData.cpp
	만든이: 김태헌
	프로그램: Hello~ World 테스트
*/
int main() {
	/*
		std(소속을 의미하는 이름 공간) > cout(출력 스트림)
		:: - 범위 연산자
		endl - 줄바꿈
		<< - 쉬프트 연산자: 오른쪽 데이터를 왼쪽 스트림 객체에 넣음
		>> - 
	*/
	std::cout << "Hello~ World!" << std::endl;
	std::cout << "안녕~ 세상" << std::endl;

	//사칙 연산

	std::cout << 4 + 5 << std::endl;	//9
	std::cout << 4 - 5 << std::endl;	//-1
	std::cout << 4 * 5 << std::endl;	//20
	std::cout << 4.0 / 5 << std::endl; //0.8


	return 0;
}