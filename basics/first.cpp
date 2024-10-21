#include<iostream>
using namespace std;

string output(int a, int b)
{
    int ans;
    if(a==b)
      ans=1;
    else 
      ans=0;
    switch(ans)
    {
        case 1:
          return "same";
          break;
        case 0:
          return "different";
          break;
        default :
          return "Unexpected error.";

    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<output(a,b);
    string days[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    cout<<days[0];
    return 0;
}