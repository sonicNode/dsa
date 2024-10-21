#include <iostream>
#include <vector>
using namespace std;
// void merge(int arr[], int l, int m, int h)
// {

//     int n1 = m - l + 1, n2 = h - m;
//     int left[n1], right[n2];

//     for (int i = 0; i < n1; i++)
//         left[i] = arr[i + l];
//     for (int j = 0; j < n2; j++)
//         right[j] = arr[m + 1 + j];
//     int i = 0, j = 0, k = l;
//     while (i < n1 && j < n2)
//     {
//         if (left[i] <= right[j])
//             arr[k++] = left[i++];
//         else
//             arr[k++] = right[j++];
//     }
//     while (i < n1)
//         arr[k++] = left[i++];
//     while (j < n2)
//         arr[k++] = right[j++];
// }
void merge(int ans[], int low, int mid, int high)
{
    int n = (mid - low) + 1, m = (high - mid);
    int a[n], b[m];

    for (int i = 0; i < n; i++)
        a[i] = ans[i + low];
    for (int i = 0; i < m; i++)
        b[i] = ans[i + mid + 1];
    int index = low, left = 0, right = 0;
    while (left < n && right < m)
    {
        if (a[left] <= b[right])
        {
            ans[index] = a[left];
            left++;
        }
        else
        {
            ans[index] = b[right];
            right++;
        }
        index++;
    }
    while (left < n)
    {
        ans[index] = a[left];
        left++, index++;
    }
    while (right < m)
    {
        ans[index] = b[right];
        right++, index++;
    }
}
void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
void print(int v[], int n)
{
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}
int main()
{

    // vector<int> output{1, 3, 5, 2, 4, 6, 8, 10};
    // merge(output, 0, 2, 7);
    // print(output);

    int v[] = {5, 7, 1, 4, 6, 2, 8, 0, 3, 9};
    int high = (sizeof(v) / sizeof(v[0])) - 1, low = 0;
    print(v, high + 1);
    mergeSort(v, low, high);
    print(v, high + 1);

    return 0;
}