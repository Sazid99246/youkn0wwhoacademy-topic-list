#include <iostream>
using namespace std;

int floor(double n)
{
    return (int)n;
}

int ceil(double n)
{
    int m = n;

    if (n == m)
        return m;

    return m + 1;
}

int round(double n)
{
    int m = n;

    if (n - m >= 0.5)
        return m + 1;

    return m;
}

int main()
{
    int a, b;
    cin >> a >> b;

    double result = (double)a / b;

    cout << "floor " << a << " / " << b << " = " << floor(result) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(result) << endl;
    cout << "round " << a << " / " << b << " = " << round(result) << endl;
}
