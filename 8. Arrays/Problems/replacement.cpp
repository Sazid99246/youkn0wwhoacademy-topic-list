#include <iostream>
using namespace std;

void replacement(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            a[i] = 1;
        }
        else if (a[i] < 0)
        {
            a[i] = 2;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    replacement(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    delete[] a;
    return 0;
}
