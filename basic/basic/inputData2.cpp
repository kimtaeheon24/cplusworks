#include<iostream>
#include<string>   //getline()
using namespace std;
typedef struct Score {
	int eng, math;
	float avg;
}C;
typedef struct Student {
	int number;
	string name;
	C score;

}S;
int main() {
	//학생의 정보
	int number;  //학번
	string name;  //이름
	int eng, math;  //영어점수, 수학점수
	float avg;      //평균

	cout << "학번 입력: ";
	cin >> number;

	cout << "이름 입력: ";
	//cin >> name;
	//ignore() - '\n' 자동 줄바꿈 되지 않도록 하는 함수
	cin.ignore();
	getline(cin, name);

	cout << "영어점수 입력: ";
	cin >> eng;
	cout << "수학점수 입력: ";
	cin >> math;

	//평균 계산
	avg = (float)(eng + math) / 2;  //명시적 형변환

	cout << "\n ========학생의 정보 출력==========\n";
	cout << "학번: " << number << endl;
	cout << "이름: " << name << endl;
	cout << "영어 점수: " << eng << endl;
	cout << "수학 점수: " << math << endl;
	cout << "평균: " << avg << endl;
	

	return 0;
}