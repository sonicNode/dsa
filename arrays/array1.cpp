#include<iostream>
using namespace std;
bool sorting(int arr[], int n)
{
    for(int i = 0 ; i < n-1 ; i ++) 
          if(arr[i] > arr[i+1])
              return false;
       
        return true;
}
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the member of the array: ";
    for(int i = 0 ; i < size ; i ++)
    {
        cin>>arr[i];
    }
    if(sorting(arr,size))
       cout<<"Sorted.";
    else
        cout<<"Unsorted.";   
    return 0;
}
