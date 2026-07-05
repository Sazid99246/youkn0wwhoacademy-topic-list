#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long ans = n * (n + 1) / 2;

        for (long long p = 1; p <= n; p *= 2)
        {
            ans -= 2 * p;
        }

        cout << ans << endl;
    }

    return 0;
}
