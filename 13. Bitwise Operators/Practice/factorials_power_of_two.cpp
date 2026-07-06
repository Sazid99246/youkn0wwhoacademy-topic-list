#include <bits/stdc++.h>
#include <climits>
using namespace std;

using ll = long long;

ll fact(int n)
{
    ll ans = 1;
    for (int i = 1; i <= n; ++i)
    {
        ans *= i;
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> factorials;
    for (int i = 3; i < 15; ++i)
    {
        factorials.push_back(fact(i));
    }
    int k = INT_MAX;
    for (int mask = 0; mask < (1LL << (int)factorials.size()); mask++)
    {
        ll sum = 0;
        int cnt = 0;
        for (int i = 0; i < (int)factorials.size(); ++i)
        {
            if (mask >> i & 1)
            {
                if (sum + factorials[i] <= n)
                {
                    sum += factorials[i];
                    cnt++;
                }
            }
        }
        ll sum_needed = abs(n - sum);
        cnt += __builtin_popcountll(sum_needed);
        k = min(k, cnt);
    }
    cout << k << '\n';
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
