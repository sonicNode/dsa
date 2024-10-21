#include<iostream>
using namespace std;
void condition(int a)
{
    if(a>0)
      {
         
           if(a%2==0)
              cout<<"Positive Even number is entered";
           else
              cout<<"Positive Odd number is entered.";

      }
    else if(a==0)
              cout<<"The number is \"zero\"";
    else 
       {
           if(a%2==0)
              cout<<"Negative even number is entered.";
           else
              cout<< "Negative odd number is entered.";
       }
}

int main()
{
       int number;
       cout<<"Enter a number: "<<endl;
       cin>> number;
       condition(number);
       return 0;


}