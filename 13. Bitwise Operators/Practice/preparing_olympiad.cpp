#include <bits/stdc++.h>

#define long long long

using namespace std;

int main()
{
    int n, l, r, x;
    vector<int> a;
    cin >> n >> l >> r >> x;
    for (int i = 1; i <= n; ++i)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }
    int res = 0;
    for (int mask = 0; mask < (1 << n); ++mask)
    {
        int cnt = __builtin_popcountll(mask);
        if (cnt < 2)
            continue;
        long sum = 0, difMin = 1e9, difMax = 0;
        for (int i = 0; i < n; ++i)
        {
            if ((mask >> i) & 1)
            {
                sum += a[i];
                difMin = min(difMin, (long)(a[i]));
                difMax = max(difMax, (long)(a[i]));
            }
        }
        res += (l <= sum and sum <= r and (difMax - difMin) >= x);
    }
    cout << res << '\n';
}
