#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
void print(int *arr[], int &m, int &n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}
void transpose(int *arr[], int &m, int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    swap(m, n);
}
int main()
{
    int m, n;
    cout << "Enter the number of rows and couloumns of the matrix respectively: ";
    cin >> m >> n;
    int *arr[m];
    cout << "Enter the elements of the matrix: \n";
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The entered matrix is: \n";
    print(arr, m, n);
    transpose(arr, m, n);
    cout << "The transpose of the given matrix is: \n";
    print(arr, m, n);
    return 0;
}