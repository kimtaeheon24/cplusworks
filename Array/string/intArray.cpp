#include<iostream>
using namespace std;

int main() {
	//정수형 배열 생성 및 연산
	int arr[] = { 90,80,75,100 };
	int total = 0;  //총점
	float average;  //평균
	int max = 0;  //최대값

	cout << arr[0] + arr[1] << endl;  //170

	//합계
	for (int i = 0; i < size(arr); i++) {
		total += arr[i];  //total = tatol + arr[i]
	}
	cout << "합계: "<<total << endl;

	//평균
	average = (float)total / size(arr);
	
	cout << "평균: " << average << endl;   //86.25

	max = arr[0];
	for (int i = 1; i < size(arr); i++) {
		if (max < arr[i]) { max = arr[i]; }
	}
	cout << max << endl;


	return 0;
}