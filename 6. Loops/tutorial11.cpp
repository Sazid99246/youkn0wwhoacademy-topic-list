#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int add;
    cout << "Type a number to add to x: ";
    cin >> add;
    x += add;
    cout << "x is:" << x << endl;
    while (x < 10)
    {
        cout << "Type a number to add to x: ";
        cin >> add;
        x += add;
        cout << "x is: " << x << endl;
    }

    do
    {
        int add;
        cout << "Type a number to add to x: ";
        cin >> add;
        x += add;
        cout << "x is: " << x << endl;
    } while (x < 10);
}
