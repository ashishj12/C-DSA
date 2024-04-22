#include <bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void alterswap(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()

{
    int even[8] = {2, 41, 23, 15, 26, 36, 16, 17};
    int odd[5] = {1, 25, 13, 19, 48};

    alterswap(even, 8);
    PrintArray(even, 8);

    cout<<endl;

    alterswap(odd, 8);
    PrintArray(odd, 8);
}