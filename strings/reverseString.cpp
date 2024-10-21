#include<iostream>
using namespace std;
string reverser(const string str)
{
    string output = "";
    for(int i = str.length()-1 ; i >= 0 ; i --)
    {
        output = output + str[i];
    }
    return output;
}
int main()
{
    string input;
    cout << "Enter your primary string: ";
    getline(cin, input);
    cout << "Your reversed string is : " << reverser(input);
    return 0;
}