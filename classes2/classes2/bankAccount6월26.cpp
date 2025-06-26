#include <iostream>
#include <vector>
using namespace std;
/*
   이름 : 은행 업무 프로젝트
		  입금, 출금, 계좌 정보, 거래 내역

		1. 계정(BankAccount) 클래스 - 계좌번호, 계좌주, 잔고
		2. 거래(Transaction) 구조체 - 거래 유형(입금, 출금), 거래 금액
*/
//거래 유형
enum TransactionType {
	입금,
	출금
};

struct Transaction {
	TransactionType type; //거래 유형(enum 자료형 참조)
	int amount; //거래 금액
};

class BankAccount {
private:
	int accountNumber; //계좌 번호
	string owner;      //계좌주
	int balance;       //잔고
	vector<Transaction> transactions;  //거래 내역

public:
	//생성자 초기화 목록
	BankAccount(int accountNumber, string owner, int balance = 0) :
		accountNumber(accountNumber), owner(owner), balance(balance) {
	}

	void deposit(int amount);     //입금하다
	void withdraw(int amount);    //출금하다
	void displayInfo();           //계좌 정보 출력하다
	void getTransactionHistory(); //거래 내역 조회하다

private: //클래스 내부에서 사용하므로 public 할 필요 없음
	void addTransaction(TransactionType type, int amount);
};

void BankAccount::deposit(int amount) {
	balance += amount;  //balance = balance + amount
	cout << amount << "원이 입금되었습니다. 현재 잔액: " <<
		balance << "원\n";
	//거래 발생 추가 - 상수는 구조체(클래스) 이름으로 직접 접근
	addTransaction(TransactionType::입금, amount);  //입금, 10000
}

void BankAccount::withdraw(int amount) {
	if (amount < 0) {
		cout << "유효한 금액을 입력하세요.\n";
	}
	else if (amount > balance) {
		cout << "잔액이 부족합니다. 다시 입력하세요.\n";
	}
	else {
		balance -= amount;  //balance = balance + amount
		cout << amount << "원이 출금되었습니다. 현재 잔액: " <<
			balance << "원\n";
	}
	
	//거래 발생 추가 - 상수는 구조체(클래스) 이름으로 직접 접근
	addTransaction(TransactionType::출금, amount);  //입금, 10000
}

//거래 추가
void BankAccount::addTransaction(TransactionType type, int amount) {
	//Transaction 객체 1건 생성
	Transaction trans;
	trans.type = type;
	trans.amount = amount;
	//객체 1건을 벡터에 저장
	transactions.push_back(trans);
}

//거래 내역 조회
void BankAccount::getTransactionHistory() {
	cout << "거래 내역 조회\n";
	if (transactions.empty()) {
		cout << "거래내역이 없습니다.\n";
		return;   //즉시 종료
	}
	//범위 기반 for
	for (Transaction trans : transactions) {
		cout << " | " << (trans.type == TransactionType::입금 ? "입금" : "출금");
		cout << " | " << trans.amount << "원\n";
	}
}


//계좌 정보
void BankAccount::displayInfo() {
	cout << "\n계좌 정보\n";
	cout << "    계좌 번호: " << accountNumber << endl;
	cout << "    계좌주: " << owner << endl;
	cout << "    잔고: " << balance << endl;
}

int main()
{
	//동적 객체 생성(new ~ delete) - 포인터
	BankAccount* account1 = new BankAccount(1001, "이우주", 10000);
	BankAccount* account2 = new BankAccount(1002, "정은하", 30000);
	BankAccount* account3 = new BankAccount(1003, "한강", 20000);

	//배열로 관리
	BankAccount* accounts[3] = { account1,account2,account3 };

	//입금
	accounts[0]->deposit(5000);
	accounts[1]->deposit(10000);
	
	//출금
	accounts[2]->withdraw(31000);

	//계좌 정보
	for (int i = 0; i < size(accounts); i++) {
		accounts[i]->displayInfo();
		accounts[i]->getTransactionHistory();
	}

	for (int i = 0; i < size(accounts); i++) {
		delete accounts[i];
	}

	//delete[] accounts;

	//벡터에 객체 저장

	return 0;
}