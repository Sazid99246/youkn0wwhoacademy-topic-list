#include <bits/stdc++.h>

#define long long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long a;
        cin >> a;
        for (int i = 0; i < 32; i += 2)
        {
            if ((a >> i) & 1 and !((a >> (i + 1)) & 1))
            {
                a -= (1ll << i);
                a += (1ll << (i + 1));
            }
            else if (!((a >> i) & 1) and ((a >> (i + 1)) & 1))
            {
                a += (1ll << i);
                a -= (1ll << (i + 1));
            }
        }
        cout << a << ' ';
    }
}
