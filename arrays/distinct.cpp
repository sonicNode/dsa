#include <iostream>
#include <algorithm>
using namespace std;
void distinct(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "i= " << i << endl;
        bool isD = true;
        for (int j = 0; j < i; j++)
        {
            cout << " j= " << j << endl;
            if (arr[i] == arr[j])
            {
                isD = false;
                break;
            }
        }
        if (isD)
            count++;
    }
    cout << count;
}
void read(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    read(arr, n);
    distinct(arr, n);
    return 0;
}