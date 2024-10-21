#include<iostream>
using namespace std;
int isPalindrome(const string &str)
{
    int size = str.length();
    int end = size-1;
    for(int start = 0 ; start < size/2 ; start ++)
    {
        if(str[start] != str[end])
          return 0;
        end--;
    }
    return 1;

}
int main()
{
    string input;
    cout << "Enter your string: " << endl;
    cin >> input;
    if(isPalindrome(input))
      cout << "Entered string is a \"Palindrome\".";
    else
      cout << "Entered string is not a \"Palindrome\".";
    return 0;
}
