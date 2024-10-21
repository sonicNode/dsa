#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int number(int x, int n);
void countSort(vector<int> &v, int num)
{
    vector<int> count(10, 0);
    for (int x : v)
        count[number(x, num)]++;
    for (int i = 1; i < 10; i++)
        count[i] = count[i - 1] + count[i];
    vector<int> output(v.size(), 0);
    for (int i = v.size() - 1; i >= 0; i--)
    {
        output[count[number(v[i], num)] - 1] = v[i];
        count[number(v[i], num)]--;
    }
    int i = 0;
    for (int x : output)
    {
        v[i] = x;
        i++;
    }
}
int digits(int n) // returns number of digits of n
{
    if (n < 10)
        return 1;
    return 1 + digits(n / 10);
}
int number(int x, int n) // returns the nth number 1 is for right most digit
{
    int dig_x = digits(x);
    if (n > dig_x)
        return 0;
    if (n == 1)
        return x % 10;
    if (x == 0)
        return 0;
    return number(x / 10, n - 1);
}
void radixSort(vector<int> &v)
{
    int max = INT_MIN;
    for (int x : v)
        if (x > max)
            max = x;
    int dig_max = digits(max);
    for (int i = 1; i <= dig_max; i++)
    {
        countSort(v, i);
    }
}
void print(vector<int> &vec)
{
    cout << "[ ";
    for (int i = 0; i < vec.size() - 1; i++)
        cout << vec[i] << ", ";
    cout << vec[vec.size() - 1];
    cout << " ]" << endl;
}
int main()
{
    vector<int> vector{319, 212, 6, 8, 100, 50};
    print(vector);
    radixSort(vector);
    print(vector);
    // radixSort(vector);
    // cout << digits(986) << endl;

    return 0;
}
