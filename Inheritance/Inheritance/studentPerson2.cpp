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
	cout << "�ȳ��ϼ���. �̸�: " << name << endl;
}
void Person::disInfo() {
	cout << "Person name: " << name << endl;
}
//Person�� ����� Student Ŭ����
class Student : public Person {
	int studentId; //�й�

public:
	Student(string name, int studentId) :
		Person(name), studentId(studentId){}  //�θ� ��� ������ ���
	//�Լ� ������
	void greet();
	void disInfo();
	
};
void Student::greet() {  // �Լ� ������ name ���� ���� - protected �̹Ƿ�
	cout << "�ȳ��ϼ���. �̸�: " << name << ", �й�: " << studentId << endl;
}
void Student::disInfo() {  //Student Ŭ������ ���� ��� �Լ� - �Լ� �������̵�
	cout << "Student name: " << name << endl;
}

int main() {
	Person p1("������");
	p1.greet();
	p1.disInfo();

	Student st1("������", 101);
	st1.greet();
	st1.disInfo();

	return 0;
}