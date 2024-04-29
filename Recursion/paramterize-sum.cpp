#include <bits/stdc++.h>
using namespace std;

void printsum(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    printsum(i - 1, sum + 1);
}

int main()

{
    int n;
    cout << "Enter number : " << endl;
    cin >> n;
    printsum(n, 0);
}