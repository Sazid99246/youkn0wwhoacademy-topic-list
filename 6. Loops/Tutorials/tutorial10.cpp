#include <iostream>
using namespace std;

int main()
{
    int x[5];

    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
    {
        x[i] = 100;
    }

    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
    {
        cout << x[i] << endl;
    }
}
