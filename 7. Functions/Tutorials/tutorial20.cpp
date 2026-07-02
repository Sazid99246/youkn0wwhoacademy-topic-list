#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 2;
    int b = 4;
    cout << a << endl;
    cout << b << endl;
    cout << "Swapping" << endl;
    swap(a, b);
    cout << a << endl;
    cout << b << endl;

    return 0;
}
