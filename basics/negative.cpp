#include<iostream>
using namespace std;
string sign(int a)
{
    if(a>0)
      return "Positive ";
    else
      return "Negative ";

}
string evenOdd(int a)
{
     if(a%2==0)
       return "Even ";
     else
        return "Odd ";

}
int main()
{
   int number;
   cout<<"Enter a number (any number any sign): ";
   cin>>number;

      if(number==0)
         cout<< "You entered \"Zero\"";
      else
         cout<<sign(number)<<evenOdd(number)<<"number is entered.";
    return 0;
    

}