#include<iostream>
using namespace std;
int converter(string &num)
{
    int ans = 0;
    int bin = 1;
    for(int i = (num.length()-1) ; i >= 0 ; i --)
    {
        ans = ans + (num[i]-'0')*bin;
        bin = bin * 2;
    }
    return ans;
}
int main()
{
    string input;
    cout << "Enter any binary number: ";
    cin >> input;
    cout << converter(input);
    return 0;
}