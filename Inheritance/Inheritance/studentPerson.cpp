#include<iostream>
#include<vector>
using namespace std;
class Person {
private:
	string name;
	
public:
	//Person(){}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}

};
//Person을 상속한 Student 클래스
class Student : public Person {
	int studentId; //학번
public:
	void setStudentId(int studentId) {
		this->studentId = studentId;
	}
	int getStudentId() {
		return studentId;
	}
};

int main() {

	Person p1;
	p1.setName("이종범");
	cout << "부모의 이름: " << p1.getName() << endl;

	Student st1;
	st1.setName("이정후");    //부모의 함수 호출
	st1.setStudentId(101);   //자신의 함수 호출
	cout << "학생의 이름: " << st1.getName() << ", 학번: " << st1.getStudentId()
		<< endl;


	return 0;
}