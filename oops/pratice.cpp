#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int age;
    string name;
};

int main()

{
    student s;
    s.name = "ash";
    s.age = 22;

    cout << s.age << " " << s.name << endl;
}