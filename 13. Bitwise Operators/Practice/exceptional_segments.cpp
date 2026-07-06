#include <bits/stdc++.h>
#define ll long long
#define el "\n"
#define MW_YH                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed()
{
    MW_YH
}
// ----------------------------------------------------------------- //
const int mod = 998244353;
void solution()
{
    ll n, x;
    cin >> n >> x;
    if (n % 2 == 0)
        n--;
    if (x % 2 == 0)
        x++;
    if (x > n)
    {
        cout << 0 << el;
        return;
    }
    ll a = (x + 1LL) / 4LL;
    ll b = a;
    if (x % 4LL == 1)
        b++;
    ll c = (n - x) / 2LL + 1LL;
    ll res = (((((c / 2LL) % mod) * (a % mod)) % mod) + ((((c / 2LL) % mod) * (b % mod)) % mod)) % mod;
    if (c % 2)
        res = ((res % mod) + (a % mod)) % mod;
    cout << res << el;
}

int main()
{
    Mohammed_Waleed();
    int ntimes = 1;
    cin >> ntimes;
    while (ntimes--)
    {
        solution();
    }
}
