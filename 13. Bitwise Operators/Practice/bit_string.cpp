#include <bits/stdc++.h>
using namespace std;

int main()
{
    const long long MOD = 1000000007;
    long long n;
    cin >> n;

    long long ans = 1;

    for (long long i = 0; i < n; i++)
    {
        ans = (ans * 2) % MOD;
    }

    cout << ans << endl;

    return 0;
}
