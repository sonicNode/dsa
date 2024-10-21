#include<iostream>
using namespace std;
bool perfectNumber(int n)
{
    int a=0;
    for(int i=1 ; i<n ; i++)
       if(n%i==0)
         a=a+i;
    if(a==n)
       return true;
    else
       return false;
}
int main()
{
    int number;
    cout<<"Please enter a number: ";
    cin>>number;
    cout<<boolalpha<<perfectNumber(number);
    return 0;
}