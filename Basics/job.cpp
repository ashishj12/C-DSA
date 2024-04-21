#include<bits/stdc++.h>
using namespace std;

int main()

{
    int age;
    cout<<"Enter age:"<<endl;
    cin>>age;
    if(age<18){
        cout<<"You are not eligible for job"<<endl;
    }
    else if(age<=54){
        cout<<"You are eligible for job"<<endl;
    }
    else if(age<=57){
        cout<<"eligible for job, but retirement soon"<<endl;
    }
    else{
        cout<<"Retirement"<<endl;
    }
}