#include<iostream>
using namespace std;
void pattern(string &str, string &pat)
{
   int found = str.find(pat);
   while(found != string :: npos)
     {
        cout << "Pattern found at : " << found<< endl;
        found = str.find(pat, found+1);
     }
}
int main()
{
    string input,search;
    cout << "Enter any string: ";
    cin >> input;
    cout << "Enter the pattern to be searched: ";
    cin >> search;
    pattern(input, search);
    return 0;
}