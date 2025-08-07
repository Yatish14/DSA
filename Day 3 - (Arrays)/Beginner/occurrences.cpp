#include <bits/stdc++.h>
using namespace std;

int occurrences(int a[], int n, int k)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            count++;
        }
    }
    return count;
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
    int k;
    cout << "Enter an element to check no of occurrences - ";
    cin >> k;
    cout << "No of occurrences of " << k << " - " << occurrences(a, n, k);
    return 0;
}