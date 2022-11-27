#include <iostream>
#include <string>
using namespace std;

class Employee {
	string name;
	int salary;
public:
	Employee(string name, int salary) {
		this->name = name;
		this->salary = salary;
	}
	void print() {
		cout << "이름: " << name << endl;
		cout << "월급: " << salary << endl;
	}
};

class Manager :public Employee {
	int bonus;
	int add;
public:
	Manager(string name, int salary, int bonus ) :Employee(name, salary) {
		this->bonus = bonus;
		add = bonus + salary;
	}
	void print() {
		Employee::print();
		cout << "보너스: " << bonus << endl;
		cout << "전체급여: " << add << endl;
	}
};

int main() {
	Manager m("김철수", 200, 100);
	m.print();
	return 0;
}