#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number to print its multiplication table: ";
    cin >> n;

    cout << "Multiplication table of " << n << " is:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}