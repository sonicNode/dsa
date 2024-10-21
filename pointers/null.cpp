#include<iostream>
using namespace std;
int main()
{
    int *ptr = NULL;
    int arr[] = {10,20,30,40,50};
    ptr=arr;
    int x=10;
    int &y=x;
    //ptr=&x;
    if(ptr)
      cout<<"Not Null."<<"/n";
    else
      cout<<"Null"<<"\n";
    cout<<ptr<<"\n";
    cout<<"This is *ptr "<<*ptr<<endl;
    cout<<"This is &y "<<&y<<endl;
    cout<<"This is y "<<y<<endl;
    cout<<"This is arr "<<arr<<endl;
    cout<<"This is arr[1] "<<*(ptr+1)<<endl;
    return 0;
}