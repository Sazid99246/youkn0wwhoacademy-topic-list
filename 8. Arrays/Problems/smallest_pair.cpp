#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;

        int *a = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long minNumber = 1e18;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long sum = (long long)a[i] + a[j] + (j - i);

                if (sum < minNumber)
                {
                    minNumber = sum;
                }
            }
        }

        cout << minNumber << endl;

        delete[] a;
    }

    return 0;
}
