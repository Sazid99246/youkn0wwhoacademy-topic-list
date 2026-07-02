#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n, a, b, sum = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++)
    {
        for (int j = a; j <= b; j++)
        {
            if (sumOfDigits(i) == j)
            {
                sum += i;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
