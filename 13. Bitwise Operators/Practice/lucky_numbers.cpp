#include <bits/stdc++.h>

using namespace std;

#define ll long long int

vector<ll> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    for (int s = 2; s <= 10; s += 2)
    {
        for (int i = 0; i < (1 << s); ++i)
        {

            if (__builtin_popcount(i) * 2 != s)
                continue;

            ll temp = 0;
            string S = "";
            for (int j = 0; j < s; ++j)
            {
                if (i & (1 << j))
                    S += '4';
                else
                    S += '7';
            }
            v.push_back(stoll(S));
        }
    }

    sort(begin(v), end(v));

    int n;
    cin >> n;
    cout << *lower_bound(v.begin(), v.end(), n);
    return 0;
}
