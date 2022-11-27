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
		cout << "������ ����:" << length << endl;
		cout << "������ �ʺ�:" << width << endl;
		cout << "������ ����:" << height << endl;
		cout << "������ ����:" << length*width*height << endl;
	}
};


	void main() {
		Box a(10, 10, 10);
		cout << "#����1" << endl;
		a.print();
		cout << endl;
		Box b(20, 20, 20);
		cout << "#����2" << endl;
		b.print();
		cout << endl;

		cout.setf((cout.boolalpha));
		if (a.getVolume() < b.getVolume())
			cout << (a.getVolume() < b.getVolume()) << endl;
		else
			cout << (a.getVolume() < b.getVolume()) << endl;
	}