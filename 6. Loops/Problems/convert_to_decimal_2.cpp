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

        int ones = 0;

        while (n > 0)
        {
            if (n % 2 == 1)
            {
                ones += 1;
            }
            n /= 2;
        }
        long long ans = (1LL << ones) - 1;
        cout << ans << endl;
    }

    return 0;
}
