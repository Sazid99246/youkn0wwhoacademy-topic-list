#include <bits/stdc++.h>
#define ll long long
#define MW_YH                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
bool knowBit(ll val, ll ind)
{
    return (val >> ind) & 1;
}
void Mohammed_Waleed()
{
    MW_YH
}
// ----------------------------------------------------------------- //

void solution()
{
    ll n;
    cin >> n;
    ll res = 0;
    for (int i = 0; i < 32; i++)
    {
        res <<= 1;
        res |= knowBit(n, i);
    }
    cout << res << endl;
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
