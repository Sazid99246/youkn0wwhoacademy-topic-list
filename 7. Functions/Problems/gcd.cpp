#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int greatestDevisor = 1;
    int n = min(a, b);
    for (int i = n; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }

    return 0;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}
