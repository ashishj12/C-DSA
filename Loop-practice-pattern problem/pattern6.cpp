#include <bits/stdc++.h>
using namespace std;

int pattern6(int num)
{
    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j <= num - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int num;
    cout << "Row:";
    cin >> num;
    pattern6(num);
}