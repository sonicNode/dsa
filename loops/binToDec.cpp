#include<iostream>
using namespace std;
int bin(int n)
{
    int i=1,b=0;
    while(n>0)
      {
        b=b+(n%10)*i;
        n=n/10;
        i=i*2;
      }
      return b;
}
int main()
{
    int number;
    cout<<"Enter any binary number: ";
    cin>>number;
    cout<<bin(number);
    return 0;
}