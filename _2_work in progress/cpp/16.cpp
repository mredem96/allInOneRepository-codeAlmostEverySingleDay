// generates any 12 tone music pattern

#include <iostream>
#include <bitset>
using namespace std;

int binary2decimal(int index);
int binary2decimalmenu();

int main() {
  binary2decimalmenu();
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
