#include<iostream>
using namespace std;
string check_leapYear(int a)
{
    if(a%4 == 0 && a%100 != 0)
       return "Leap Year.";
    else if(a%400==0)
       return "Leap Year.";
    else
       return "Not a leap year.";
}
int main()
{
    int year;
    cout<<"Enter any year which you want to chek for leap year: ";
    cin>>year;
    cout<<check_leapYear(year);
    return 0;
}