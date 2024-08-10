#include <bits/stdc++.h>
using namespace std;

int findPages(vector<int> &arr, int n, int m)
{
    int maxPages = arr[0];
    int totalPages = arr[0];

    if (m > n)
        return -1;

    for (int i = 1; i < n; i++)
    {
        maxPages = max(maxPages, arr[i]);
        totalPages += arr[i];
    }

    int low = maxPages;
    int high = totalPages;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int students = 0, pages = 0;
        for (int i = 0; i < n; i++)
        {
            if (pages + arr[i] > mid)
            {
                students++;
                pages = arr[i];
            }
            else
            {
                pages += arr[i];
            }
        }
        students++;

        if (students > m)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

int main()
{
    vector<int> arr = {25, 46, 28, 49, 24};
    int n = 5;
    int m = 4;
    int ans = findPages(arr, n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}