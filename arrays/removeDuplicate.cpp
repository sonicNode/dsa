#include <iostream>
#include <algorithm>
using namespace std;
int remove_duplicate(int arr[], int n)
{
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[count] = arr[i];
            count++;
        }
    }
    return count;
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {1, 4, 56, 95, 99, 2, 9, 1, 4, 56, 95, 99, 0, 9, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    n = remove_duplicate(arr, n);
    print(arr, n);
    return 0;
}