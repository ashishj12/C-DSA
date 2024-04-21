#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{
};

class Genermanshephard : public Dog
{
};
int main()

{
    Genermanshephard g;
    g.speak();
}