//dog.cpp

#include"dog.h"

//생성자
Dog::Dog(string type, int age) {
	this->type = type;
	this->age = age;
}

//getType() 구현
string Dog::getType() {
	return type;
}
//getAge() 구현
int Dog::getAge() {
	return age;
}


