// a *= pi

#include <iostream>
using namespace std;

double mathFormula(double a, double pi, int size);

int main() {mathFormula(1, 3.14, 10);return 0;}

double mathFormula(double a, double pi, int size) {
  double result = a;
  for(int i = 0; i < size; i++){result *= pi; cout << endl << "result = " << result;}
  cout << endl << "result = " << result;
  return result;
}
