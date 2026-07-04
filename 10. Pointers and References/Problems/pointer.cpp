#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int *a, int *b)
{
    int originalA = *a;
    *a = *a + *b;
    *b = originalA - *b;
    if (*b < 0)
    {
        *b = -*b;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    update(&a, &b);
    cout << a << "\n"
         << b << endl;
    return 0;
}
