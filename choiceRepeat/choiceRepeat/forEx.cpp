#include<iostream>
using namespace std;
int main() {
	//구구단
	int dan;
	cout << "단 입력: ";
	cin >> dan;
	for (int i = 1; i < 10; i++) {
		cout << dan << " x " << i << " = " << (dan * i) << endl;
	}


	return 0;
}