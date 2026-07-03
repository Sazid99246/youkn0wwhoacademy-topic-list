#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min_index = 0;
    int max_index = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[max_index])
        {
            max_index = i;
        }

        if (a[i] < a[min_index])
        {
            min_index = i;
        }
    }

    swap(a[min_index], a[max_index]);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    delete[] a;

    return 0;
}
