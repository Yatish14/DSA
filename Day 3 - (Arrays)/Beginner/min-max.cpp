#include <bits/stdc++.h>
using namespace std;

int min(int a[], int n)
{
    int minEl = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] < minEl)
        {
            minEl = a[i];
        }
    }
    return minEl;
}

int max(int a[], int n)
{
    int maxEl = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxEl)
        {
            maxEl = a[i];
        }
    }
    return maxEl;
}

int main()
{
    int n;
    cout << "Enter no of element in the array - ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << " elements - ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Min Element - " << min(a, n) << endl;
    cout << "Max Element - " << max(a, n);
    return 0;
}