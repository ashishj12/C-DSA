// demonstrate program to rotate array by 1 space

#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int temp = arr[0];//store the first value at temp array
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;//assigned the value of variable to last index
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "<<endl;
    }
}
int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    rotate(arr, n) ;
    return 0;
}