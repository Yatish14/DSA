#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to find n! - ";
    cin >> n;
    int ans = 1;
    int i = n;
    while (i > 1)
    {
        ans = ans * i;
        i--;
    }
    cout << "Factorial of " << n << " - " << ans;
    return 0;
}