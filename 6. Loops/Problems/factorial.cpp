#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        long long fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        cout << fact << endl;
    }
}
