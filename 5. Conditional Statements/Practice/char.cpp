#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;
    if (isupper(c))
    {
        cout << static_cast<char>(tolower(c)) << endl;
    }
    else
    {
        cout << static_cast<char>(toupper(c)) << endl;
    }
}
