#include <iostream>
#include <string>
using namespace std;

template<typename R1>
class Circle  {
	R1 a,b,c;
public:
	Circle(R1 x, R1 y, R1 z) :a(x),b(y),c(z){}
	int area() {
		R1 r = a + b + c;
		return 3.14*(r*r);
	};
};


int main() {
	Circle<double> circleA(0.0, 0.0, 10.0);
	cout << "면적:" << circleA.area() << endl;
	return 0;
}
