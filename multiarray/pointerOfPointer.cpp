#include <iostream>
using namespace std;
void print(int **arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << "  ";
        cout << endl;
    }
}
int main()
{
    int m, n;
    cout << "Enter the number of row and coloumn respectively: \n";
    cin >> m >> n;
    int **arr;
    arr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {

            int temp;
            cin >> temp;
            arr[i][j] = temp;
        }
    }
    print(arr, m, n);
    return 0;
}