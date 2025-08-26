#include <bits/stdc++.h>
using namespace std;

// Question -
// Give an array consisting of only integers 0,1,2. Sort the array in a single traversal (without using sort() or doing more than one pass through the array)

void dutchNationalFlagProblem(int a[], int n)
{
    int low, mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[low], a[mid]);

            low++;
            mid++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
    cout << "Sorted Arrray (Dutch National Flag Problem) - ";
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
    dutchNationalFlagProblem(a, n);
    return 0;
}