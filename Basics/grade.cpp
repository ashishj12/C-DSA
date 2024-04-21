/*A school has following grading system

a. Below 25 -F
b. 25 to 44 -E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 70 - B
f. 80 to 100 - A
ask them user to enter the marks and coresponding print the grade
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter Marks : "<<endl; 
    cin>>marks;

    if(marks<25){
        cout<<"F"<<endl;
    }
    else if(marks<=44){
        cout<<"E"<<endl;
    }
    else if(marks<=49){
        cout<<"D"<<endl;
    }
    else if(marks<=59){
        cout<<"C"<<endl;}
    else if(marks<=70){
        cout<<"B"<<endl;}
    else if(marks<=100){
        cout<<"A"<<endl;}
}
