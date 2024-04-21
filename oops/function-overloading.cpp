#include <bits/stdc++.h>
using namespace std;

class calc
{
public:
    void func(int x)
    {
        cout << "Value of x is " << x << endl;
    }
    void func(double x)
    {
        cout << "Value of x is " << x << endl;
    }
    void func(int x, int y)
    {
        cout << "value of x and y is " << x << " " << y << endl;
    }
};

int main()

{
    calc obj1;
    obj1.func(7);
    obj1.func(9.132);
}