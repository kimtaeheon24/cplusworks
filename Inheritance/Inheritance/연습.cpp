#include<iostream>
#include<vector>
using namespace std;

class Drink {
protected:
	string name;
	int price;
	int quantity;
public:
	Drink(string name, int price, int quantity): name(name),price(price),
		quantity(quantity){ }

	//�ݾ� ���
	int calcPrice() {
		return price * quantity;
	}
	//��ǰ ����
	static void printTitle() {
		cout << "��ǰ��\t ����\t ����\t �ݾ�\n";
	}
	virtual ~Drink(){}
	virtual void printData() = 0;
};
class NonAlcohol : public Drink {
public:
	NonAlcohol(string name, int price, int quantity) : 
		Drink(name, price, quantity){ }
	void printData() {
		cout << name << "\t" << price <<
			"\t" << quantity << "\t" << calcPrice() << endl;
	}
};
class Alcohol : public Drink {
	float alcper;
public:
	Alcohol(string name, int price, int quantity, float alcper):
		Drink(name, price, quantity), alcper(alcper) { }
	static void printTitle() {
		cout << "��ǰ��(����[%])\t ����\t ����\t �ݾ�\n";
	}
	void printData() {
		cout << name << "(" << alcper << ")\t" << price <<
			"\t" << quantity << "\t"<< calcPrice() << endl;
	}
};

int main() {
	Drink* coffee = new NonAlcohol("Ŀ��", 2500, 4);
	Drink* tea = new NonAlcohol("����", 3000, 3);
	Drink* soju = new Alcohol("����", 4000, 4, 5.3);
	Drink* macju = new Alcohol("����", 2500, 3, 2.3);

	vector<Drink*>drinks;
	drinks.push_back(coffee);
	drinks.push_back(tea);
	vector<Drink*>Alcohols;
	Alcohols.push_back(soju);
	Alcohols.push_back(macju);
	Drink::printTitle();
	for (Drink* drink : drinks) {
		drink->printData();
	}
	for (Drink* drink : drinks) {
		delete drink;
	}
	Alcohol::printTitle();
	for (Drink* Alcohol : Alcohols) {
		Alcohol->printData();
	}
	for (Drink* Alcohol : drinks) {
		delete Alcohol;
	}


	return 0;
}