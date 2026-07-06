#include <iostream>
using namespace std;

bool isPrime(int n)
{
    bool flag = true;
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int countPrimeDivisors(int n)
{
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0 && isPrime(i))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n, count = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (countPrimeDivisors(i) == 2)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
