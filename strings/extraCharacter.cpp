#include<iostream>
using namespace std;
char compare(const string &s1, const string &s2)
{
    int freq[256] = {0};
    int n1 = s1.length();
    int n2 = s2.length();
    for(int i = 0 ; i < n1 ; i ++)
      {
         int temp = s1[i]; 
         freq[temp]++;
      }
    for(int i = 0 ; i < n2 ; i ++)
      {
        int temp = s2[i];
        freq[temp]--;
      }
    for(int i = 0 ; i < 256 ; i ++)
       if(freq[i] != 0)
         return char(i);
        
    return 0;
}
int main()
{
    string input1,input2;
    cout << "Enter first string: ";
    cin >> input1;
    cout << "Enter second string: ";
    cin >> input2;
    cout << compare(input1, input2);
    return 0;
}