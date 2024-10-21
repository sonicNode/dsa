#include <iostream>
#include <vector>
using namespace std;
// void transpose(vector<vector<int>> &arr)
// {
//     int m = arr.size();
//     int n = arr[0].size();
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0 + 1; j < i; j++)
//         {
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
// }
void print(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}
void print_t(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[j][i] << "  ";
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    cout << "Enter the dimension of the array m X n form: ";
    cin >> m >> n;
    vector<vector<int>> arr;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < m; i++)
    {

        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        arr.push_back(v);
    }
    print(arr);
    cout << endl;
    // transpose(arr);
    print(arr);

    return 0;
}