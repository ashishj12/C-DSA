#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "Inside Function1" << endl;
    }

    class B : public A
    {
    public:
        void func2()
        {
            cout << "Inside Function2" << endl;
        }
    } class C : public A
    {
        void func3()
        {
            cout << "inside function 3" << endl;
        }
    }
};

int main()

{
    A object1;
    object1.func1();

    B object2;
    object2.func1();

    C object3;
    object3.fun2();
}