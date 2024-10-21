#include<iostream>
using namespace std;
int sumArray(int a[],int n)
{
    int count = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        count = count + a[i];
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0 ; i < n ; i ++)
       cin>>a[i];
    cout<<sumArray(a,n);
    return 0;
}