#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
void table(int n)
{   
    
    for(int i=1; i<=n ; i++)
     {
        for(int j=1 ; j<=10 ; j++)
         {  
            cout<<setw(6)<<setfill(' ')<<left;
            cout<<i*j<<"  ";
         }
        cout<<endl;
     }
}
int main()
{
    int number;
    cout<<"Enter the number which upto you want to get table for: ";
    cin>>number;
    
    table(number);
    system("pause");
    return 0;
}