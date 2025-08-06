#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number - ";
    cin >> n;
    int i = 0;
    int k = n;
    while (k > 0)
    {
        k = k / 10;
        i++;
    }
    cout << "No of Digits of " << n << " - " << i;
    return 0;
}