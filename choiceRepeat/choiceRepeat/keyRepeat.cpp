#include<iostream>
#include<string>
using namespace std;
/*
	y 0r Y -> 계속 반복
	n or N -> 반복 중단
	그 이외의 키는 잘못된 입력
*/
int main() {
	string key;

	while (1) {
		cout << "계속 반복할까요?(y/n 입력)";
		cin >> key;
		//compare() - 문자열 비교 - 일치하면(0), 불일치(1)
		if (key.compare("y") == 0 || key.compare("Y") == 0) {
			cout << "계속 반복\n";
		}
		else if (key.compare("n") == 0 || key.compare("N") == 0) {
			cout << "반복 중단\n";
			break;
		}
		else {
			cout << "잘못된 입력입니다. 다시 입력하세요\n";
		}

	}


	return 0;
}