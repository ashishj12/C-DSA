#include <iostream>
using namespace std;

int main()

{   
    void *ptr;
    int i = 10;
    //pass address of given 
    ptr = &i;
    cout << "Address of given variable is : " & i << endl;
    cout << "Address where pointer is pointing" << ptr << endl;
    return 0;
}