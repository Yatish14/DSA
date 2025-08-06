#include <bits/stdc++.h>
using namespace std;

int noOfDigits(int n)
{
    if (n == 0)
        return 1;
    return n < 10 ? 1 : 1 + noOfDigits(n / 10);
}

int main()
{
    int n;
    cout << "Enter n - ";
    cin >> n;

    cout << "No of digits of " << n << " - " << noOfDigits(n);

    return 0;
}