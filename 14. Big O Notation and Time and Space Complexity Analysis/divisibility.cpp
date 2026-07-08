#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long a, b, answer = 0;
        cin >> a >> b;
        if (a % b == 0)
        {
            answer = 0;
        }
        else
        {
            answer = b - (a % b);
        }
        cout << answer << endl;
    }
    return 0;
}
