#include <bits/stdc++.h>
using namespace std;

int pattern15(int n)
{
    int space = 0;
    // for rows
    for (int i = 1; i < n; i++)
    {
        // for star
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // for spaces
        for (int j = 0; j <= space; j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        space += 2;
        cout << endl;
    }
    // for second part of pattern
    space = 8;
    for (int i = 1; i <= n; i++)
    {
        // for star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // for spaces
        for (int j = 0; j <= space; j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        space -= 2;
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter Row:";
    cin >> n;
    pattern15(n);
}