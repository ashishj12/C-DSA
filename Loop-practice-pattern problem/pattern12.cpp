#include <bits/stdc++.h>
using namespace std;

void pattern12(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num;<<" ";
            num = num + 1;
        }
        cout << endl;
    }
}

int main()

{
    int n;
    cout << "Row:";
    cin >> n;
    pattern12(n);
}