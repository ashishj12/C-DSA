#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getage(){
        return this->age;
    }

    void setweight(int w){
        this->weight = w;
    }
};

class male:public Human{
        public:
        string color;

        void sleep(){
            cout<<"Male sleeping "<<endl;
        }
};

int main()

{
    male m;
    cout<<m.age<<endl; 
    cout<<m.height<<endl;
}