// doesn't currently compile

#include <iostream>
#include <string>
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
int pentatonicInBlackScale[12] = {1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0};
int insenScale[12] = {1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0};
int acousticScale[12] = {1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0};
int augmentedScale[12] = {1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1};
int alteredScale[12] = {1, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0};
int blueScale[12] = {1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0};
int slendroScale[12] = {1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0};
int yoScale[12] = {1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0};
int prometheusScale[12] = {1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0};
int majorPentatonicScale[12] = {1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 0};

int copyPrintArray[12];

int transposeScaleArray[12];

int printScale();
int binary2decimal(int index);
int binary2decimalmenu();
void copyArray(string inputScale);

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
    cout << endl << "k - print pentatonicInBlack scale";
    cout << endl << "l - print insen scale";
    cout << endl << "m - print acoustic scale";
    cout << endl << "n - print augmented scale";
    cout << endl << "o - print altered scale";
    cout << endl << "p - print blues scale";
    cout << endl << "q - print slendro scale";
    cout << endl << "r - print yo scale";
    cout << endl << "s - print prometheus scale";
    cout << endl << "t - print major pentatonic scale";
    cout << endl << "0 - quit";

    cin >> op;

    switch (op) {

      case 'a': copyArray('chromaticScale'); break;
      case 'b': copyArray('majorScale'); break;
      case 'c': copyArray('minorNatScale'); break;
      case 'd': copyArray('minorHarmScale'); break;
      case 'e': copyArray('dNaturalScale'); break;
      case 'f': copyArray('eNaturalScale'); break;
      case 'g': copyArray('fNaturalScale'); break;
      case 'h': copyArray('gNaturalScale'); break;
      case 'i': copyArray('aNaturalScale'); break;
      case 'j': copyArray('wholeToneScale'); break;
      case 'k': copyArray('pentatonicInBlackScale'); break;
      case 'l': copyArray('insenScale'); break;
      case 'm': copyArray('acousticScale'); break;
      case 'n': copyArray('augmentedScale'); break;
      case 'o': copyArray('alteredScale'); break;
      case 'p': copyArray('blueScale'); break;
      case 'q': copyArray('slendroScale'); break;
      case 'r': copyArray('yoScale'); break;
      case 's': copyArray('prometheusScale'); break;
      case 't': copyArray('majorPentatonicScale'); break;
      default: break;

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
  cin >> op; cout << endl << "choose an index between 0 and 4096";
  cin >> ind; binary2decimal(ind);
  } while(op != '0');
  return 0;
}

void copyArray(string inputScale) {
  copy(begin(inputScale), end(inputScale), begin(copyPrintArray));}
