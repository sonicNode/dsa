#include <iostream>
#include <math.h>
using namespace std;
void toh(int n, char a, char b, char c)
{

    if (n == 0)
        return;
    toh(n - 1, a, c, b);
    cout << "Move disk " << n << " from " << a << " to " << c << endl;
    toh(n - 1, b, a, c);
}
int main()
{
    int n;
    cin >> n;
    toh(n, 'A', 'B', 'C');
    cout << "Total moves required: " << pow(2, n) - 1;
    return 0;
}