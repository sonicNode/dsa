#include <iostream>
#include <vector>
using namespace std;
void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
void insertionSort(vector<int> &v)
{
    int n = v.size(), j = 0;
    for (int i = 0; i < n; i++)
    {
        int index = i;
        while (index > 0 && v[index - 1] > v[index])
        {
            swap(v[index], v[index - 1]);
            index--;
        }
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
    vector<int> vector{0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    print(vector);
    cout << endl;
    insertionSort(vector);
    print(vector);
    return 0;
}