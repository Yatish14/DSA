#include <bits/stdc++.h>
using namespace std;

void printModifiedArray(int a[], int n, int violatedIndex)
{
    if (violatedIndex == 0)
    {
        a[0] = a[1];
    }
    else if (a[violatedIndex - 1] >= a[violatedIndex + 1])
    {
        a[violatedIndex + 1] = a[violatedIndex];
    }
    else
    {
        a[violatedIndex] = a[violatedIndex + 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

// Time - O(n), Space - O(1)
void nonDecreasingArrayByModifyingAtmostOneElement(int a[], int n)
{
    int violationCount = 0;
    int violatedIndex = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            violatedIndex = i;
            violationCount++;
        }
    }
    if (violationCount <= 1)
    {
        cout << "Yes, Array can be made non decreasing by modifying atmost 1 element!" << endl;
        printModifiedArray(a, n, violatedIndex);
    }
    else
    {
        cout << "No, Array can't be made non decreasing by modifying atmost 1 element!" << endl;
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
    nonDecreasingArrayByModifyingAtmostOneElement(a, n);
    return 0;
}