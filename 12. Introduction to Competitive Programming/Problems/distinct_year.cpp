#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    int y;
    cin >> y;

    while (true)
    {
        y++;
        string s = to_string(y);
        set<char> digits(s.begin(), s.end());

        if (digits.size() == 4)
        {
            cout << y << endl;
            break;
        }
    }

    return 0;
}
