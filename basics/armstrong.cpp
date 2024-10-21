#include <iostream>
#include <math.h>
using namespace std;
int countDigits(int n)
{
    if (n < 10)
        return 1;
    return 1 + countDigits(n / 10);
}
bool armstrong(int n)
{
    int digits = countDigits(n);
    int count = 0;
    while (n > 0)
    {
        int temp = n % 10;
        count = count + pow(temp, digits);
        n /= 10;
    }
    if (count == n)
        cout << true;
    else
        return false;
}
int main()
{
    int x = 1634;
    armstrong(1634);
    // digits(x);
    return 0;
}