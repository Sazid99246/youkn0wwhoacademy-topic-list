#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, out = "";
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ',')
        {
            out += ' ';
        }
        else if (isupper(s[i]))
        {
            out += tolower(s[i]);
        }
        else if (islower(s[i]))
        {
            out += toupper(s[i]);
        }
        else
        {
            out += s[i];
        }
    }

    cout << out << endl;

    return 0;
}
