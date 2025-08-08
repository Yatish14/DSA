#include <bits/stdc++.h>
using namespace std;

bool presentInArray(int a[], const int &n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == value)
        {
            return true;
        }
    }
    return false;
}

// First Attempt - Time - O(n^2), Space - O(n)
void removeDuplicates(int a[], int n)
{
    int uniqueArr[n];
    for (int i = 0; i < n; i++)
    {
        uniqueArr[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (!presentInArray(uniqueArr, n, a[i]))
        {
            uniqueArr[i] = a[i];
        }
    }
    cout << "Array after removing duplicates - ";
    for (int i = 0; i < n; i++)
    {
        cout << uniqueArr[i] << " ";
    }
}

// Second Attempt - Without extra space
void uniqueArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // Not incrementing j everytime, cause we need to check again at j'th index because we replaced that index with last element
        for (int j = i + 1; j < n;)
        {
            if (a[i] == a[j])
            {
                a[j] = a[n - 1];
                n--;
            }
            else
            {
                j++;
            }
        }
    }
    cout << "Array after removing duplicates - ";
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
    // removeDuplicates(a, n);
    uniqueArray(a, n);
    return 0;
}