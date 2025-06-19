//dog.h -> 클래스의 선언부 표기
//헤더 파일이 중복되지 않도록 이름 설정
//조건부 컴파일 블록 시작
#ifndef DOG_H
#define DOG_H  //매크로 이름 정의

#include<iostream>
using namespace std;

class Dog {
private:
	string type;
	int age;

public:
	Dog(string type, int age);
	~Dog(){}

	string getType();
	int getAge();
};

#endif

