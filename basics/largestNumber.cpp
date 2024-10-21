#include<iostream>
using namespace std;
int compare(int a, int b)
{
    if(a>b)
      cout<<a;
    else if(b>a)
      cout<<b;
    else
      cout<< " You madafaka both are same: ";
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    compare(num1,num2);
}
