#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    if (n.find('0') == string::npos)
    {
        n.erase(0, 1);
        cout << n;
    }
    else
    {
        size_t i = n.find('0');
        n.erase(i, 1);
        cout << n;
    }
}
