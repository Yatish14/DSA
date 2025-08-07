#include <bits/stdc++.h>
using namespace std;

void reverseArray(int a[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        if (n - i - 1 < i)
            break;
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    cout << "Reversed Array - ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
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
    reverseArray(a, n);
    return 0;
}