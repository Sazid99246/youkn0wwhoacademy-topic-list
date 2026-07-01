#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long ans = 1;

    ans = (ans * (a % 100)) % 100;
    ans = (ans * (b % 100)) % 100;
    ans = (ans * (c % 100)) % 100;
    ans = (ans * (d % 100)) % 100;

    cout << setw(2) << setfill('0') << ans << endl;
}
