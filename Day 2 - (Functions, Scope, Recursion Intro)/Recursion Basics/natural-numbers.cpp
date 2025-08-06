#include <bits/stdc++.h>
using namespace std;

void printNaturalNumbers(int n)
{
    if (n == 0)
    {
        return;
    }
    printNaturalNumbers(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter n - ";
    cin >> n;
    printNaturalNumbers(n);
    return 0;
}