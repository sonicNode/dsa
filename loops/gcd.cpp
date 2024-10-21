#include<iostream>
using namespace std;
/*int min(int a, int b)
{
    if(a>b)
     return b;
    else if(b>a)
     return a;
    else
     return 0;
}*/
int gcd(int a, int b)
{ 
    int ans=1;
    if(min(a,b)==0)
     return 0;
    else
    for(int i = 1; i <= min(a,b); i++ )
     {
           if(a%i==0 && b%i==0)
             {
                 ans=i;
             }
     }
     return ans;
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<num1%num2<<num2%num1;
    if(gcd(num1,num2)==0)
      cout<<num1;
    else
      cout<<gcd(num1,num2);
    return 0;
}