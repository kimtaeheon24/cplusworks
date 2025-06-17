#include<iostream>
#include<iomanip>
using namespace std;
int main() {


	//문자형 배열 관리 - c언어

	//char season[4][10] = { "봄","여름","가을","겨울" };
	//printf("%s\n", season[0]);
	//int len = sizeof(season) / sizeof(season[0]);
	//printf("%d\n", len);

	//for (int i = 0; i < len; i++) {
	//	printf("%s\n", season[i]);
	//}
	
	//문자형 배열 관리 - c++
	string carts[] = {"라면","쌀","생수","화장지"};
	
	//배열의 크기
	cout << "배열의 크기: " << size(carts) << endl;

	//1번 위치 검색
	cout << carts[1] << endl;  //쌀

	//2번 요소 수정
	carts[2] = "콜라";

	//전체 요소 출력(인덱스)
	for (int i = 0; i < size(carts); i++) {
		cout << carts[i] << " ";
	}
	cout << endl;  //줄바꿈

	//범위 기반 for문 - for(자료형 변수 : 배열이름){}
	for (string carts : carts) {
		cout << carts << " ";
	}



	
	return 0;
}