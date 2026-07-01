#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int largest, smallest;
    if (a >= b && a >= c)
    {
        largest = a;
    }
    else if (b >= a && b >= c)
    {
        largest = b;
    }
    else if (c >= a && c >= b)
    {
        largest = c;
    }

    if (a <= b && a <= c)
    {
        smallest = a;
    }
    else if (b <= a && b <= c)
    {
        smallest = b;
    }
    else if (c <= a && c <= b)
    {
        smallest = c;
    }

    cout << smallest << " " << largest << endl;
}
