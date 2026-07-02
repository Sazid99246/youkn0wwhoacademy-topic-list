#include <iostream>
using namespace std;

string isPalindrom(int n)
{
    int original = n;
    int reversed = 0;

    while (n > 0)
    {
        reversed = reversed * 2 + (n % 2);
        n = n / 2;
    }

    if (original == reversed)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        cout << isPalindrom(n) << endl;
    }
}
