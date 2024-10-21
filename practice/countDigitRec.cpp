#include <iostream>
using namespace std;
int count = 0;
int countDigits(int n)
{
    if (n > 0)
    {
        count++;
        countDigits(n / 10);
    }
    return count;
}
int countDigits1(int n)
{
    if (n < 10)
        return 1;
    else
        return 1 + countDigits1(n / 10);
}
int main()
{
    int n;
    cin >> n;
    cout << countDigits(n) << endl;
    cout << countDigits1(n);
    return 0;
}