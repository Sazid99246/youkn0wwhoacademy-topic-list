#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int *freq = new int[m + 1]();

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    for (int i = 1; i <= m; i++)
    {
        cout << freq[i] << endl;
    }

    delete[] freq;
    return 0;
}
