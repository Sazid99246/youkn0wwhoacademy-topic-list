#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int arr[x] = {4, 5, 6, 7, 8};
    string arr2[] = {"tim", "is", "great"};\
    float arr3[] = {1.1, 1.2, -0.9};

    cout << sizeof(arr)/sizeof(arr[0]) << endl;
}
