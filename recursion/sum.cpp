#include <iostream>
using namespace std;
int sum(int N)
{
    if (N == 0)
        return 0;
    return (N % 10) + sum(N / 10);
}
int main()
{
    int x = 294;
    cout << sum(x);
    return 0;
}