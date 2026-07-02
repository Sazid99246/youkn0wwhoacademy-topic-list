#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int m, n, sum = 0;
        cin >> m >> n;
        if (m <= 0 || n <= 0)
        {
            break;
        }
        else
        {
            if (m > n)
            {
                swap(m, n);
            }
            for (int i = m; i <= n; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
        }
    }

    return 0;
}
