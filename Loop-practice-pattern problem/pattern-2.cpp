#include <bits/stdc++.h>
using namespace std;

int pattern2(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int num;
    cout<<"Row : ";
    cin >> num;
    pattern2(num);
}