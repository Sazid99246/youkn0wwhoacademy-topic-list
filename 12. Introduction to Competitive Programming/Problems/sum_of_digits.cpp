#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;

    if (n.length() == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    int count = 0;

    while (n.length() > 1)
    {
        int sum = 0;

        for (int i = 0; i < n.length(); i++)
        {
            sum += n[i] - '0';
        }

        n = to_string(sum);
        count++;
    }

    cout << count << endl;

    return 0;
}
