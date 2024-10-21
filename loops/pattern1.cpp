#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int k=n;
   for(int i=1 ; i<=n ; i++)
   {
      for(int j=0; j<n-i ; j++)
        {
          //if(1)
          cout<<" ";
        }
      for(int j=0 ; j<i ; j++)
         cout<<"*";

        //k--;
      cout<<endl;
   }
   return 0;

}