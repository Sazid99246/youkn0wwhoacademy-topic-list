#include <bits/stdc++.h>
using namespace std;
#define ll long long
void ft()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}
int main()
{
    ft();
    int n;
    cin >> n;
    vector<ll> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    ll tam = (1 << n);
    ll r = LLONG_MAX;
    for (int i = 1; i < tam; i++)
    {
        ll ra = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                ra += vec[j];
            else
                ra -= vec[j];
        }
        r = min(abs(ra), r);
    }
    cout << r << '\n';
    return 0;
}
