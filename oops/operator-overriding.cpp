#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    string colour = "Black";
};

// inheriting animal class

class Dog : public Animal
{
public:
    string colour = "Grey";
};

int main()

{
    Animal d = Dog();
    cout << d.colour<<endl;
    return 0;
}