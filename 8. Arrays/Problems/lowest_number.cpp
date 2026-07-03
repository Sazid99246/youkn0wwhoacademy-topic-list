#include <iostream>
using namespace std;

void lowest_number(int x[], int n)
{
    int min_number = x[0], min_position = 1;

    for (int i = 1; i < n; i++)
    {
        if (x[i] < min_number)
        {
            min_number = x[i];
            min_position = i + 1;
        }
    }
    cout << min_number << " " << min_position << endl;
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

    lowest_number(x, n);

    delete[] x;
    return 0;
}
