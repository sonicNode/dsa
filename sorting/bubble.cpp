#include <iostream>
#include <vector>
using namespace std;
void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
void bubbleSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }
}
void print(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}
int main()
{
    vector<int> vector{9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    print(vector);
    cout << endl;
    bubbleSort(vector);
    print(vector);
    return 0;
}