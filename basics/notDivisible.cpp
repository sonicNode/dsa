#include<iostream>
using namespace std;
void utility(int n, int x)
{ 
    for(int i=1; i<=n; i++)
    {
           if(i%x!=0)
           {
            cout<<i<<" ";
           }
    }
    
}
int main()
{
    cout<<"Enter any number: ";
    int number;
    cin >> number;
    int value;
    cout<<"Value: ";
    cin >> value;
    utility(number,value);
    return 0;
}