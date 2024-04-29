// by using base condition print number from 1 to n lineraly

#include <bits/stdc++.h>
using namespace std;

int printnum(int i, int n)
{
    if (i > n)
        return -1;
    cout << i << endl;
    printnum(i + 1, n);
}

int main()

{
    int n;
    cout << "Enter number : " << endl;
    cin >> n;
    printnum(1, n);
}