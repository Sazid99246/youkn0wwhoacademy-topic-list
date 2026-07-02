#include <iostream>
using namespace std;

int main()
{
    int n;
    string flag = "YES";
    cin >> n;
    if (n >= 2)
    {
        for (int i = 2; i < n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = "NO";
                break;
            }
        }
    }

    cout << flag << endl;
}
