#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long s = 64 - __builtin_clzll(n);
    long long bitmask = (1LL << s) - 1;
    if (k == 1)
    {
        cout << n;
    }
    else
    {
        cout << bitmask;
    }
}
