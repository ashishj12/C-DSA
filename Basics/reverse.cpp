#include <bits/stdc++.h>
using namespace std;

int main()

{
    int number;
    int reverse = 0;
    cout << "Enter Number" << endl;
    cin >> number;
    while (number > 0)
    {
        int last = number % 10;
        reverse = reverse * 10 + last;
        number = number / 10;
    }
    cout << reverse << endl;
    return 0;
}