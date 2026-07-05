#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int x = 0; x * a <= c; x++)
    {
        int remaining = c - x * a;

        if (remaining % b == 0)
        {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";

    return 0;
}
