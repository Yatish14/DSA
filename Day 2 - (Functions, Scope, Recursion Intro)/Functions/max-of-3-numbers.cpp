#include <bits/stdc++.h>
using namespace std;

int findMaxOf3(int a, int b, int c)
{
    return max(a, max(b, c));
}

int main()
{
    int a, b, c;
    cout << "Enter 3 numbers - ";
    cin >> a >> b >> c;
    cout << "Max of the given three numbers is - " << findMaxOf3(a, b, c);
    return 0;
}