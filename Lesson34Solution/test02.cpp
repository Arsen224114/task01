#include <iostream>
using namespace std;

int change(int number) {
	number *= 10;
}


int main() {
	int x = 100;
	
	cout << "Before x = " << x << endl;
	change(x);
	cout << "After x = " << x << endl;

	return 0;
}