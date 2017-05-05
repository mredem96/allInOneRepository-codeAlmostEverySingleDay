#include <iostream>
using namespace std;

int myIntList[4] = {1, 2, 3, 4};

class vectorOperations {
	public:
		int sumRange();
};


int vectorOperations::sumRange() {
	int result = 0;
	for(int i=0; i<sizeof(myIntList); i++) {result += myIntList[i];} 
	cout << endl << result;	
	return 0;
}

int main() {
	vectorOperations myVect;
	myVect.sumRange();
	return 0;
}


