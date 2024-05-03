#include <bits/stdc++.h>
using namespace std;

int main()

{
    string s;
    cout << "Enter the string : " << endl;
    cin >> s;

    // precompute
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    char q;
    cout << "Enter the query for found the frequency of the character in a string : " << endl;
    cin >> q;

    // fetch the precompute data from the hash

    cout << hash[q - 'a'] <<endl;

    return 0;
}