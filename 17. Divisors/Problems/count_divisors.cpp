#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> divisors(MAX + 1, 0);

    // Precompute divisor counts
    for (int i = 1; i <= MAX; i++)
    {
        for (int j = i; j <= MAX; j += i)
        {
            divisors[j]++;
        }
    }

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        cout << divisors[x] << '\n';
    }

    return 0;
}
