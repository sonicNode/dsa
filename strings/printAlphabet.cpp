#include<iostream>
using namespace std;
void alphabet(char &start , char &end)
{
    for(char i = start ; i <= end ; i++)
      cout << i << " ";
}
int main()
{
    char first,last;
    cout << "Enter first and last digits of your alphabet list: ";
    cin>>first>>last;
    alphabet(first,last);
    return 0;
}
