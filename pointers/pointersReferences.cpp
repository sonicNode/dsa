#include<iostream>
using namespace std;
int main()
{
    int *ptr, x;
    x=10;
    int &ref = x;
    ptr=&x;
    ref += 5;
    *ptr += 5;
    cout<<  "This is ref = " <<ref<<endl;
    cout<< "This is &ref = " <<&ref<<endl;
    cout<< "This is &ptr = " <<&ptr<<endl;
    cout<< "This is &x = " <<&x<<endl;
    cout<< "This is *ptr = " << *ptr;
    return 0;
}