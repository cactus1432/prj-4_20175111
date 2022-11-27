#include <iostream>
using namespace std;

template <class T>
T getSmallest (T arr[], int n) {
	double a;
	for (int i = 0; i < n; i++) {
		if (i == 0)
			a=arr[i];
		else
		{
			if (arr[i] < arr[i - 1])
				a = arr[i];
		}
	}
	return a;
}

int main() {
	double list[] = { 1.2,3.3,9.0,1.5,8.7 };
	double n = getSmallest(list, 5);
	cout << "ÃÖ¼Ò°ª: " << n << endl;
}