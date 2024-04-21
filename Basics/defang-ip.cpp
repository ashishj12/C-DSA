#include <bits/stdc++.h>
using namespace std;

string DefangIP(string str)
{
    string defangIP = "";

    for (char c : str)
        (c == '.') ? defangIP += "[.]" : defangIP += c;
    return defangIP;
}

int main()
{
    string str;
    cout<<"Enter IP"<<endl;
    cin >> str;
    cout << DefangIP(str);
    return 0;
}