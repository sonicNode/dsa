#include<iostream>
using namespace std;
string converter(const string &num)
{
    string binary = "";
    //int end = num.length();
    int n = stoi(num);
   while(n > 0)
   {
      int remainder = n%2;
      binary = to_string(remainder) + binary;
      n /= 2;
   }
   return binary;
}
int main()
{
    string number;
    cout << "Enter any decimal number: ";
    cin >> number;
    cout << "The binary of the number " << number << " is " << converter(number);
}