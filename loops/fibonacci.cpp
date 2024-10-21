#include<iostream>
using namespace std;
void fibonacci(int n)
{ 
    int arr[n];
    arr[0] = 1;
    arr[1] = 1;
   // cout<<arr[0]<<endl<<arr[1]<<endl;
    for(int i = 2; i < n; i++)
    {
        arr[i]=arr[i-1] + arr[i-2];
        //cout<<arr[i]<<" ";
        //cout<<endl;
        
    }
    cout<<endl<<arr[n-1];
}
int main()
{
    int number;
    cin>>number;
    fibonacci(number);
    return 0;
}