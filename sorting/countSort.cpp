#include <iostream>
#include <vector>
using namespace std;
void countSort(vector<int> &v, int key)
{
    vector<int> count(key, 0);
    for (int x : v)
        count[x]++;
    for (int i = 1; i < key; i++)
        count[i] = count[i - 1] + count[i];
    vector<int> output(v.size(), 0);
    for (int i = v.size() - 1; i >= 0; i--)
    {
        output[count[v[i]] - 1] = v[i];
        count[v[i]]--;
    }
    int i = 0;
    for (int x : output)
    {
        v[i] = x;
        i++;
    }
}
void print(vector<int> &vec)
{
    for (int x : vec)
        cout << x << " ";
    cout << endl;
}
int main()
{
    vector<int> vector{1, 4, 4, 1, 0, 1, 3, 3, 2, 1, 2, 0};
    int key = 5;
    print(vector);
    countSort(vector, key);
    print(vector);
    return 0;
}