#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;

        int *a = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                bool ok = true;

                for (int k = i; k < j; k++)
                {
                    if (a[k] > a[k + 1])
                    {
                        ok = false;
                        break;
                    }
                }

                if (ok)
                    count++;
            }
        }

        cout << count << endl;

        delete[] a;
    }

    return 0;
}
