#include<iostream>
using namespace std;
bool isPrime(int n)
{
    for(int i=2; i<n ; i++)
    {
        if(n%i==0)
          return false;
        else
          return true;
    }
}
void primeFactor(int n)
{
    for(int i=2; i<=n; i++)
    {
        //if(isPrime(i))
         
            while(n%i==0)
              { 
                cout<<i<<endl;
                n=n/i;
              }
                
    }
}
int main()
{
  cout<<"Enter any number: ";
  int number;
  cin>>number;
  primeFactor(number);
  return 0;

}