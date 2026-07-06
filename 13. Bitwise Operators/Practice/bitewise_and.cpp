#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll res;
    if (((k - 1) | k) <= n)
        res = k - 1;
    else
        res = k - 2;

    cout << res << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
