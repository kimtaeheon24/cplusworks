#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	vector <int> vec = { 3,2,5,4,1 };

	//오름차순 정렬
	sort(vec.begin(), vec.end());

	for (auto v : vec) {
		cout << v << " ";
	}
	cout << "\n-----------------------------\n";

	//내림차순 정렬
	sort(vec.begin(), vec.end(),greater<int>());
	/*for (auto v : vec) {
		cout << v << " ";
	}*/
	for (auto it = vec.begin(); it != vec.end(); it++) { cout << *it << " "; }


	return 0;
}