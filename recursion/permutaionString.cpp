#include <iostream>
using namespace std;
void permutation(string &s, int l = 0, int r = 0)
{
    if (r == s.length())
    {
        r = 0;
        l = 0;
        return;
    }
    swap(s[l], s[r]);
    cout << s << " ";
    permutation(s, l, r + 1);
    permutation(s, l + 1, r + 1);
}
int main()
{
    string s = "ABC";
    permutation(s);
    return 0;
}