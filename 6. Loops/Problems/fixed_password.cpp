#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (true)
    {
        if (n == 1999)
        {
            cout << "Correct" << endl;
            break;
        }

        cout << "Wrong" << endl;
        cin >> n;
    }

    return 0;
}
