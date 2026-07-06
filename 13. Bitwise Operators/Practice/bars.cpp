#include <bits/stdc++.h>

#define long long long

using namespace std;

bool canObtain(int &l, int &n, vector<int> &a)
{
    for (int mask = 0; mask < (1 << n); ++mask)
    {
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            if ((mask >> i) & 1)
            {
                sum += a[i];
            }
        }
        if (sum == l)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, n;
        vector<int> a;
        cin >> l >> n;
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        cout << (canObtain(l, n, a) ? "YES" : "NO") << '\n';
    }
}
