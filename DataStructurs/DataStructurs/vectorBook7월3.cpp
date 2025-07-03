#include<iostream>
#include<vector>

using namespace std;

class Book {
private:
	int number;    //책 번호
	string title;  //책 제목
	string author; //저자
public:
	Book(int number, string title, string author);

	void bookInfo();

};

Book::Book(int number, string title, string author) {
	this->number = number;
	this->title = title;
	this->author = author;
}
void Book::bookInfo() {
	cout << "책 번호: " << this->number << endl;
	cout << "책 제목: " << this->title << endl;
	cout << "저자: " << this->author << endl;
	cout << "---------------------------------------\n";
}

int main() {
	//Book 인스턴스를 저장할 vector를 생성
	vector<Book> books;

	//도서 생성
	books.push_back(Book(100, "채식주의자", "한강"));
	books.push_back(Book(101, "C++ 완전 정복", "조규남"));
	books.push_back(Book(102, "모두의 C언어", "이형우"));

	//첫번째 요소 정보 출력
	//books[0].bookInfo();
	//books.at(0).bookInfo();

	//전체 조회
	//vector<Book>::iterator it = books.begin();
	//it->bookInfo();
	//(it + 1)->bookInfo();

	auto it = books.begin() + 1;
	it->bookInfo();
	
	cout << "***************** 책의 정보 *******************\n";
	for (auto it = books.begin(); it != books.end(); it++) {
		it->bookInfo();
	}
	
	cout << "***************** 삭제 후 책의 정보 *******************\n";
	//2번 요소 삭제
	books.erase(books.begin() + 2);

	//범위 기반 for
	for (auto book : books) {
		book.bookInfo();
	}


	return 0;
}