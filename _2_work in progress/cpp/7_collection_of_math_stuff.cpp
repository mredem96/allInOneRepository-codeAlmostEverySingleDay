#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double mathFormula1(double size, double a, double pi);
double mathFormula2(double size, double a);
double mathFormula3(double a, double pi, int size);
double mathFormula4(double a, double b, double c, double pi);
double mathFormula5(double c, double a, double b, double pi);
double mathFormula6(double x, double a, double b);
double mathFormula7(double x, double a, double b);
double mathFormula8(int size, double a, double b, double pi, double c);
double mathFormula9(double size, double a, double pi);

int main() {
  mathFormula1(10, -1, 3.14);
  mathFormula2(3, 4);
  mathFormula3(3, 3.14, 6);
  mathFormula4(3, 4, 2, 3.14);
  mathFormula5(3, 4, 2, 3.14);
  mathFormula6(3, 4, 6);
  mathFormula7(3, 4, 6);
  mathFormula8(6, 2, 3, 3.14, 4);
  mathFormula9(10, -1, 3.14);
  return 0;
}

double mathFormula1(double size, double a, double pi) {
  double result = a; double divisor1 = pi; double divisor2 = pi/2;  double divisorM = 0;
  double divisorDec = 0.9; double divisorInc=0.1;
  cout << endl << "result = " << result;
  for(int i = 0; i < size; i++) {
    divisorDec -= 0.1; divisorInc += 0.322;
    divisor1 *= divisorDec; divisor2 *= divisorInc;
    divisorM = (divisor1 + divisor2) * 0.5;
    result *= (result/divisorM);
    cout << endl << "result = " << result;
  }
  cout << endl << "result = " << result; return result;
  return result;
}

double mathFormula2(double size, double a) {
  double result = a; double divisor = 3; double divisorDec = 0.9;
  cout << endl << "result = " << result;
  for(int i = 0; i < size; i++) {
    divisorDec-=0.1; divisor *= divisorDec; result *= (a/divisor);
    cout << endl << "result = " << result;
  }
  cout << endl << "result = " << result; return result;
  return result;
}

double mathFormula3(double a, double pi, int size) {
  double result = a;
  for(int i = 0; i < size; i++){result *= pi; cout << endl << "result = " << result;}
  cout << endl << "result = " << result;
  return result;
}

double mathFormula4(double a, double b, double c, double pi) {
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

double mathFormula5(double c, double a, double b, double pi) {
	double result = c*(a+b);
	cout << endl << "result = " << result;
	result *= result;
	cout << endl << "result = " << result;
	result /= pi;
	cout << endl << "result = " << result;
	return result;
}

double mathFormula6(double x, double a, double b) {
	double resultA = x; double resultB = 3; double resultF = 0;
	for(int i = 0; i<(int)a; i++) {
		for(int i2 = 0; i2 < (int)b; i2++) {resultA *= x; cout << endl << "resultA = " << resultA;}
	}

	for(int it2=0; it2<(int)(a*b); it2++) {
		resultB *= x; cout << endl << "resultB = " << resultB;
	}

	if(resultA==resultB) {resultF = resultA; cout << endl << "A==B";}
	else{resultF=resultA; cout << endl << "A!=B";}

	return resultF;
}

double mathFormula7(double x, double a, double b) {
	double resultA = x; double resultB = 3; double resultF = 0;
	for(int i = 0; i<(int)a; i++) {
		for(int i2 = 0; i2 < (int)b; i2++) {resultA *= x; cout << endl << "resultA = " << resultA;}
	}

	for(int it2=0; it2<(int)(a*b); it2++) {
		resultB *= x; cout << endl << "resultB = " << resultB;
	}

	if(resultA==resultB) {resultF = resultA; cout << endl << "A==B";}
	else{resultF=resultA; cout << endl << "A!=B";}

	return resultF;
}

double mathFormula8(int size, double a, double b, double pi, double c) {
  double result = a+b;
  cout << endl << "result = " << result;
  for(int i = 0; i < (size - 1); i++) {
    result += (a+b) * (pi * 1/c);
    cout << endl << "result = " << result;
  }
  return result;
}


double mathFormula9(double size, double a, double pi) {
  double result = a; double divisor1 = pi; double divisor2 = pi/2;  double divisorM = 0;
  double divisorDec = 0.9; double divisorInc=0.1;
  cout << endl << "result = " << result;
  for(int i = 0; i < size; i++) {
    divisorDec += 0.1; divisorInc -= 0.322;
    divisor1 /= divisorDec; divisor2 /= divisorInc;
    divisorM = (divisor1 - divisor2) / 0.5;
    result /= (result*divisorM);
    cout << endl << "result = " << result;
  }
  cout << endl << "result = " << result; return result;
  return result;
}
