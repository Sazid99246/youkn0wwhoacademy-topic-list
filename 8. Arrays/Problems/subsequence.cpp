#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, count = 0;
    cin >> n >> m;

    long long A[n], B[m];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int j = 0; j < m; j++)
    {
        cin >> B[j];
    }

    for (int i = 0; i < n; i++)
    {
        if (count < m && A[i] == B[count])
        {
            count++;
        }
    }

    if (count == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
