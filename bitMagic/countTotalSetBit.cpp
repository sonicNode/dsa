#include <iostream>
using namespace std;

int table[256];

void initialize()
{

    // To initially generate the table algorithmically:
    table[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = table[i & (i - 1)] + 1;
    }
}
int setBits(int n)
{
    initialize();
    return table[n & 255] +
           table[(n >> 8) & 255] +
           table[(n >> 16) & 255] +
           table[n >> 24];
}

int main()
{
    int n;
    n = 255;
    // cout << countOnes(n);
    cout << setBits(n) << endl;
    return 0;
}