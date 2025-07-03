#include<iostream>
#include<vector>
using namespace std;
class Person {
protected:
	string name;

public:
	//Person(){}	
	Person(string name) : name(name){}
	void greet();
	void disInfo();

};
void Person::greet() {
	cout << "안녕하세요. 이름: " << name << endl;
}
void Person::disInfo() {
	cout << "Person name: " << name << endl;
}
//Person을 상속한 Student 클래스
class Student : public Person {
	int studentId; //학번

public:
	Student(string name, int studentId) :
		Person(name), studentId(studentId){}  //부모 멤버 생성자 상속
	//함수 재정의
	void greet();
	void disInfo();
	
};
void Student::greet() {  // 함수 재정의 name 접근 가능 - protected 이므로
	cout << "안녕하세요. 이름: " << name << ", 학번: " << studentId << endl;
}
void Student::disInfo() {  //Student 클래스의 정보 출력 함수 - 함수 오버라이딩
	cout << "Student name: " << name << endl;
}

int main() {
	Person p1("이종범");
	p1.greet();
	p1.disInfo();

	Student st1("이정후", 101);
	st1.greet();
	st1.disInfo();

	return 0;
}