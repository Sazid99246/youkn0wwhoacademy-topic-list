#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define es ' '
#define cnl cout << "\n"
using lli = long long;

void bexor(lli a, lli b)
{
    lli xa = __lg(a), ans = (a ^ b), xans = __lg(ans);
    if (xans > xa)
    {
        cout << -1;
        return;
    }
    if (ans == 0)
    {
        cout << 0;
        return;
    }
    if (ans > a)
    {
        cout << 2 << nl;
        ans -= (1 << xans);
        cout << ans << es;
        cout << (1 << xans);
        return;
    }
    cout << 1 << nl << ans;
    return;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        lli a, b;
        cin >> a >> b;
        bexor(a, b);

        cnl;
    }

    return 0;
}
