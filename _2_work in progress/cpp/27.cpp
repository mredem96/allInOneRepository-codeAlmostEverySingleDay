#include <iostream>
using namespace std;

int eNaturalScale[12] = {1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0};
int transposeeNaturalScaleArray[7];

int printScaleeNaturalScale();
int addeNatScale2Root(int root);

int main() {printScaleeNaturalScale(); addeNatScale2Root(60); return 0;}

int printScaleeNaturalScale() {
  cout << endl << " " << eNaturalScale[0];
  for(int i = 0; i < 11; i++) {cout << " " << eNaturalScale[i+1];}
  return 0;
}

int addeNatScale2Root(int root) {
  int it2=-1; cout << endl;
  for(int i=0; i<12; i++) {
      if(eNaturalScale[i] == 1) {
      it2++; transposeeNaturalScaleArray[it2] = i+root;
      cout << " " << transposeeNaturalScaleArray[it2];}
  }
  return 0;
}
