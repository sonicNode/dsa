#include<iostream>
using namespace std;
int strstr(string &s, string &x)
{
   return s.find(x);
}
int main()
{
    //char *ptr = "Hello world";
    string s1,s2;
    s1="Ankit";
    s2="o";
    cout << strstr(s1,s2);
    return 0;
}