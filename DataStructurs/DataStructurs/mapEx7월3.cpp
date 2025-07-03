#include<iostream>
#include<map>  //map
using namespace std;

int main() {
	map<string, int>dogs;  //키와 값을 가진 map 생성

	//요소 추가
	dogs.insert({ "말티즈",3 });
	dogs.insert({ "진돗개",2 });
	dogs.insert({ "불독",4 });

	cout << dogs.size() << endl;

	//특정 요소 검색 - key로 검색하면 값을 확인
	cout << dogs["진돗개"] << endl;
	cout << dogs.at("진돗개") << endl;

	//전체 검색 - 반복자, first(키), second(값)
	for (auto it = dogs.begin(); it != dogs.end(); it++) {
		cout << it->first << ", " << it->second << endl;
	}

	//요소 삭제
	dogs.erase("불독");
	for (auto dog : dogs) {
		cout << dog.first << ", " << dog.second << endl;
	}

	return 0;
}