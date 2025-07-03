#include<iostream>
#include<vector>
using namespace std;
/*
	auto 자료형은 변수의 타입을 자동 추론할 수 있다.
*/

//int square(int x) {
//	return x * x;
//}

//인라인 함수(한 줄에 사용한 함수)  
//- 호출이 발생하지 않고, 함수 본문을 복사해서 삽입
int square(int x) {	return x * x;}

int main() {
	auto ch = 'k';
	auto num = 12;
	auto unit = 2.54;
	auto* ip = &num;

	cout << ch <<", " << num <<", "<< unit 
		<<", "<<*ip << endl;
	
	//함수의 리턴 타입
	auto value = square(9);
	cout << value << endl;

	//벡터 자료구조
	vector<int>vec = { 1,2,3,4 };

	//범위 기반 for문
	for (auto& v : vec) {
		cout << v << " ";
	}


	return 0;
}