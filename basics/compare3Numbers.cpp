#include<iostream>
using namespace std;
auto compare(int a, int b, int c)
{
     if(a>b && a>c)
          return a;
      
    else if(b>a and b>c)
             return b;
    
    else //if(c>a && c>b)
            return c;
}
int main()
{
    int num1,num2,num3;
    cout<<"Enter 3 numbers: ";
    cin>>num1>>num2>>num3;
    if(num1==num2 || num1==num3 || num2==num3)
          cout<<"\"Error\" There must be some same or repeated numbers.";
    else
       cout<<"The largest among these 3 numbers is: "<<compare(num1,num2,num3);      
    return 0;
}