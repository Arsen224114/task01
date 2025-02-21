#include "logic.h"

#define NUMBER_OF_STUDENTS 5

double calculate_avg_mark(int a, int b, int c, int d, int e) {
	double s = a + b + c + e + d;
	return s / NUMBER_OF_STUDENTS;
}