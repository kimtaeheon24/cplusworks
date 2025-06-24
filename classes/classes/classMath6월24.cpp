#include<iostream>
using namespace std;

class Math {
public:
	//절대값 구현 함수
	static int abs(int x) {
		return (x < 0) ? -x : x;
	}

	//두 수 중에 최대값 계산 함수
	static int max(int a, int b) {
		return (a > b) ? a : b;
	}
	//두 수 중에 최소값 계산 함수
	static int min(int a, int b) {
		return (a < b) ? a : b;
	}
};

int main() {
	//Math 인스턴스 생성
	/*Math math;
	cout << math.abs(-5) << endl;*/

	//정적 멤버 함수 호출 방법 - 클래스 이름으로 직접 접근
	cout << "절대값: " << Math::abs(-5) << endl;
	cout << "두 수 중 큰수: " << Math::max(10, 20) << endl;
	cout << "두 수 중 작은 수: " << Math::min(10, 20) << endl;


	return 0;
}