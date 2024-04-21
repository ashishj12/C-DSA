#include <bits/stdc++.h>
using namespace std;

int pattern1(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int num;
    cout<<"Row : "
    cin >> num;
    pattern1(num);
}