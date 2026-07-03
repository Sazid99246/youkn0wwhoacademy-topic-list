#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string ans = "YES";

    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            ans = "NO";
            break;
        }
    }

    cout << ans << endl;

    delete[] a;

    return 0;
}
