#include<iostream>
using namespace std;
int lcm(int a, int b)
{
    for(int i = max(a,b); i <= a*b; i++)
     if(i%a==0 && i%b==0)
       return i;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<lcm(n1,n2);
    return 0;
}