// math formula a = (((((b^c)*pi)/(pi/2))^2)-a)

#include <iostream>
using namespace std;

double mathFormula(double a, double b, double c, double pi);

int main() {
	mathFormula(3, 4, 5, 3.15);
	return 0;
}

double mathFormula(double a, double b, double c, double pi) {
	double result;
	result = b;
	cout << endl << "result " << result;
	cout << endl << "result " << result;
	for(int i = 0; i < c; i++) {result*=b; cout << endl << "result " << result;}
	result*=pi;
	cout << endl << "result " << result;
	result /= (pi*0.5);
	cout << endl << "result " << result;
	result*=result;
	cout << endl << "result " << result;
	result-=a;
	cout << endl << "result " << result;
	return result;
}