#include <iostream>
using namespace std;

int main()
{
    bool x = true;
    bool &y = x;
    cout << &x << endl;
    cout << &y << endl;

    return 0;
}
