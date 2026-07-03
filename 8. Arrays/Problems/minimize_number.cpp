#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        int cnt = 0;

        while (x % 2 == 0)
        {
            cnt++;
            x /= 2;
        }

        if (cnt < ans)
            ans = cnt;
    }

    cout << ans << endl;

    return 0;
}
