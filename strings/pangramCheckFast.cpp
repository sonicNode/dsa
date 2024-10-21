#include<iostream>
#include<string>
using namespace std;
bool pangram(const string &str)
{
    bool count[26] = {0};
    for(int i = 0 ; i < str.length() ; i ++)
       {
           if(str[i] >= 'A' && str[i] <= 'Z')
            count[str[i] - 'A'] = 1;
           
           if(str[i] >= 'a' && str[i] <= 'z')
            count[str[i] - 'a'] = 1;
       }
    for(bool x : count)
      if(x==false)
        return 0;
    return 1;
}
int main()
{
    string input;
    cout << "Enter your string : ";
    getline(cin, input);
    //pangram(input);
    if(pangram(input))
      cout << "The entered string is a \"Pangram\"";
    else
      cout << "The entered string is not a \"Pangram\"";
    return 0;
}