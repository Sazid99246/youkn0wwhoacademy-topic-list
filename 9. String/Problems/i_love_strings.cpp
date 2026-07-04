#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, t, output = "";
        cin >> s >> t;

        for (int i = 0; i < max(s.length(), t.length()); i++)
        {
            if (i < s.length())
            {
                output += s[i];
            }
            if (i < t.length())
            {
                output += t[i];
            }
        }

        cout << output << endl;
    }
    return 0;
}
