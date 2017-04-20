// a *= a/((3.14*=((0.9-=0.1))+(3.14/2*=(0.1+=0.322))/2)

#include <iostream>
using namespace std;

double mathFormula(double size, double a, double pi);

int main () {
  mathFormula(10, -1, 3.14);
  return 0;
}

double mathFormula(double size, double a, double pi) {
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
