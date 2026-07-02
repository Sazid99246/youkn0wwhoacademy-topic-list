#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b * log((long double)a) > d * log((long double)c))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
