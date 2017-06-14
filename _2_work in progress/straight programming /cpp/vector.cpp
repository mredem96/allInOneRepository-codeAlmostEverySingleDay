#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int classNumber; cin >> classNumber;
    vector<int> arr; int sum = 0;
    for (int i = 0; i < classNumber; i++) {arr.push_back(i); sum += arr[i]; cout << sum << endl;}
    return 0;
}