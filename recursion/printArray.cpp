#include <iostream>
using namespace std;
bool isPresent(int arr[], int n, int find)
{
    if (n == 0)
        return false;

    if (arr[n - 1] == find)
        return true;

    isPresent(arr, n - 1, find);
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int find;
    cin >> find;
    cout << boolalpha << isPresent(arr, 6, find);
    // for (int i = 0; i < 6; i++)
    //     cout << arr[i] << " ";
    return 0;
}