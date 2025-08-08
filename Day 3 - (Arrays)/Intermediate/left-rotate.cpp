#include <bits/stdc++.h>
using namespace std;

// O(n)
void leftRotateByOne(int a[], const int &n)
{
    cout << "Left Rotated Array by 1 place - ";
    int temp = a[0];
    for (int i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    a[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

// First Attempt - O(n * k)
void leftRotateByK(int a[], const int &n)
{
    int k;
    cout << "Enter k to left rotate array by k places - ";
    cin >> k;
    while (k > 0)
    {
        int temp = a[0];
        for (int i = 1; i < n; i++)
        {
            a[i - 1] = a[i];
        }
        a[n - 1] = temp;
        k--;
    }
    cout << "Left Rotated Array by " << " k places - ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

// Optimal - O(n)
void leftRotateByKOptimal(int a[], const int &n)
{
    int k;
    cout << "Enter k to left rotate array by k places - ";
    cin >> k;

    // If k > n, rotating k times is equal to rotating k % n times
    k %= n;
    int temp;

    // Reverse first K elements
    for (int i = 0; i < (k) / 2; i++)
    {
        temp = a[i];
        a[i] = a[k - i - 1];
        a[k - i - 1] = temp;
    }

    // Reverse other elements
    for (int i = 0; i < (n - k) / 2; i++)
    {
        temp = a[k + i];
        a[k + i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    // Reverse the entire array
    for (int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    cout << "Left Rotated Array by " << " k places - ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

// You can also use two pointers to solve this problem but lets cover this in Week - 2

int main()
{
    int n;
    cout << "Enter no of elements in array - ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << " elements - ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // leftRotateByOne(a, n);
    // leftRotateByK(a, n);
    leftRotateByKOptimal(a, n);
    return 0;
}