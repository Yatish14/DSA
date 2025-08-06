#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n, int reversed)
{
    if (n <= 0)
        return reversed;
    reversed = reversed * 10;
    return reverseNumber(n / 10, reversed + n % 10);
}

bool checkPalindrome(int n)
{
    int reversed = reverseNumber(n, 0);

    return n == reversed;
}

int main()
{
    int n;
    cout << "Enter n - ";
    cin >> n;
    if (checkPalindrome(n))
        cout << n << " is a Palindrome!";
    else
        cout << n << " is not a Palindrome!";
    return 0;
}