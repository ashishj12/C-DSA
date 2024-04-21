#include <bits/stdc++.h>
using namespace std;

class Employee
{

public:
    int id;//create varibles
    string name;
    float salary;

    Employee(int i, string n, float s)//passing parameters
    {
        id = i;
        name = n;
        salary = s;
    }
    void display()
    {
        cout << id << " " << name << " " << salary << endl;//display the parameter values
    }
};

int main(void)
{
    Employee e1 = Employee(101, "abc", 1234);//create an object and pass the values
    Employee e2 = Employee(102, "an", 8282);

    e1.display();
    e2.display();
}