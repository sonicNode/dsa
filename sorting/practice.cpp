#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &v, int low, int mid, int high)
{
    vector<int> temp;
    int left = low, right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (v[left] < v[right])
            temp.push_back(v[left++]);
        else
            temp.push_back(v[right++]);
    }
    while (left <= mid)
        temp.push_back(v[left++]);
    while (right <= high)
        temp.push_back(v[right++]);
    int index = low;
    for (int x : temp)
        v[index++] = x;
}
int mergeandCount(vector<int> &v, int low, int mid, int high)
{
}
void mergeSort(vector<int> &vec, int low, int high)
{
    if (low >= high)
        return;
    int mid = low + (high - low) / 2;
    mergeSort(vec, low, mid);
    mergeSort(vec, mid + 1, high);
    merge(vec, low, mid, high);
}
void sort(vector<int> &arr)
{
    mergeSort(arr, 0, arr.size() - 1);
}
void print(vector<int> &arr)
{
    for (int i : arr)
        cout << i << " ";
    cout << endl;
}
int main()
{
    vector<int> vector{0, 9, 8, 7, 6, 5, 4, 3, 2, 1, 11, 10};
    print(vector);
    sort(vector);
    print(vector);
    return 0;
}