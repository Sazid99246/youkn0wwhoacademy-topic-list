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

        int *a = new int[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int start = 0; start < n; start++)
        {
            int maximum = a[start];

            for (int end = start; end < n; end++)
            {
                if (a[end] > maximum)
                    maximum = a[end];

                cout << maximum << " ";
            }
        }

        cout << endl;

        delete[] a;
    }

    return 0;
}
