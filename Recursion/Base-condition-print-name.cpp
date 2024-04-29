#include <bits/stdc++.h>
using namespace std;

int fun(int i, int n)
{
    if (i > n)
        return -1;
    cout << "Ashish"<<endl;
    fun(i + 1, n);
}

int main()

{
    int n;
    cout << "Enter Number:" << endl;
    cin>>n;
    fun(1, n);
    return 0;
}