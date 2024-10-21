#include<iostream>
using namespace std;
int fib(int n)
{
      if(n<3)
        return 1;
      else
        return fib(n-1)+fib(n-2);
}
int main()
{
    int number;
    cout<<"Enter your number: ";
    cin>>number;
    cout<<fib(number);
    return 0;
}