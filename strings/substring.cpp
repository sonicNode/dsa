#include<iostream>
using namespace std;
string substring(string &original, int &l , int &r)
{
    return original.substr(l-1,r-l+1);
}
int main()
{
    string str="abcdefg";
    int n1=1,n2=5;
    cout<<substring(str,n1,n2);
    return 0;
}