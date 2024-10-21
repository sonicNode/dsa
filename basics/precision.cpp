#include<iostream>
#include<iomanip>
//#include<bits/stdc++.h>
using namespace std;

void precision_5(float a)
 {
      
      cout << std::fixed << setprecision(3) << a;

 }
int main()
{
    float number;
    cout << "Enter any float number" << "\n";
    cin >> number;
    precision_5(number);
    return 0;
}