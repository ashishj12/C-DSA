#include <bits/stdc++.h>
using namespace std;

int pattern7(int n)
{
    for (int i =0; i < n; i++)
    {
        // for space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout <<" ";
        }
        // for star
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        // for space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {

        // for space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // for star
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // for space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
    cout << endl;
    }
}
int main()

{
    int n;
    cout << "Row:";
    cin>>n;
    pattern7(n);
    pattern8(n);
}