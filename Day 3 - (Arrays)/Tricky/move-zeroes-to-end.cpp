#include <bits/stdc++.h>
using namespace std;

// Without Preserving Order - Time - O(n), Space - O(1)

// Traverse the array and whenever a 0 is found, swap it with the last non-zero element from the end.
void moveAllZeroesToEndWithoutOrder(int a[], int n)
{
    int temp;
    int k = n;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            while (i < k - 1)
            {
                if (a[k - 1] != 0)
                {
                    temp = a[k - 1];
                    a[k - 1] = a[i];
                    a[i] = temp;
                    k--;
                    break;
                }
                else
                {
                    k--;
                }
            }
        }
    }
    cout << "Array after moving all zeroes to end without order - ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

// Preserving Order - Time - O(n), Space - O(1)

// Traverse the array, shift all non-zero elements forward, and fill the remaining slots with 0.
void moveAllZeroesToEndWithOrder(int a[], int n)
{
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[index] = a[i];
            index++;
        }
    }
    for (int i = index; i < n; i++)
    {
        a[i] = 0;
    }
    cout << "Array after moving all zeroes to end with order - ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

// Two Pointer Approach - Time - O(n), Space - O(1)
void moveAllZeroesToEndTwoPointers(int a[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
    cout << "Array after moving all zeroes to end with order (2 pointers) - ";
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
    // moveAllZeroesToEndWithoutOrder(a, n);
    // moveAllZeroesToEndWithOrder(a, n);
    moveAllZeroesToEndTwoPointers(a, n);
    return 0;
}