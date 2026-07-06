#include <bits/stdc++.h>
using namespace std;

string toBinaryString(int value, int numBits)
{
    string result;
    for (int i = 0; i < numBits; i++)
    {
        result += (value & (1 << (numBits - 1 - i))) ? '1' : '0';
    }
    return result;
}

long long pow_2(long long k)
{
    long long ans = 1;
    while (k--)
    {
        ans *= 2;
    }
    return ans;
}

int main()
{
    long long n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < pow_2(n); i++)
    {
        string a = toBinaryString(i, n);
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                res += arr[i];
            }
            else
            {
                res -= arr[i];
            }
        }
        if (res % 360 == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
