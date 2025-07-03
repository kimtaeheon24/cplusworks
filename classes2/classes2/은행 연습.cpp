#include <iostream>
#include <vector>
using namespace std;
/*
   이름 : 은행 업무 프로젝트
		  입금, 출금, 계좌 정보, 거래 내역

		1. 계정(BankAccount) 클래스 - 계좌번호, 계좌주, 잔고
		2. 거래(Transaction) 구조체 - 거래 유형(입금, 출금), 거래 금액
*/
enum TransactionType {
	입금,
	출금
};
struct Transaction {
	int amount;
	TransactionType type;
};
class BankAccount {
private:
	int accountNumber; //계좌 번호
	string owner;      //계좌주
	int balance;       //잔고
	vector<Transaction> transactions;  //거래 내역
public:
	BankAccount(int accountNumber,string owner, int balance = 0) : 
		accountNumber(accountNumber), owner(owner), balance(balance){ }
	void deposit(int amount);   //입금
	void withdraw(int amount);  //출금
	void displayInfo();         //계좌 정보
	void getTransactionHistory(); //거래 내역
private:
	void addTransaction(TransactionType type, int amount);
};
void BankAccount::deposit(int amount) {
	if (amount < 0) {
		cout << "올바른 금액을 입력하세요.\n";
	}
	else {
		balance += amount;
		cout << amount << "원이 입금 되었습니다. 잔액: " << balance << "원\n";
		addTransaction(TransactionType::입금,amount);
	}
}
void BankAccount::withdraw(int amount) {
	if (amount < 0) {
		cout << "올바른 금액을 입력하세요.\n";
	}
	else {
		balance -= amount;
		cout << amount << "원이 입금 되었습니다. 잔액: " << balance << "원\n";
		addTransaction(TransactionType::출금, amount);
	}
}
void BankAccount::addTransaction(TransactionType type, int amount) {
	Transaction trans;
	trans.type = type;
	trans.amount = amount;
	transactions.push_back(trans);
}
void BankAccount::getTransactionHistory() {
	cout << "거래 내역 조회\n";
	if (transactions.empty()) {
		cout << "거래 내역이 없습니다.\n";
	}
	for (Transaction trans : transactions) {
		cout << " | " << (trans.type == TransactionType::입금 ? "입금" : "출금");
		cout << " | " << trans.amount << "원\n";
	}
	
}
void BankAccount::displayInfo() {
	cout << "\n계좌 정보\n";
	cout << "계좌 번호: " << accountNumber << endl;
	cout << "계좌주: " << owner << endl;
	cout << "잔고: " << balance << endl;
}
int main() {
	
	vector<BankAccount>accounts;
	accounts.push_back(BankAccount(1002, "김태헌", 10000));
	accounts.push_back(BankAccount(1003, "김태", 20000));
	accounts.push_back(BankAccount(1004, "김헌", 30000));
	accounts[0].deposit(10000);
	for (BankAccount account : accounts) {
		account.displayInfo();
		account.getTransactionHistory();
	}
	

	return 0;
}