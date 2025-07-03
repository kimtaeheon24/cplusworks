#include<iostream>
using namespace std;
/*
	������ - �ַ� ��Ӱ��迡�� ��Ÿ�� Ư��
	- �θ� Ŭ���������� �ν��Ͻ� ����(�θ� > �ڽ�) : �ڵ� ����ȯ
	- �ڽ� Ŭ������ �ν��Ͻ� ����
	- new, delete ���
*/
class Animal {
public:
	//Animal(){}
	
	//virtual�� ���� �ݵ�� �Ҹ��ڸ� �־���� �ȴ�
	//delete�� �ᵵ ������ ���� �ʾ� �޸� ���� ������ �߻���
	virtual ~Animal(){}

	void breathe() {
		cout << "������ ���� ���ϴ�.\n";
	}

	//����(�߻�)���� ����
	//virtual void cry() {}  //��� �޴� �ʿ��� �ݵ�� �����ؾ� ��
	virtual void cry() = 0;  //���� ����(�߻�) �Լ�

};
class Cat : public Animal {
	void cry() override {
		cout << "��~ ��!\n";
	}
};
class Dog : public Animal {
	void cry()override {
		cout << "��~ ��~\n";
	}
};

int main() {

	//new ��� - �޸�(heap)
	/*Cat* cat = new Cat;
	cat->breathe();*/



	//�θ� Ŭ���� ������ �ν��Ͻ� ����
	Animal* cat = new Cat;
	cat->breathe();
	cat->cry();
	
	Animal* dog = new Dog;
	dog->breathe();
	dog->cry();

	delete dog;     //�޸� ����
	delete cat;

	return 0;
}