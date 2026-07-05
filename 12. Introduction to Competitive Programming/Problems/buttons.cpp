#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = max(a, b);
    if (a > b)
        a--;
    else
        b--;

    ans += max(a, b);

    cout << ans << endl;

    return 0;
}
