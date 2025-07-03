#include<iostream>
#include<vector>
using namespace std;
class Animal {
public:
	void breathe() {
		cout << "���� ���ϴ�.\n";
	}
	virtual void cry() = 0;
};
class Cat : public Animal {
	void cry() {
		cout << "�߿�~\n";
	}
};
class Dog : public Animal {
	void cry() {
		cout << "��~��~\n";
	}
};

int main() {
	/*Cat* cat = new Cat;
	cat->breathe();*/
	Animal* cat = new Cat;
	Animal* dog = new Dog;
	cat->breathe();
	cat->cry();
	dog->breathe();
	dog->cry();

	delete cat;
	delete dog;
	return 0;
}