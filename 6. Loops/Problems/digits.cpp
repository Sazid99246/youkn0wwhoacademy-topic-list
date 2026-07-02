#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        if (n == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            while (n > 0)
            {
                cout << n % 10 << " ";
                n /= 10;
            }
            cout << endl;
        }
    }
}
