#include <iostream>
using namespace std;

int majorScale[12] = {1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1};
int transposeArray[7];

int printScaleMaj();
int addScale2Root(int root);

int main() {printScaleMaj(); addScale2Root(60); return 0;}

int printScaleMaj() {
  cout << endl << " " << majorScale[0];
  for(int i = 0; i < 11; i++) {cout << " " << majorScale[i+1];}
  return 0;
}

int addScale2Root(int root) {
  int it2=-1; cout << endl;
  for(int i=0; i<12; i++) {
      if(majorScale[i] == 1) {
      it2++; transposeArray[it2] = i+root;
      cout << " " << transposeArray[it2];}
  }
  return 0;
}
