#include<iostream>
#include<vector>
using namespace std;

int main() {
	//정수형 벡터 자료구조
	//벡터는 순서가 있음(인덱스 0번부터 시작) 
	vector<int> vec;

	//요소 추가
	vec.push_back(10);  //0번 인덱스
	vec.push_back(20);  
	vec.push_back(30);  

	//요소 검색 - 인덱스 대괄호([]) 사용
	cout << vec[0] << endl;

	//벡터의 크기
	cout << "벡터의 크기: " << vec.size() << endl;

	//요소 수정
	//vec[1] = 50;
	vec.at(1) = 50;
	
	//전체 조회
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}

	return 0;
}