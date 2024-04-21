#include <bits/stdc++.h>
using namespace std;

int main()

{ // declaration of an array
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Accessing element " << arr[3] << endl; // access element by using index value of element

    // initalising an array
    int num[15] = {2, 5};
    cout << "print the array : ";
    int n = 15;
    // printing the array
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " "; // print the staring value of array that we intialize after that value wiil be zero.
    }
    return 0;
}