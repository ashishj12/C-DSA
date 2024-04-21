#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "I am a" << endl;
    }
    class B
    {
    public:
        void func()
        {
            cout << "I am b" << endl;
        }

    }
    class C : public A, public B
    {

    };
};

int main()

{
    C obj;
    obj.A::func();//use scope resolution operator to access class for same name of the function
    return 0;
}