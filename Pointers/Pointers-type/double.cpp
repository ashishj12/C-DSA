#include <iostream>
using namespace std;

int main()

{
    int a = 10;
    int *p = &a;
    int **q = &p;

    // there are three values of same address
    cout << &a << endl;
    cout << p << endl;
    cout << *q << endl;
    // threre are two values of same address
    cout << &p << endl;
    cout << q << endl;
    // there are three valus of same address
    cout << a << endl;
    cout << *p << endl;
    cout << **q << endl;
    return 0;
}