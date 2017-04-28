/*

  formula:
    - result += (a + b) * (pi * 1/c);

*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double myMathFormula(int size, double a, double b, double pi, double c);

int main() {
  myMathFormula(6, 2, 3, 3.14, 4);
  return 0;
}

double myMathFormula(int size, double a, double b, double pi, double c) {
  double result = a+b;
  cout << endl << "result = " << result;
  for(int i = 0; i < (size - 1); i++) {
    result += (a+b) * (pi * 1/c);
    cout << endl << "result = " << result;
  }
  return result;
}
