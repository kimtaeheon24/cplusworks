#include<iostream>
using namespace std;
int main() {
	//몫과 나머지
	int bread = 20, people = 3;
	int share, remainder;
	
	share = bread / people;
	remainder = bread % people;

	cout << "몫: " << share << endl;  //6
	cout << "나머지: " << remainder << endl;  //2

	//논리 연산자 - &&, ||, !
	int a = 3, b = 4, c = 5;
	int res1, res2, res3;
	res1 = (a < b) && (b == c);  //true(1) && false(0) -> false(0)
	res2 = (a < b) || (b == c);   //true(1) || false(0) -> true(1)
	res3 = !(b > c);   //!0 = 1

	cout << res1 << ", "<< res2 << ", "<< res3 << endl;

	return 0;
}