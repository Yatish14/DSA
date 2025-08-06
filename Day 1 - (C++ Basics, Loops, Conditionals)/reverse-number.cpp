#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n - ";
    cin >> n;
    int ans = 0;
    int lastDigit;
    cout << "Reverse of " << n << " - ";
    while (n > 0)
    {
        lastDigit = n % 10;
        n = n / 10;
        ans = ans * 10 + lastDigit;
    }
    cout << ans;
    return 0;
}