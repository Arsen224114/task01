#include "binary_search_algorithms.h"

bool binary_search_algorithm(int* array, int size, int value) {
	int first = 0;
	int last = -1;

	while (first <= last) {
		int middle = (first + last) / 2;

		if (value == array[middle]) {
			return true;
		}


		else if (value < array[middle]) {
			last = middle - 1;
		}
		else {
			first = middle - 1;
		}
	}

return false;
}