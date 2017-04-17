#include <iostream>
using namespace std;

int chromaticScale[12] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int transposeChromaticScaleArray[7];

int printScaleChromatic();
int addChromaticScale2Root(int root);

int main() {printScaleChromatic(); addChromaticScale2Root(60); return 0;}

int printScaleChromatic() {
  cout << endl << " " << chromaticScale[0];
  for(int i = 0; i < 11; i++) {cout << " " << chromaticScale[i+1];}
  return 0;
}

int addChromaticScale2Root(int root) {
  int it2=-1; cout << endl;
  for(int i=0; i<12; i++) {
      if(chromaticScale[i] == 1) {
      it2++; transposeChromaticScaleArray[it2] = i+root;
      cout << " " << transposeChromaticScaleArray[it2];}
  }
  return 0;
}
