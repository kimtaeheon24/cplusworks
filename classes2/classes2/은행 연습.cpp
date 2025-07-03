#include <iostream>
#include <vector>
using namespace std;
/*
   �̸� : ���� ���� ������Ʈ
		  �Ա�, ���, ���� ����, �ŷ� ����

		1. ����(BankAccount) Ŭ���� - ���¹�ȣ, ������, �ܰ�
		2. �ŷ�(Transaction) ����ü - �ŷ� ����(�Ա�, ���), �ŷ� �ݾ�
*/
enum TransactionType {
	�Ա�,
	���
};
struct Transaction {
	int amount;
	TransactionType type;
};
class BankAccount {
private:
	int accountNumber; //���� ��ȣ
	string owner;      //������
	int balance;       //�ܰ�
	vector<Transaction> transactions;  //�ŷ� ����
public:
	BankAccount(int accountNumber,string owner, int balance = 0) : 
		accountNumber(accountNumber), owner(owner), balance(balance){ }
	void deposit(int amount);   //�Ա�
	void withdraw(int amount);  //���
	void displayInfo();         //���� ����
	void getTransactionHistory(); //�ŷ� ����
private:
	void addTransaction(TransactionType type, int amount);
};
void BankAccount::deposit(int amount) {
	if (amount < 0) {
		cout << "�ùٸ� �ݾ��� �Է��ϼ���.\n";
	}
	else {
		balance += amount;
		cout << amount << "���� �Ա� �Ǿ����ϴ�. �ܾ�: " << balance << "��\n";
		addTransaction(TransactionType::�Ա�,amount);
	}
}
void BankAccount::withdraw(int amount) {
	if (amount < 0) {
		cout << "�ùٸ� �ݾ��� �Է��ϼ���.\n";
	}
	else {
		balance -= amount;
		cout << amount << "���� �Ա� �Ǿ����ϴ�. �ܾ�: " << balance << "��\n";
		addTransaction(TransactionType::���, amount);
	}
}
void BankAccount::addTransaction(TransactionType type, int amount) {
	Transaction trans;
	trans.type = type;
	trans.amount = amount;
	transactions.push_back(trans);
}
void BankAccount::getTransactionHistory() {
	cout << "�ŷ� ���� ��ȸ\n";
	if (transactions.empty()) {
		cout << "�ŷ� ������ �����ϴ�.\n";
	}
	for (Transaction trans : transactions) {
		cout << " | " << (trans.type == TransactionType::�Ա� ? "�Ա�" : "���");
		cout << " | " << trans.amount << "��\n";
	}
	
}
void BankAccount::displayInfo() {
	cout << "\n���� ����\n";
	cout << "���� ��ȣ: " << accountNumber << endl;
	cout << "������: " << owner << endl;
	cout << "�ܰ�: " << balance << endl;
}
int main() {
	
	vector<BankAccount>accounts;
	accounts.push_back(BankAccount(1002, "������", 10000));
	accounts.push_back(BankAccount(1003, "����", 20000));
	accounts.push_back(BankAccount(1004, "����", 30000));
	accounts[0].deposit(10000);
	for (BankAccount account : accounts) {
		account.displayInfo();
		account.getTransactionHistory();
	}
	

	return 0;
}