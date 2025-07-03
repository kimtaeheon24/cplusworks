#include<iostream>
#include<vector>

using namespace std;

class Book {
private:
	int number;    //å ��ȣ
	string title;  //å ����
	string author; //����
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
	cout << "å ��ȣ: " << this->number << endl;
	cout << "å ����: " << this->title << endl;
	cout << "����: " << this->author << endl;
	cout << "---------------------------------------\n";
}

int main() {
	//Book �ν��Ͻ��� ������ vector�� ����
	vector<Book> books;

	//���� ����
	books.push_back(Book(100, "ä��������", "�Ѱ�"));
	books.push_back(Book(101, "C++ ���� ����", "���Գ�"));
	books.push_back(Book(102, "����� C���", "������"));

	//ù��° ��� ���� ���
	//books[0].bookInfo();
	//books.at(0).bookInfo();

	//��ü ��ȸ
	//vector<Book>::iterator it = books.begin();
	//it->bookInfo();
	//(it + 1)->bookInfo();

	auto it = books.begin() + 1;
	it->bookInfo();
	
	cout << "***************** å�� ���� *******************\n";
	for (auto it = books.begin(); it != books.end(); it++) {
		it->bookInfo();
	}
	
	cout << "***************** ���� �� å�� ���� *******************\n";
	//2�� ��� ����
	books.erase(books.begin() + 2);

	//���� ��� for
	for (auto book : books) {
		book.bookInfo();
	}


	return 0;
}