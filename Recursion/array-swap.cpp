#include <iostream>
using namespace std;

void swaparr(int arr, int n, int i)
{
    if (n >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);

    swaparr(i + 1, arr, n);
}

int main()

{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swaparr(0, arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
