#include <iostream>
using namespace std;

int myIntList[4] = {1, 2, 3, 4};

class vectorOperations {
	public:
	long double sumRange();
        long double mulRange();
	long double divRange();
};


long double vectorOperations::sumRange() {
	int result = 0;
	for(int i=0; i<4; i++) {result += myIntList[i];}
	cout << endl << result;	
	return 0;
}

long double vectorOperations::mulRange() {
    long double result = 1;
    for(int i=0; i<4; i++) {result = result * myIntList[i];}
    cout << endl << result;
    return 0;
}

long double vectorOperations::divRange() {
    long double result = 1;
    for(int i=0; i<4; i++) {result /= myIntList[i];}
    cout << endl << result;
    return 0;
}

int main() {
	vectorOperations myVect;
	myVect.sumRange();
        myVect.mulRange();
	myVect.divRange();
	return 0;
}


