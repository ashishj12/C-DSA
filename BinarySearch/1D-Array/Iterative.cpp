// iterative approach for binary search

#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &arr, int target)
{
    int n = arr.size();

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> a = {2,3,5,6,8,9,10};
    int target = 6;
    int ind = BinarySearch(a, target);
    if (ind == -1)
        cout << "The target is not present." << endl;
    else
        cout << "The target is at index: "
             << ind << endl;
    return 0;
}
