#include<iostream>
using namespace std;

//struct는 멤버변수가 public 접근 속성을 가짐
struct Student {
	string name; //이름
	int grade;   //학년
	string address; //주소

};

//학생의 정보 출력
void sinfo(Student st) {
	cout << "이름: " << st.name << endl;
	cout << "학년: " << st.grade << endl;
	cout << "주소: " << st.address << endl;
}
int main() {
	Student st1;
	st1.name = "이우주";
	st1.grade = 3;
	st1.address = "서울시 노원구 상계동";
	sinfo(st1);


	return 0;
}