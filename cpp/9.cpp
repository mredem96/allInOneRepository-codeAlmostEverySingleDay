// laws of exponents
// raisng a power to a power
// (x^a)^b = x^(a*b)

#include <iostream>
using namespace std;

double raisingPower2Power(double x, double a, double b);

int main(int argc, char const *argv[])
{
	raisingPower2Power(3, 4, 6);
	return 0;
}

double raisingPower2Power(double x, double a, double b) {
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

