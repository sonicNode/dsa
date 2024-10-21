#include <iostream>
#include <vector>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int pivotPartition(vector<int> &v, int low, int high) // modified hoare partition
{
    int pivot_element = v[low];
    int i = low, j = high;
    while (i < j)
    {
        while (v[i] <= pivot_element && i <= high - 1)
        {
            i++;
        }
        while (v[j] > pivot_element && j >= low + 1)
        {
            j--;
        }

        if (i < j)
            swap(v[i], v[j]);
    }
    swap(v[low], v[j]);

    return j;
}
void quickSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int pivot_index = pivotPartition(arr, low, high);
    quickSort(arr, low, pivot_index - 1);
    quickSort(arr, pivot_index + 1, high);
}
vector<int> quickSortCall(vector<int> &arr)
{
    quickSort(arr, 0, arr.size() - 1);
    return arr;
}
void print(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl;
}
int main()
{
    vector<int> vector{10, 80, 30, 90, 40, 50, 70};
    // 6, 8, 3, 5, 7, 0, 9};
    print(vector);
    quickSortCall(vector);
    // int i = pivotPartition(vector, 0, vector.size() - 1);
    print(vector);
    return 0;
}
