#include <iostream>
// #include <string>
using namespace std;
bool isPalindrome(string s)
{
    if (s.length() == 0)
        return true;
    if (s[0] != s[s.length() - 1])
        return false;
    isPalindrome(s.substr(1, s.length() - 2));
}
int main()
{
    string s;
    getline(cin, s);
    if (isPalindrome(s))
        cout << s << " is a palindrome.";
    else
        cout << s << " is not a palindrome.";
    return 0;
}