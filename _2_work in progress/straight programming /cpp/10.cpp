// fooling around with exemples in c documentation

#include <iostream>
using namespace std;

void types() {
	typedef long int LARGEINT;
	typedef long double LARGEDOUBLE;

	LARGEINT a = sizeof(LARGEINT);
	LARGEDOUBLE b = sizeof(LARGEDOUBLE);

	cout << a << " " << " " << b << endl;
}

void copyt(int n)
{
    typedef int B[n]; n += 3; B a; int b[n]; 
    for (int i = 1; i < n; i++) {
    	a[i-1] = b[i]; 
    	cout << a[i] << endl; cout << b[i] << endl;
    }
}

int main() {copyt(3); types(); return 0;}