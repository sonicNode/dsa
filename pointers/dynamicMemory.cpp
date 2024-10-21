#include<iostream>
using namespace std;
int *fun()
{
    //int x =10;
    int *ptr = new int;
    *ptr=10;
    return ptr;
}
int main()
{
    int a,b;
    cout<<*fun();
    return 0;
}