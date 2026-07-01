#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    // Save original values
    int a = A, b = B, c = C;

    // Sort A, B, C in ascending order
    if (A > B)
        swap(A, B);
    if (A > C)
        swap(A, C);
    if (B > C)
        swap(B, C);

    // Print sorted numbers
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;

    cout << endl;

    // Print original order
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
