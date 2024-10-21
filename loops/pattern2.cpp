#include<iostream>
using namespace std;
void pattern(int s)
{
     for(int i=0 ; i<s ; i++)
    {
        for(int j=1 ; j<=i+1 ; j++)
        {
            if(j==1 || j==i+1 || i==s-1)
              cout<<"* ";
            else
              cout<<"  ";
        }
        cout<<endl;
    }
}
int main()
{
    int side;
    cin>>side;
    pattern(side);
    return 0;
}