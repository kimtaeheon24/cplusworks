#include<iostream>
#include<iomanip>
using namespace std;
/*
	- 접근 제어자 : private:, pubilc:
	               멤버 변수는 기본적으로 private 속성
				   함수 형태 : set + 멤버변수이름(), get + 멤버변수이름() 
*/
class Dog {
private:
	string type;
	int age;
	
public:
	Dog() {} //기본 생성자

	//설정자(setter)
	void setType(string _type) {
		type = _type;
	}
	void setAge(int _age) {
		age = _age;
	}

	//접근자(getter)
	string getType() {
		return type;
	}
	int getAge() {
		return age;
	}

};
int main() {
	Dog dog1;
	//dog1.type 접근 불가
	dog1.setType("진돗개");
	dog1.setAge(3);
	cout << "강아지 종류: "<< dog1.getType() << endl;
	cout << "강아지 나이: "<< dog1.getAge() << endl;

	return 0;
}