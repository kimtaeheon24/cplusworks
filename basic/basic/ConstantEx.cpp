#include<iostream>
/*
	상수(constant)	 
	1.매크로 상수	
	2. const 키워드
*/
using namespace std;
//#define PI 3.141592
int main() {
	//원의 넓이 = 원주율 x 반지름 x 반지름
	int radius= 6;
	const double PI = 3.141592;
	double circleArea1, circleArea2;

	//PI = 3.14 //상수는 변경 불가

	/*circleArea1 = PI * radius * radius;
	cout << "원의 넓이: " << circleArea1 << endl;*/

	//소수 자리수 설정
	cout << fixed;
	cout.precision(6);
	circleArea2 = PI * radius * radius;
	cout << "원의 넓이: " << circleArea2 << endl;


	return 0;
}