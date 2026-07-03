#include <iostream>
#include <cmath>
using namespace std;

long long absoluteSum(int a[], int n)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return abs(sum);
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << absoluteSum(a, n) << endl;

    return 0;
}
