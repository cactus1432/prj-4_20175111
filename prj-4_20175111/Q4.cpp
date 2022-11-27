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
		cout << "�̸�: " << name << endl;
		cout << "����: " << salary << endl;
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
		cout << "���ʽ�: " << bonus << endl;
		cout << "��ü�޿�: " << add << endl;
	}
};

int main() {
	Manager m("��ö��", 200, 100);
	m.print();
	return 0;
}