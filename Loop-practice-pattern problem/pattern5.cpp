#include <bits/stdc++.h>
using namespace std;

int pattern5(int num)
{
    for (int i = 1; i < num; i++)
    {
        for (int j = 0; j <= num - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int num;
    cout << "Row:";
    cin >> num;
    pattern5(num);
}