#include <iostream>
using namespace std;

int chromaticScale[12] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int majorScale[12] = {1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1};
int minorScale[12] = {1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1};
int dNaturalScale[12] = {1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0};
int eNaturalScale[12] = {1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0};
int fNaturalScale[12] = {1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1};
int wholeToneScale[12] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};

int transposeChromaticScaleArray[7];
int transposeMajorScaleArray[7];
int transposeMinScaleArray[7];
int transposedNaturalScaleArray[7];
int transposeeNaturalScaleArray[7];
int transposefNaturalScaleArray[7];
int transposeWholeToneScaleScaleArray[7];

int printScaleChromatic();
int printScaleMaj();
int printScaleMin();
int printScaledNaturalScale();
int printScaleeNaturalScale();
int printScalefNaturalScale();
int printWholeToneScale();

int addChromaticScale2Root(int root);
int addMajScale2Root(int root);
int addMinScale2Root(int root);
int adddNatScale2Root(int root);
int addeNatScale2Root(int root);
int addfNatScale2Root(int root);
int addWholeToneScale2Root(int root);

int main() {
  printScaleMaj(); addMajScale2Root(60);
  printScaleMin(); addMinScale2Root(60);
  printScaleChromatic(); addChromaticScale2Root(60);
  printScaledNaturalScale(); adddNatScale2Root(60);
  printScaleeNaturalScale(); addeNatScale2Root(60);
  printWholeToneScale(); addWholeToneScale2Root(60);
  printScalefNaturalScale(); addfNatScale2Root(60);
  return 0;
}

int printScaleChromatic() {
  cout << endl << " " << chromaticScale[0];
  for(int i = 0; i < 11; i++) {cout << " " << chromaticScale[i+1];}
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

int printScaledNaturalScale() {
  cout << endl << " " << dNaturalScale[0];
  for(int i = 0; i < 11; i++) {cout << " " << dNaturalScale[i+1];}
  return 0;
}

int printScaleeNaturalScale() {
  cout << endl << " " << eNaturalScale[0];
  for(int i = 0; i < 11; i++) {cout << " " << eNaturalScale[i+1];}
  return 0;
}

int printScalefNaturalScale() {
  cout << endl << " " << fNaturalScale[0];
  for(int i = 0; i < 11; i++) {cout << " " << fNaturalScale[i+1];}
  return 0;
}

int printWholeToneScale() {
  cout << endl << " " << wholeToneScale[0];
  for(int i = 0; i < 11; i++) {cout << " " << wholeToneScale[i+1];}
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

      int adddNatScale2Root(int root) {
        int it2=-1; cout << endl;
        for(int i=0; i<12; i++) {
          if(dNaturalScale[i] == 1) {
            it2++; transposedNaturalScaleArray[it2] = i+root;
            cout << " " << transposedNaturalScaleArray[it2];}
          }
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

        int addfNatScale2Root(int root) {
          int it2=-1; cout << endl;
          for(int i=0; i<12; i++) {
              if(fNaturalScale[i] == 1) {
              it2++; transposefNaturalScaleArray[it2] = i+root;
              cout << " " << transposefNaturalScaleArray[it2];}
          }
          return 0;
        }

        int addWholeToneScale2Root(int root) {
          int it2=-1; cout << endl;
          for(int i=0; i<12; i++) {
              if(wholeToneScale[i] == 1) {
              it2++; transposeWholeToneScaleScaleArray[it2] = i+root;
              cout << " " << transposeWholeToneScaleScaleArray[it2];}
          }
          return 0;
        }
