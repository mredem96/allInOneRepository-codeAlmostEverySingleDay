#include <iostream>
using namespace std;

int dNaturalScale[12] = {1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0};
int transposedNaturalScaleArray[7];

int printScaledNaturalScale();
int adddNatScale2Root(int root);

int main() {printScaledNaturalScale(); adddNatScale2Root(60); return 0;}

int printScaledNaturalScale() {
  cout << endl << " " << dNaturalScale[0];
  for(int i = 0; i < 11; i++) {cout << " " << dNaturalScale[i+1];}
  return 0;
}

int adddNatScale2Root(int root) {
  int it2=-1; cout << endl;
  for(int i=0; i<12; i++) {
      if(dNaturalScale[i] == 1) {
      it2++; transposedNaturalScaleArray[it2] = i+root;
      cout << " " << transposedNaturalScaleArray[it2];}
  }
  return 0;
}
