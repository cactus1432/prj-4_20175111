#include <iostream>
using namespace std;

class Time {
private:
	int hours;
	int minutes;
public:
	Time() :hours(0), minutes(0) {}
	Time(int h, int m) :hours{ h }, minutes{ m }{}

	void displayTime() {
		cout << hours << ": " << minutes << endl;
	}
	const Time& operator++() {
		if (this->minutes < 59) 
			this->minutes++;
		else if (this->minutes == 59) {
			this->hours++;
			this->minutes = 0;
		}
		return (*this);
	}
};


void main() {
	Time t(10, 59);
	t.displayTime();
	++t;
	t.displayTime();
	++t;
	t.displayTime();

	return ;
}