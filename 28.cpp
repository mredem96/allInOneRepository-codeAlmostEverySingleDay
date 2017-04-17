#include <iostream>
using namespace std;

int wholeToneScale[12] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
int transposeWholeToneScaleScaleArray[7];

int printWholeToneScale();
int addeWholeToneScale2Root(int root);

int main() {printWholeToneScale(); addeWholeToneScale2Root(60); return 0;}

int printWholeToneScale() {
  cout << endl << " " << wholeToneScale[0];
  for(int i = 0; i < 11; i++) {cout << " " << wholeToneScale[i+1];}
  return 0;
}

int addeWholeToneScale2Root(int root) {
  int it2=-1; cout << endl;
  for(int i=0; i<12; i++) {
      if(wholeToneScale[i] == 1) {
      it2++; transposeWholeToneScaleScaleArray[it2] = i+root;
      cout << " " << transposeWholeToneScaleScaleArray[it2];}
  }
  return 0;
}
