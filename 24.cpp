#include <iostream>
using namespace std;

int chromaticScale[12] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int majorScale[12] = {1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1};
int minorScale[12] = {1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1};
int dNaturalScale[12] = {1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0};
int eNaturalScale[12] = {1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0};
int fNaturalScale[12] = {1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1};
int wholeToneScale[12] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};

int copyPrintArray[12];
int copytransposeArray[12];

int transposeScaleArray[12];

int printScale();
int addScale2Root(int root);


int main() {
  printScale();
  addScale2Root(60);
  return 0;
}

int printScale() {
  char op;

  do {

    cout << endl << "choose an option";
    cout << endl << "a - print chromatic scale";
    cout << endl << "b - print major scale";
    cout << endl << "c - print minor scale";
    cout << endl << "d - print dNatural scale";
    cout << endl << "e - print eNatural scale";
    cout << endl << "f - print fNatural scale";
    cout << endl << "g - print wholeTone scale";
    cout << endl << "0 - quit";

    cin >> op;

    switch (op) {
      case 'a':
        copy(begin(chromaticScale), end(chromaticScale), begin(copyPrintArray));
        break;
      case 'b':
        copy(begin(majorScale), end(majorScale), begin(copyPrintArray));
        break;
      case 'c':
        copy(begin(minorScale), end(minorScale), begin(copyPrintArray));
        break;
      case 'd':
        copy(begin(dNaturalScale), end(dNaturalScale), begin(copyPrintArray));
        break;
      case 'e':
        copy(begin(eNaturalScale), end(eNaturalScale), begin(copyPrintArray));
        break;
      case 'f':
        copy(begin(fNaturalScale), end(fNaturalScale), begin(copyPrintArray));
        break;
      case 'g':
        copy(begin(wholeToneScale), end(wholeToneScale), begin(copyPrintArray));
        break;
      default:
        break;
    }
    cout << endl << " " << copyPrintArray[0];
    for(int i = 0; i < 11; i++) {cout << " " << copyPrintArray[i+1];}
  } while (op!='0');
  return 0;
}

int addScale2Root(int root) {
  char op;

  do {

    cout << endl << "choose an option";
    cout << endl << "a - add chromatic scale to root";
    cout << endl << "b - add major scale to root";
    cout << endl << "c - add minor scale to root";
    cout << endl << "d - add dNatural scale to root";
    cout << endl << "e - add eNatural scale to root";
    cout << endl << "f - add fNatural scale to root";
    cout << endl << "g - add wholeTone scale to root";
    cout << endl << "0 - quit";

    cin >> op;

    switch (op) {
      case 'a':
        copy(begin(chromaticScale), end(chromaticScale), begin(copytransposeArray));
        break;
      case 'b':
        copy(begin(majorScale), end(majorScale), begin(copytransposeArray));
        break;
      case 'c':
        copy(begin(minorScale), end(minorScale), begin(copytransposeArray));
        break;
      case 'd':
        copy(begin(dNaturalScale), end(dNaturalScale), begin(copytransposeArray));
        break;
      case 'e':
        copy(begin(eNaturalScale), end(eNaturalScale), begin(copytransposeArray));
        break;
      case 'f':
        copy(begin(fNaturalScale), end(fNaturalScale), begin(copytransposeArray));
        break;
      case 'g':
        copy(begin(wholeToneScale), end(wholeToneScale), begin(copytransposeArray));
        break;
      default:
        break;
    }
    int it2=-1; cout << endl;
       for(int i=0; i<12; i++) {
           if(copytransposeArray[i] == 1) {
           it2++; transposeScaleArray[it2] = i+root;
           cout << " " << transposeScaleArray[it2];}
       }
  } while (op!='0');
  return 0;
}
