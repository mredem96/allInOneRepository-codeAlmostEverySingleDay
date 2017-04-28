// math formula -> (c(a+b)^2)/pi

#include <iostream>
using namespace std;

double myFormula(double c, double a, double b, double pi);

int main(int argc, char const *argv[])
{
	myFormula(2, 2, 1, 3.14);
	return 0;
}

double myFormula(double c, double a, double b, double pi) {
	double result = c*(a+b);
	cout << endl << "result = " << result;
	result *= result;
	cout << endl << "result = " << result;
	result /= pi;
	cout << endl << "result = " << result;
	return result;
}