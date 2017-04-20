// generates any 12 tone music pattern
// can also be used as a binary 12 bit binary hashcat

#include <iostream>
#include <bitset>
using namespace std;

int main() {
  for(int i=0; i<4096; i++) {
    string binary = bitset<8>(i).to_string(); //to binary
    cout<<binary<<"\n";
  }
  return 0;
}
