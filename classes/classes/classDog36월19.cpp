#include<iostream>
using namespace std;
/*
	-클래스 선언부와 구현부 분리 이유
	 클래스만 헤더파일로 사용가능함
*/
class Dog {
private:
	string type;
	int age;
public:
	Dog(string _type, int _age);   //생성자

	string getType();  //멤버 함수
	int getAge();
};
Dog::Dog(string _type, int _age) {
	type = _type;
	age = _age;
}
string Dog::getType() {
	return type;
}
int Dog::getAge() {
	return age;
}
int main() {
	/*Dog dog1("말티즈",1);
	cout << "강아지 종류: "<< dog1.getType() << endl;
	cout << "강아지 나이: "<< dog1.getAge() << endl;
	Dog dog2("진돗개", 3);
	cout << "강아지 종류: " << dog2.getType() << endl;
	cout << "강아지 나이: " << dog2.getAge() << endl;*/
	
	//객체 배열
	Dog dogs[3] = {
		Dog("말티즈",1),
		Dog("진돗개",3),
		Dog("삽살개",2),
	};

	//1번 인덱스 출력
	/*cout << "강아지 종류: " << dogs[1].getType() << endl;
	cout << "강아지 나이: " << dogs[1].getAge() << endl;*/

	//전체 출력
	for (int i = 0; i < size(dogs); i++) {
		cout << "강아지 종류: " << dogs[i].getType() << endl;
		cout << "강아지 나이: " << dogs[i].getAge() << endl;

	}


	return 0;
}