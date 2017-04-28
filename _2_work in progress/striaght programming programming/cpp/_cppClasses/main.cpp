#include <iostream>
#include <vector>
#include <string>

#include "./main.h"

using namespace std;

int main() {
  Scales myScale;
  myScale.printScale();
  myScale.binary2decimalmenu();

  MathFormulas myformulas;
  myformulas.mathFormula1(10, -1, 3.14);
  myformulas.mathFormula2(3, 4);
  myformulas.mathFormula3(3, 3.14, 6);
  myformulas.mathFormula4(3, 4, 2, 3.14);
  myformulas.mathFormula5(3, 4, 2, 3.14);
  myformulas.mathFormula6(3, 4, 6);
  myformulas.mathFormula7(3, 4, 6);
  myformulas.mathFormula8(6, 2, 3, 3.14, 4);
  myformulas.mathFormula9(10, -1, 3.14);
  return 0;
}
