#include<iostream>
#include<string>  //getline() �Լ� ���
/*
	�Է� ó��
	cin >> ����
	cin ��Ʈ������ �о�� �����͸� ������ ���� ����
*/
using namespace std;
int main() {
	string address; //�ּҸ� ������ ���� ����
	cout << "�ּҸ� �Է��ϼ���: ";
	//cin >> address;
	//���鹮�ڸ� ������ ���ڿ� ó��
	getline(cin, address);  //string ������� �����ؾ� ��

	cout <<"�ּ�: "<< address << endl;
	

	return 0;
}