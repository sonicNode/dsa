#include<iostream>
#include<vector>
using namespace std;
void dec(int n)
{
    vector<int> v;

    while(n>0)
    {
        //int t = n % 2;
        v.push_back(n%2);
        n=int(n)/2;
    }
    for(int i=v.size()-1 ; i >= 0 ; i--) {
      cout << v[i];
    }
}
int main()
{
    int number;
    cout<<"Enter a decimal number: ";
    cin>>number;
    dec(number);
    return 0;
}