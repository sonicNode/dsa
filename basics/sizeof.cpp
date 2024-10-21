
// C++ program to implement sizeof 
// to determine the number of bytes 
// taken by an expression:
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main() 
{
  int a = 5;
  long x = 9;
  double p = 10.2;
  float g = 2.5;
      
  cout << "No of Bytes taken up by (a+g) is " <<
           sizeof(a + g) << endl;
  cout << "No of Bytes taken up by (a+x) is " << 
           sizeof(a + x) << endl;
  cout << "No of Bytes taken up by (a+p) is " << 
           sizeof(a + p) << endl;
  cout << "No of Bytes taken up by (x+p) is " << 
           sizeof(x + p) << endl;
  return 0;
}