#include "./../../include/calculator.h"

double _add(double a, double b) {
	return a+b;
}

double _sub(double a, double b) {
	return a-b;
}

double _mul(double a, double b) {
	return a*b;
}

double _div(double a, double b) {
	return a/b;
}

double _square(double a)
{
	double result = 2;
	for (int i = 0; i < a; i++)
	{
		result *= 2;
	}
	return result;
}
	