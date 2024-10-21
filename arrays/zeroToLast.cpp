#include <iostream>
#include <algorithm>
using namespace std;
void move_zero(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[9] = {0, 1, 2, 3, 0, 0, 5, 2, 0};
    move_zero(arr, 9);
    print(arr, 9);
    return 0;
}