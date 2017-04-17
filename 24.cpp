#include <iostream>
using namespace std;

int majorScale[12] = {1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1};
int minorScale[12] = {1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1};

int transposeMajorScaleArray[7];
int transposeMinScaleArray[7];

int printScaleMaj();
int printScaleMin();

int addMajScale2Root(int root);
int addMinScale2Root(int root);


int main() {
      printScaleMaj(); addMajScale2Root(60);
      printScaleMin(); addMinScale2Root(60);
      return 0;
}

int printScaleMaj() {
  cout << endl << " " << majorScale[0];
  for(int i = 0; i < 11; i++) {cout << " " << majorScale[i+1];}
  return 0;
}

int printScaleMin() {
  cout << endl << " " << minorScale[0];
  for(int i = 0; i < 11; i++) {cout << " " << minorScale[i+1];}
  return 0;
}

int addMajScale2Root(int root) {
  int it2=-1; cout << endl;
  for(int i=0; i<12; i++) {
      if(majorScale[i] == 1) {
      it2++; transposeMajorScaleArray[it2] = i+root;
      cout << " " << transposeMajorScaleArray[it2];}
  }
  return 0;
}

int addMinScale2Root(int root) {
  int it2=-1; cout << endl;
  for(int i=0; i<12; i++) {
      if(minorScale[i] == 1) {
      it2++; transposeMinScaleArray[it2] = i+root;
      cout << " " << transposeMinScaleArray[it2];}
  }
  return 0;
}
