#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            arr[i] = 0;
        }
        else if (i == 1)
        {
            arr[i] = 1;
        }
        else
        {
            int fib = arr[i - 1] + arr[i - 2];
            arr[i] = fib;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
