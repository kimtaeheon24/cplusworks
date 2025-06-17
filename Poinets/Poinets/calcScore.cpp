#include<iostream>
#include<iomanip>
using namespace std;
/*
	학생의 성적 관리
*/
int main() {
	int studentNum;         //학생 수
	int* score = nullptr;   //점수  C언어 - NULL, C++ - nullptr
	int choice;            //메뉴 선택
	bool run = true;  //상태 - 실행(true) / 종료(false)
	int temp = 0;
	float avg;
	int max;

	while (run) {
		cout << "----------------------------------------------------\n ";
		cout << "1.학생수 | 2.점수입력 | 3.점수리스트 | 4.분석 | 5.종료" << endl;
		cout << "----------------------------------------------------\n";
		cout << "선택> ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "학생수 : ";
			cin >> studentNum;
			score = new int[studentNum];
			break;

		case 2:
			for (int i = 0; i < studentNum; i++) {
				cout << "score[" << i << "]=";
				cin >> score[i];
			}
			break;

		case 3:
			for (int i = 0; i < studentNum; i++) {
				cout << "score[" << i << "] =" << score[i] << endl;
			}
			break;

		case 4:
			max = score[0];
			for (int i = 0; i < studentNum; i++) {
				temp += score[i];
				if (score[i] > max) { max = score[i]; }
			}
			avg = temp / (float)studentNum;
			cout << fixed << setprecision(1);
			
			
			cout << "평균 점수: " << avg << endl;
			cout << "최고 점수: " << max << endl;
			break;

		case 5:
			cout << "프로그램 종료\n";
			run = false;
			break;

		default :
			cout << "잘못된 선택 입니다. 다시 입력하세요\n";
			break;
		}

	}

	delete[] score;
	return 0;
}
