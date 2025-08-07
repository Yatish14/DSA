#include <bits/stdc++.h>
using namespace std;

bool isArraySortedInAscedingOrder(int a[], int n)
{
    int firstEl = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
            return false;
    }
    return true;
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
    if (isArraySortedInAscedingOrder(a, n))
        cout << "Array is sorted in Ascending Order!";
    else
        cout << "Array is not sorted in Ascending Order!";
    return 0;
}