#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    string s;
    cin >> s;
    vector<ll> v;
    for (int mask = 0; mask < (1 << s.size()) / 2; mask++)
    {
        ll sum = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            sum = sum * 10 + s[i] - '0';
            if ((mask >> i) & 1)
            {
                v.push_back(sum);
                sum = 0;
            }
        }
        v.push_back(sum);
    }
    ll ans = accumulate(v.begin(), v.end(), 0LL);
    cout << ans << '\n';
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    solve();
    return 0;
}
