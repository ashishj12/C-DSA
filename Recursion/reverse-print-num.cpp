#include <bits/stdc++.h>
using namespace std;

int printrev(int i, int n)
{
    if (i < 1)
        return -1;
    cout << i << endl;
    printrev(i - 1, n);
}

int main()

{
    int n;
    cout << "Enter Number : " << endl;
    cin>>n;
    printrev(n, 1);
}