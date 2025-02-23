#include "util.h"
#include "algorithm.h"
#define SIZE 50

int main() {
	int array[SIZE]{};

	//cout << "Before array: " << convert(array, SIZE) << endl;
	init(array, SIZE, -10, 10);
	cout << "Array: " << convert(array, SIZE) << endl;

	int max = get_max(array, SIZE);
	cout << "Max value of array: " << max << endl;

	int min = get_min(array, SIZE);
	cout << "Min value of array: " << min << endl;

	double arithmitic_avg = calculate_arithmetical_avg(array, SIZE);
	cout << "Arithmitic average is " << arithmitic_avg << endl;

	double geometric_avg = calculate_geometric_avg(array, SIZE);
	cout << "Arithmitic average is " << geometric_avg << endl;

	return 0;
}