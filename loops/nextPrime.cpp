#include<iostream>
using namespace std;
bool isPrime(int n)
{
    if(n<=1)
      return false;
    for(int i = 2; i <= n/2 ; i++)
      if(n%i==0)
        return false;
    return true;
}
int nextPrime(int n)
{
        int i = n+1;
        if(isPrime(i))
          return i;
        else
          return nextPrime(i++);
}
int main()
{
    int number;
    cout<<"Enter any prime number: ";
    cin>>number;
    cout<<nextPrime(number);
    return 0;
}