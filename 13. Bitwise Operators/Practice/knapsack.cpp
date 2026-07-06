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
    int n, w;
    cin >> n >> w;
    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i].first >> vec[i].second;
    int t = (1 << n);
    int s = 0;
    for (int i = 1; i < t; i++)
    {
        int sa = 0, p = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)))
            {
                sa += vec[j].second;
                p += vec[j].first;
            }
        }
        if (p <= w)
            s = max(sa, s);
    }
    cout << s << '\n';
    return 0;
}
