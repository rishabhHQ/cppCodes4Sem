// Develop a program for implementation of power function
// and determine that complexity should be O(log n).

#include <iostream>
using namespace std;

long long pow(long long x, int p) {
    if (p == 0)
        return 1;

    long long noic = pow(x, p / 2);

    if (p % 2 == 0)
        return noic * noic;
    else
        return x * noic * noic;
}

int main() {
    long long x;
    int p;

    cout << "enter number: ";
    cin >> x;
    cout << "enter power: ";
    cin >> p;

    cout << "Result = " << pow(x, p) << endl;
    return 0;
}
