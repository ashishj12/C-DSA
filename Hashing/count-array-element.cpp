
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute:
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;

        cout << "Enter the query for find the frquency of the number in array : " << endl;
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }
    return 0;
}
