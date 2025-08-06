#include <bits/stdc++.h>
using namespace std;

int sumOfNaturalNumbers(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n + sumOfNaturalNumbers(n - 1);
}

int main()
{
    int n;
    cout << "Enter n - ";
    cin >> n;
    cout << "Sum of natural numbers from 1 to " << n << " - " << sumOfNaturalNumbers(n);
    return 0;
}