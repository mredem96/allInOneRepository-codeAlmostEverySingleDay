// a *= a/(3*=0.9)

#include <iostream>
using namespace std;

double mathFormula(double size, double a);

int main () {
  mathFormula(3, 4);
  return 0;
}

double mathFormula(double size, double a) {
  double result = a; double divisor = 3; double divisorDec = 0.9;
  cout << endl << "result = " << result;
  for(int i = 0; i < size; i++) {
    divisorDec-=0.1; divisor *= divisorDec; result *= (a/divisor);
    cout << endl << "result = " << result;
  }
  cout << endl << "result = " << result; return result;
  return result;
}
