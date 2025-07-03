#include<iostream>
#include<vector>
using namespace std;
class Animal {
public:
	void breathe() {
		cout << "¼ûÀ» ½±´Ï´Ù.\n";
	}
	virtual void cry() = 0;
};
class Cat : public Animal {
	void cry() {
		cout << "¾ß¿Ë~\n";
	}
};
class Dog : public Animal {
	void cry() {
		cout << "¿Ð~¿Ð~\n";
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