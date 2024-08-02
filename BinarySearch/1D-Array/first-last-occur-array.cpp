#include <bits/stdc++.h>
using namespace std;

int findfirst(vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return first;
}

int findlast(vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return last;
}

vector<int> findFirstAndLastPosition(vector<int> &arr, int x)
{
    int n = arr.size();
    int first = findfirst(arr, n, x);
    int last = findlast(arr, n, x);
    return {first, last};
}

int main()
{
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5, 5, 6};
    int x = 2;

    vector<int> result = findFirstAndLastPosition(arr, x);

    if (result[0] == -1)
    {
        cout << "Element not found in the array." << endl;
    }
    else
    {
        cout << "First occurrence of " << x << " is at index: " << result[0] << endl;
        cout << "Last occurrence of " << x << " is at index: " << result[1] << endl;
    }

    return 0;
}