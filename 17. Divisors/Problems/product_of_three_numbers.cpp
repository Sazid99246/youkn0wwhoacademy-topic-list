#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long a = -1, b = -1, c = -1;
        long long temp = n;

        // Find the first factor
        for (long long i = 2; i * i <= temp; i++)
        {
            if (temp % i == 0)
            {
                a = i;
                temp /= i;
                break;
            }
        }

        // If no factor found, n is prime
        if (a == -1)
        {
            cout << "NO\n";
            continue;
        }

        // Find the second distinct factor
        for (long long i = 2; i * i <= temp; i++)
        {
            if (temp % i == 0 && i != a)
            {
                b = i;
                temp /= i;
                break;
            }
        }

        // If second factor not found
        if (b == -1)
        {
            cout << "NO\n";
            continue;
        }

        c = temp;

        if (c != a && c != b && c > 1)
        {
            cout << "YES\n";
            cout << a << " " << b << " " << c << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
