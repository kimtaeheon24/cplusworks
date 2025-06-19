#include<iostream>
using namespace std;
class Member {
	string id;
	string password;
public:
	Member(string id, string password);
	void info();
	string getId();
	string getPassword();
};
Member::Member(string id, string password) {
	this->id = id;
	this->password = password;
}
string Member::getId() {
	return id;
}
string Member::getPassword() {
	return password;
}
void Member::info() {
	cout << "아이디 : " << this->id << ", 패스워드 : " << this->password << endl;
}
int main() {
	Member p[3] = {
		Member("flower","f1234"),
		Member("tree","t1234"),
		Member("bird","b1234")
	};
	for (int i = 0; i < size(p); i++) {
		p[i].info();
	}



	return 0;
}
