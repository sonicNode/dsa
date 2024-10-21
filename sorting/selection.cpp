#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void selection(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int max_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[max_index])
                max_index = j;
        }
        swap(v[max_index], v[i]);
    }
}
void print(vector<int> &vec)
{
    int n = vec.size();
    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
}
int main()
{
    vector<int> vector = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    print(vector);
    cout << endl;
    selection(vector);
    cout << endl;
    print(vector);
    return 0;
}