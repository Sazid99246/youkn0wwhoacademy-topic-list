#include <iostream>
using namespace std;

int main()
{
    double n;
    cin >> n;
    int m = n;
    if (m == n)
    {
        cout << "int " << m << endl;
    }
    else
    {
        cout << "float " << m << " " << n - m << endl;
    }

    return 0;
}
