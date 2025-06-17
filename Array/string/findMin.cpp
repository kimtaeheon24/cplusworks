#include<iostream>
using namespace std;
int findMin(int[], int);
int findIdx(int [], int );
int main() {
	//최소값 찾기
	int arr[] = { 3,8,1,6,2 };
	int min; //최소값

	min = findMin(arr,size(arr));
	cout << "최소값: " << min << endl;

	//최소값의 위치 찾기
	int minIdx;
	minIdx = findIdx(arr, size(arr));
	cout << "최소값의 위치: " << minIdx << endl;


	return 0;
}
int findMin(int arr[], int size) {
	int min = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < min) { min = arr[i]; }
	}

	return min;
}
int findIdx(int arr[], int size) {
	int idx = 0;   //0번을 최소값 설정
	for (int i = 1; i < size; i++) {  
		if (arr[idx] > arr[i]) { idx = i; }  //i가 idx 보다 작을 때 i의 값을 idx에 넣음
	}

	return idx;
}