#include<iostream>
using namespace std;
void sort(int *arr, int *size)
{
    int *min = new int;

    for(int i = 0 ; i < *size-1 ; i ++)
    {
        //*min = *(arr+i);
        for(int j = i+1 ; j < *size ; j ++)
        {
           if(*(arr+i) >= *(arr+j))
           {
             int temp = *(arr+i);
             *(arr+i) = *(arr+j);
             *(arr+j) = temp;

           }
        }
    }
    delete min;
      
}
void display(int *arr, int *size)
{
    for(int i = 0 ; i < *size ; i ++)
        cout << *(arr+i)<<endl;
}
void read(int *arr, int *size)
{
    for(int i = 0 ; i < *size ; i ++)
         cin >> *(arr+i);
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    read(arr,&n);
    cout << "Output: " << endl;
    sort(arr,&n);
    display(arr,&n);
    return 0;
}