#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int zero_count = 4 - n.length();

    for (int i = 0; i < zero_count; i++)
    {
        cout << "0";
    }
    cout << n << endl;

    return 0;
}
