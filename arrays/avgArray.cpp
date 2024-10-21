#include<iostream>
using namespace std;
double avgArray(int a[], int n)
{
    int sum = 0;
    for(int i = 0 ; i < n ; i ++)
      sum = sum + a[i];
    return double(sum)/(n);
}
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0 ; i < n ; i ++)
      cin>>arr[i];
    cout<<avgArray(arr, n);
    return 0;
}

