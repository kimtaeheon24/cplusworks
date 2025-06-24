#include<iostream>
using namespace std;

//참조되는 클래스
class Point {
private:
	int x;
	int y;
public:
	//1.매개변수가 있는 생성자
	/*Point(int x, int y) {
		this->x = x;
		this->y = y;
	}*/

	//2.생성자 - 초기화 목록 방식(초기화 포함)
	Point(int x = 0, int y = 0) : x(x), y(y){}

	int getX() { return x; }
	int getY() { return y; }
};

//참조하는 클래스
class Circle {
private:
	Point center;  //중심점(Point 클래스 참조)
	int radius;    //반지름
	const double PI = 3.1415;   //원주율(상수 선언)

public:
	//생성자 - 초기화 목록
	Circle(int x, int y, int radius) : center(x, y), radius(radius) {}
	/*Circle(int x, int y, int radius) {
		this->x = x;
		this->y = y;
		this->radius = radius;
	}*/
	//원의 넓이 계산 함수(PI x 반지름 x 반지름)
	double getArea() {
		return PI * radius * radius;
	}



	void displayInfo() {
		cout << "중심점(" << center.getX() << ", " << center.getY() << "),반지름: " << 
			this->radius<<endl;
	}
};

int main() {
	Circle c1(2, 3, 5);
	c1.displayInfo();
	cout << "원의 넓이: " << c1.getArea() << endl;
	Circle c2(10, 10, 10);
	c2.displayInfo();
	cout << "원의 넓이: " << c2.getArea() << endl;


	return 0;
}