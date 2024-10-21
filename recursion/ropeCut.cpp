#include <iostream>
#include <algorithm>
using namespace std;
int ropeCut(int n, int a, int b, int c)
{
    if (n < 0)
        return -1;
    if (n == 0)
        return 0;
    int res = max(ropeCut(n - a, a, b, c), max(ropeCut(n - b, a, b, c), ropeCut(n - c, a, b, c)));
    if (res == -1)
        return 0;
    return res + 1;
}
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << "\n"
         << ropeCut(n, a, b, c);
    return 0;
}