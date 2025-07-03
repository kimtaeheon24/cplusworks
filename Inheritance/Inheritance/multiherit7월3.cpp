#include<iostream>
using namespace std;

//ĳ���� Ŭ���� ����
class Character {
public:
	Character(){
		cout << "Character Ŭ���� ������" << endl;
	}
	~Character(){
		cout << "Character Ŭ���� �Ҹ���" << endl;
	}
};

//���� Ŭ���� ����
class Monster {
public:
	Monster() {
		cout << "Monster Ŭ���� ������" << endl;
	}
	~Monster(){
		cout << "Monster Ŭ���� �Ҹ���" << endl;
	}
};

//MonsterA Ŭ���� ����
class MonsterA : public Monster, Character {
private:
	int location[2];  //��ǥ�� ������ �迭

public:
	//�⺻ ������ - �ʱ�ȭ ���
	MonsterA() : MonsterA(0,0) {   //�����ڰ� �����ڸ� ȣ��
		cout << "MonsterA Ŭ���� ������\n";
	}

	//�Ű����� �ִ� ������
	MonsterA(int x, int y) : location{ x,y } {
		cout << "MonsterA Ŭ���� ������(�Ű����� �߰�)\n";
	}
	
	//��ġ ��� �޼���
	void showLocation() {
		cout << "��ġ(" << location[0] << ", " << location[1] << ")" << endl;
	}

};
int main() {
	//�⺻ �����ڷ� �ν��Ͻ� ����
	MonsterA forestMonster;
	forestMonster.showLocation();
	cout << "--------------------------------\n";

	//�Ű����� �ִ� ������ �ν��Ͻ� ����
	MonsterA woodMonster(10, 20);
	woodMonster.showLocation();


	return 0;
}