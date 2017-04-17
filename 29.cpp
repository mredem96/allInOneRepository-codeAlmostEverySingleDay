#include <iostream>
using namespace std;

int fNaturalScale[12] = {1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1};
int transposefNaturalScaleArray[7];

int printScalefNaturalScale();
int addfNatScale2Root(int root);

int main() {printScalefNaturalScale(); addfNatScale2Root(60); return 0;}

int printScalefNaturalScale() {
  cout << endl << " " << fNaturalScale[0];
  for(int i = 0; i < 11; i++) {cout << " " << fNaturalScale[i+1];}
  return 0;
}

int addfNatScale2Root(int root) {
  int it2=-1; cout << endl;
  for(int i=0; i<12; i++) {
      if(fNaturalScale[i] == 1) {
      it2++; transposefNaturalScaleArray[it2] = i+root;
      cout << " " << transposefNaturalScaleArray[it2];}
  }
  return 0;
}
