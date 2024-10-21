#include <iostream>
using namespace std;
bool anagram(const string &s1, const string &s2)
{
  int freq1[26] = {0};
  int freq2[26] = {0};
  for (char x : s1)
  {
    if (x >= 'a' && x <= 'z')
      freq1[x - 'a']++;
    if (x >= 'A' && x <= 'Z')
      freq1[x - 'A']++;
  }
  for (int x : s2)
  {
    if (x >= 'a' && x <= 'z')
      freq2[x - 'a']++;
    if (x >= 'A' && x <= 'Z')
      freq2[x - 'A']++;
  }
  for (int i = 0; i < 26; i++)
    if (freq1[i] != freq2[i])
      return 0;
  return 1;
}
int main()
{
  string input1, input2;
  cout << "Enter first string: ";
  cin >> input1;
  cout << "Enter second string: ";
  cin >> input2;
  if (anagram(input1, input2))
    cout << "Both the strings are \"Anagram\" to each others.";
  else
    cout << "Both the strings are not \"Anagram\" to each others.";
  return 0;
}