#include <iostream>
using namespace std;
template <class T>
T max(T &a, T &b)
{
    return ((a > b) ? a : b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    try
    {
        // if (a == b)
        //     throw "error";
        // else
        cout << max<int>(a, b);
    }
    catch (...)
    {
        cout << "Values are same: ";
    }
    return 0;
}