#include<iostream>
using namespace std;
/*
	참조자 - 래퍼런스(&)기존의 변수에 별명을 붙이는 방법
	<자료형& 참조변수명>
*/
int main() {
	int n = 1;
	int& x = n;
	int& y = n;

	cout << "x = " << x << ", y = "<< y << endl;  //1, 1

	x = 3;
	cout << "x = " << x << ", y = "<< y <<endl;  //3, 3


	return 0;
}