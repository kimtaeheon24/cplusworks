#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a[5] = { 3,2,5,4,1 };
	int temp;

	for (int x = 0; x < size(a) - 1; x++) {
		for (int y = x + 1; y < size(a); y++) {
			if (a[x] > a[y]) {
				temp = a[x];
				a[x] = a[y];
				a[y] = temp;
			}
		}
	}

	for (int a : a) {
		cout << a;
	}
	for (int i = 0; i < size(a); i++) {
		for (int x = 0; x < size(a) - 1 - i; x++) {
			if (a[x] > a[x+1]) {
				temp = a[x];
				a[x] = a[x+1];
				a[x+1] = temp;
			}
		}
	}

	for (int a : a) {
		cout << a;
	}
	return 0;
}