#include <bits/stdc++.h>
using namespace std;

int armstrong(int n)
{
    int sum = 0;
    int dup = n;
    while (n > 0)
    {
        int ld = n % 10;
        sum = sum + (ld * ld * ld);
        n = n / 10;
    }
    if (sum == dup)
        cout << "Number is armstrong" << endl;
    else
        cout << "Number is not armstrong" << endl;
}

int main()

{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    armstrong(n);
}