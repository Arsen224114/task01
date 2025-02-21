#include <iostream>
using namespace std;

double calculate_avg_mark(int a, int b, int d, int c, int e);

int main() {
	int a, b, d, c, e;

	cout << "Input students mark: ";
	cin >> a >> b >> d >> c >> e;

	double avg = calculate_avg_mark(a, b, d, c, e);
	cout << "Students averege mark is " << avg << endl;

	return 0;
}