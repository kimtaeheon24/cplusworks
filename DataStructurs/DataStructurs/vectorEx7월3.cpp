#include<iostream>
#include<vector>

using namespace std;

int main() {
	//정수형 벡터 생성
	vector<int> vec;
	
	//요소 추가
	/*vec.push_back(80);
	vec.push_back(75);
	vec.push_back(90);*/

	vec = { 80, 75, 90 };  //생성과 함께 초기화

	//특정 요소 검색
	cout << "첫 번째: " << vec.front() << endl;  //80
	cout << "맨 뒤: " << vec.back() << endl;     //90
	cout << vec.at(1) << endl;  //75
	cout << vec[1] << endl;     //75
	
	//요소의 개수
	cout << vec.size() << endl;  //3
	
	//전체 검색
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}

	//반복자 검색 - iterator
	vector<int>::iterator it = vec.begin();

	//특정 요소 검색
	cout << *it << endl;        //80
	cout << *(it + 1) << endl;  //75
	cout << *(it + 2) << endl;  //90

	//반복자로 조회 
	cout << *vec.begin() << endl;  //80
	cout << *(vec.begin() + 1) << endl;  //75
	cout << *(vec.end() - 1) << endl;  //90, vec.end() - 찾지 못했을 때 사용
	cout << "======================================\n";

	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << endl;
	}

	cout << "======================================\n";

	//요소 수정
	//vec[1] = 100;
	vec.at(1) = 100;

	//요소 삭제
	//vec.pop_back();   //맨 뒤 요소 삭제

	//특정 요소 삭제
	for (it = vec.begin(); it != vec.end(); it++) {
		if (*it == 90) {
			vec.erase(it); 
			break;   //반복 종료
		}
	}

	for (auto v : vec) {
		cout << v << " ";
	}


	return 0;
}