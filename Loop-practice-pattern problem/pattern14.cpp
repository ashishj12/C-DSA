#include <bits/stdc++.h>
using namespace std;

void pattern14(int n)
{
    for (int i = 0; i <= n; i++)
    {
        // for spaces
        for (int j = 0; j <= n - i + 1; j++)
        {
            cout << " ";
        }
        // for characters
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;//breakpoint for reverse the pattern
        for (int j = 0; j <= (2 * i + 1); j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        // for spaces
        for (int j = 0; j <= n - i + 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()

{
    int n;
    cout << "Enter Row:";
    cin >> n;
    pattern14(n);
}