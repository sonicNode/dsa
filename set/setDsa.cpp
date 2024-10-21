#include <iostream>
#include <set>
#include <climits>
using namespace std;
class Data
{
public:
  set<int> userData;
  void insert(int x) { userData.insert(x); }
  bool search(int x) { return (userData.find(x) != userData.end()); }
  void Delete(int x) { userData.erase(x); }
  void print()
  {
    cout << endl;
    for (int x : userData)
      cout << x << " ";
    cout << endl;
  }
  int getCeiling(int num)
  {
    auto it = userData.lower_bound(num);
    if (it != userData.end())
      return *it;
    else
      return INT_MAX;
  }
  int getFloor(int num)
  {
    auto it = userData.lower_bound(num);
    if (it == userData.begin())
    {
      if (*it == num)
        return *it;
      else
        return INT_MIN;
    }
    else if (it != userData.end() && *it == num)
      return *it;
    it--;
    return *it;
  }
};
int main()
{
  Data input;
  input.insert(10);
  input.insert(30);
  input.insert(50);
  input.print();
  cout << input.search(50);
  input.Delete(50);
  cout << input.search(50);
  input.print();
  input.insert(50);
  cout << input.getCeiling(33) << endl;
  ;
  return 0;
}