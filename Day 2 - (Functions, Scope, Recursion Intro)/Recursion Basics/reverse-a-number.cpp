#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n, int reversed)
{
    if (n <= 0)
        return reversed;
    reversed = reversed * 10;
    return reverseNumber(n / 10, reversed + n % 10);
}

int main()
{
    int n;
    cout << "Enter n - ";
    cin >> n;
    cout << "Reverse of " << n << " - " << reverseNumber(n, 0);
    return 0;
}