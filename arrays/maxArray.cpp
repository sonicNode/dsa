#include<iostream>
using namespace std;
int maxArray(int a[], int n)
{
    int max = 0;
    for(int i = 0 ; i < n-1 ; i ++)
    {
        if(a[i]>max)
          max=a[i];
    }
    return max;
}
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0 ; i < n ; i ++)
    {
        cin>>arr[i];
    }
    cout<<maxArray(arr, n);
    return 0;
}