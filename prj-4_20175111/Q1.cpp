#include <iostream>
using namespace std;

class Box {
private:
	double length;
	double width;
	double height;
public:
	Box(int l = 0, int w = 0, int h = 0) :length(l), width(w), height(h) {}
	double getVolume(void) {
		return length * width * height;
	}
	 void print() {
		cout << "상자의 길이:" << length << endl;
		cout << "상자의 너비:" << width << endl;
		cout << "상자의 높이:" << height << endl;
		cout << "상자의 부피:" << length*width*height << endl;
	}
};


	void main() {
		Box a(10, 10, 10);
		cout << "#상자1" << endl;
		a.print();
		cout << endl;
		Box b(20, 20, 20);
		cout << "#상자2" << endl;
		b.print();
		cout << endl;

		cout.setf((cout.boolalpha));
		if (a.getVolume() < b.getVolume())
			cout << (a.getVolume() < b.getVolume()) << endl;
		else
			cout << (a.getVolume() < b.getVolume()) << endl;
	}