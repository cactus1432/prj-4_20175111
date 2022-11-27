#include <iostream>
using namespace std;

class Weapon {
public:
	virtual void load() = 0;
};

class Bomb :public Weapon {

public:
	void load() { 
		cout << "ÆøÅºÀ» ÀûÀçÇÕ´Ï´Ù" << endl;
	}
};

class Gun :public Weapon {

public:
	void load() {
		cout << "ÃÑÀ» ÀûÀçÇÕ´Ï´Ù" << endl;
	};
};

void main() {
	Gun* g = new Gun();
	g->load();
	delete g;

	Bomb* b = new Bomb();
	b->load();
	delete b;

	Bomb* b1 = new Bomb();
	b1->load();
	delete b1;

	return;
}