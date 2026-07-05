#include <iostream>
using namespace std;

int main()
{
    double n;
    cin >> n;
    int n_int = n;
    if (n - n_int >= .5)
    {
        cout << n_int + 1 << endl;
    }
    else
    {
        cout << n_int << endl;
    }
}
