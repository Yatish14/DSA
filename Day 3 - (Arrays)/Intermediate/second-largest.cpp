#include <bits/stdc++.h>
using namespace std;

int secondLargest(int a[], int n)
{
    int max = INT_MIN;
    int secondMax = INT_MIN;
    if (n < 2)
    {
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            secondMax = max;
            max = a[i];
        }
        else if (max != a[i] && secondMax < a[i])
        {
            secondMax = a[i];
        }
    }
    return secondMax == INT_MIN ? -1 : secondMax;
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
    cout << "Second Largest Element - " << secondLargest(a, n);
    return 0;
}