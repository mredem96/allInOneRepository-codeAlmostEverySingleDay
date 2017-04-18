#include <iostream>
using namespace std;

int chromaticScale[12] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int majorScale[12] = {1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1};
int minorHarmScale[12] = {1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1};
int minorNatScale[12] = {1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1};
int dNaturalScale[12] = {1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0};
int eNaturalScale[12] = {1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0};
int fNaturalScale[12] = {1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1};
int gNaturalScale[12] = {1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 0};
int aNaturalScale[12] = {1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 0};
int wholeToneScale[12] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};

int copyPrintArray[12];

int transposeScaleArray[12];

int printScale();
int binary2decimal(int index);
int binary2decimalmenu();

int main() {
  printScale();
  binary2decimalmenu();
  return 0;
}

int printScale() {
  char op;

  do {

    cout << endl << "choose an option";
    cout << endl << "a - print chromatic scale";
    cout << endl << "b - print major scale";
    cout << endl << "c - print minor natural scale";
    cout << endl << "d - print minor harmonic scale";
    cout << endl << "e - print dNatural scale";
    cout << endl << "f - print eNatural scale";
    cout << endl << "g - print fNatural scale";
    cout << endl << "h - print gNatural scale";
    cout << endl << "i - print aNatural scale";
    cout << endl << "j - print wholeTone scale";
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
        copy(begin(minorNatScale), end(minorNatScale), begin(copyPrintArray));
        break;
      case 'd':
        copy(begin(minorHarmScale), end(minorHarmScale), begin(copyPrintArray));
        break;
      case 'e':
        copy(begin(dNaturalScale), end(dNaturalScale), begin(copyPrintArray));
        break;
      case 'f':
        copy(begin(eNaturalScale), end(eNaturalScale), begin(copyPrintArray));
        break;
      case 'g':
        copy(begin(fNaturalScale), end(fNaturalScale), begin(copyPrintArray));
        break;
      case 'h':
        copy(begin(gNaturalScale), end(gNaturalScale), begin(copyPrintArray));
        break;
      case 'i':
        copy(begin(aNaturalScale), end(aNaturalScale), begin(copyPrintArray));
        break;
      case 'j':
        copy(begin(wholeToneScale), end(wholeToneScale), begin(copyPrintArray));
        break;
      default:
        break;
    }
    int root = 0;
    cout << endl << "select a root key for transposition" << endl;
    cin >> root;
    cout << endl << " " << copyPrintArray[0];
    for(int i = 0; i < 11; i++) {cout << " " << copyPrintArray[i+1];}
    int it2=-1; cout << endl;
       for(int i=0; i<12; i++) {
           if(copyPrintArray[i] == 1) {
           it2++; transposeScaleArray[it2] = i+root;
           cout << " " << transposeScaleArray[it2];}
       }
  } while (op!='0');
  return 0;
}

int binary2decimal(int index) {
  string binary = bitset<8>(index).to_string();
  cout<<binary<<"\n";
  return 0;
}

int binary2decimalmenu() {
  char op; int ind;
  do {
  cout << endl << "0 quit, other continue";
  cin >> op;
  cout << endl << "choose an index between 0 and 4096";
  cin >> ind;
  binary2decimal(ind);
  } while(op != '0');
  return 0;
}
