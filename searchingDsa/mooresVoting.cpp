// moore's voting algo
#include <iostream>
#include <vector>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int majority(vector<int> &v)
{
    int n = v.size();
    int count = 0;
    int element = 0;
    for (int i = 1; i < n; i++)
    {
        if (count == 0)
        {
            element = v[i];
        }
        if (element == v[i])
            count++;
        else
            count--;
    }
    return element;
}
void bubbleSort(vector<int> &vec)
{
}
void print(vector<int> &vec)
{
    int n = vec.size();
    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
}
int main()
{
    vector<int> vector = {6, 5, 5}; //{1, 2, 3, 4, 5, 6, 5, 2, 4, 6, 3, 5, 2, 5, 5};
    cout << majority(vector);

    // print(vector);
    // cout << endl;
    // bubbleSort(vector);
    // cout << endl;
    // print(vector);
    return 0;
}