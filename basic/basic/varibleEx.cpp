#include<iostream>
using namespace std;  //이름공간(std) 선언
/*
	c++에 추가된 자료형 - bool, string
*/
int main() {
	//문자형 자료 
	char ch1 = 'A';  //1byte
	char ch2 = 65;  //코드값
	char ch3[] = "나";  //c언어 배열로 문자 저장
	string str1 = "나";  //문자열 자료형 - string
	string str2 = "apple";
	

	cout << ch1 << ", "<< ch2 << endl;
	cout << ch3 << endl;
	cout << str1 << ", " << str2 << endl;
	
	//bool 자료형 - true(1) / false(0)
	bool val;  //1byte
	val = true;
	cout << val << endl;  //1

	val = false;
	cout << val << endl;  //0

	int n1 = 10, n2 = 20;
	bool b1, b2;

	b1 = (n1 < n2);
	b2 = (n1 == n2);

	cout << b1 << endl;   //1
	cout << b2 << endl;   //0

	//조건 연산자 - (비교) ? 참 : 거짓
	int result1 = (n1 > n2) ? 1 : 0;
	string result2 = (n1 > n2) ? "true" : "false";

	cout << result1 << endl;  //0
	cout << result2 << endl;  //false
	cout << result1 << "," << result2 << endl;  //0,false
	
	return 0;
}