#include <iostream>
#include <cmath>
using namespace std;

long long power(int x, int n)
{
    long long ans = 1;

    for (int i = 1; i <= n; i++)
    {
        ans *= x;
    }

    return ans;
}

int main()
{
    int x, n;
    cin >> x >> n;
    long long result = 0;

    for (int i = 2; i <= n; i += 2)
    {
        result += power(x, i);
    }

    cout << result << endl;

    return 0;
}
