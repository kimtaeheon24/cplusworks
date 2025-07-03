#include<iostream>
#include<vector>
using namespace std;



int main() {
	
	vector<string>vec;
	string name;
	vec.push_back("jerry");
	vec.push_back("luna");
	vec.push_back("han");
	vec.push_back("elsa");

	name = vec[0];

	for (int i = 1; i < size(vec); i++) {
		if (vec[i] > name) { name = vec[i]; }
	}

	cout << name;
	
	
	


	return 0;
}