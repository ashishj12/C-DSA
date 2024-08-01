#include <bits/stdc++.h>
using namespace std;

int lowerbound(vector<int> arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            //smaller index at left
            high = mid - 1;
        }
        else
        {
            //at right
            low = mid + 1;
        }
    }
    return ans;
}

int main()

{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 9;
    int ind = lowerbound(arr, n, x);
    cout << "the lower bound index is " << ind << endl;
    return 0;
}