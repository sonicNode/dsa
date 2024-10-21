#include <iostream>
using namespace std;
long long int squareRoot(long long int n)
{
    long long int high = n / 2;
    long long int low = 1;
    int ans;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        long long square = mid * mid;
        if (square == n)
            return mid;
        else if (square < n)
            high = mid - 1;
        if (square <= n)
        {
            low = mid + 1;
            ans = mid;
        }
        return ans;
    }
}
int main()
{
    int x = 12;
    cout << squareRoot(x);
    return 0;
}