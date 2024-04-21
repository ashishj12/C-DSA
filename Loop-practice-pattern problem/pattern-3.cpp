#include <bits/stdc++.h>
using namespace std;

int pattern2(int num)
{
    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j ;
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