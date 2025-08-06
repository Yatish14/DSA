#include <bits/stdc++.h>
using namespace std;

string checkEvenOrOdd(int n)
{
    return n % 2 == 0 ? "Even" : "Odd";
}
int main()
{
    int n;
    cout << "Enter n - ";
    cin >> n;
    cout << checkEvenOrOdd(n);
    return 0;
}