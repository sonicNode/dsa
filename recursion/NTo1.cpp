#include <iostream>
using namespace std;
void printNos(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    printNos(n - 1);
}
int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}
int main()
{
    int n;
    cin >> n;
    printNos(n);
    cout << endl
         << sum(n);
    return 0;
}