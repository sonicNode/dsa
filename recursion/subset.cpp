#include <iostream>
using namespace std;
void subset(string s, string n, int index)
{
    if (index == s.length())
    {
        cout << n << " ";
        return;
    }
    subset(s, n, index + 1);
    subset(s, n + s[index], index + 1);
}
int main()
{
    string s = "abc";
    // getline(cin, s);

    subset(s, "", 0);
    return 0;
}