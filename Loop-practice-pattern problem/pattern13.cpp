#include <iostream>
using namespace std;
int pattern13(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Row:";
    cin>>n;
    pattern13(n);
    return 0;
}