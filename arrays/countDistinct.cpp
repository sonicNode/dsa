#include <iostream>
using namespace std;
void count(int a[], int n)
{
   int c = 1;

   for (int i = 0; i < n; i++)
   {
      // cout << "i= " << i << endl;
      bool isDistinct = true;
      for (int j = i - 1; j >= 0; j--)
      {
         // cout << " j= " << j << endl;
         if (a[i] == a[j])
         {
            isDistinct = false;
            break;
         }
      }
      if (isDistinct)
         c++;
   }
   cout << "Number of total distinct elements is : " << c;
}
int main()
{
   int n;
   cout << "Enter the number of the elements: ";
   cin >> n;
   int a[n];
   cout << "Enter the values of the array: ";
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
   }
   count(a, n);
   return 0;
}