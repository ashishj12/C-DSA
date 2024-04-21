#include <bits/stdc++.h>
using namespace std;

int main()

{
    int var = 10;
    cout << "Address of var is : " << &var << endl;

    int *ptr = &var;
    cout << "Value is : " << *ptr << endl;
    return 0;
}