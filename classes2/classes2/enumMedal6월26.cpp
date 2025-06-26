#include<iostream>
#include<string>
using namespace std;

enum MEDAL {
	GOLD = 1,
	SILVER,
	BRONZE
};
int main() {
	/*enum MEDAL medal; 
	medal = SILVER;*/   //2
	
	int medal;
	cout << "메덜 선택(1 ~ 3 입력): ";
	cin >> medal;
	switch (medal) {
	case 1:
		cout << "금메달 입니다.\n";
		break;
	case 2:
		cout << "은메달 입니다.\n";
		break;
	case 3:
		cout << "동메달 입니다.\n";
		break;
	default:
		cout << "잘못 입력 하셨습니다. 다시 입력해 주세요: \n"; 
	}
	


	return 0;
}