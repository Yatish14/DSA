#include <bits/stdc++.h>
using namespace std;

void change(int &x)
{
    x = 100;
}

int main()
{
    int a = 10;
    change(a);
    cout << a;
    return 0;
}