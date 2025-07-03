#include<iostream>
#include<vector>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int x, int y):x(x),y(y){}

	void print() {
		cout << "x = " << x << ", y = " << y << endl;
	}
	//객체 더하기 연산자 오버로딩(중복)
	Point operator+(const Point& p) {
		return Point(x + p.x, y + p.y);
	}
	//객체 빼기 연산자 오버로딩(중복)
	Point operator-(const Point& p) {
		return Point(x - p.x, y - p.y);
	}
};

int main() {
	Point p1(1, 2);
	Point p2(3, 4);
	Point p3 = p1 + p2;
	Point p4 = p1 - p2;
	vector<Point>ps = { p1,p2,p3,p4 };

	for (Point ps : ps) {
		ps.print();
	}



	return 0;
}