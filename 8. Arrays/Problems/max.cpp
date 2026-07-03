#include <iostream>
using namespace std;

int max(int x[], int n)
{
    int max_number = x[0];

    for (int i = 1; i < n; i++)
    {
        if (x[i] > max_number)
        {
            max_number = x[i];
        }
    }
    return max_number;
}

int main()
{
    int n;
    cin >> n;

    int *x = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int max_number = max(x, n);
    cout << max_number << endl;

    delete[] x;
    return 0;
}
